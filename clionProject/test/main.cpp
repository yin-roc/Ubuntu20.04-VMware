#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <string>
#include <mutex>
#include <condition_variable>

std::atomic<bool> isAutoMode(false);
std::atomic<bool> stopWriting(false);
std::mutex serialMutex;
std::condition_variable cv;

void listenSerial() {
    while (true) {
        std::string input;
        std::cin >> input;  // 模拟串口监听
        {
            std::lock_guard<std::mutex> lock(serialMutex);
            if (input == "telecontrol") {
                isAutoMode = false;
                stopWriting = true;
                std::cout << "Switched to telecontrol mode.\n";
            } else if (input == "auto") {
                isAutoMode = true;
                stopWriting = false;
                std::cout << "Switched to auto mode.\n";
            }
        }
        cv.notify_all();  // 通知写入线程状态变更
    }
}

void writeSerial() {
    while (true) {
        std::unique_lock<std::mutex> lock(serialMutex);
        cv.wait(lock, []{ return isAutoMode.load() || stopWriting.load(); });

        if (isAutoMode) {
            if (stopWriting) {
                std::cout << "Stopping write operation.\n";
                stopWriting = false;  // Reset stopWriting for the next cycle
                continue;
            }
            // 模拟向串口写入数据
            std::cout << "Writing data to serial...\n";
            lock.unlock();  // 释放锁以允许其他操作在写入期间进行
            std::this_thread::sleep_for(std::chrono::seconds(1));  // 模拟写入延迟
            lock.lock();  // 重新获取锁以检查停止条件
        }
    }
}

int main() {
    std::thread listener(listenSerial);
    std::thread writer(writeSerial);

    listener.join();
    writer.join();

    return 0;
}
