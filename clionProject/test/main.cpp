#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <mutex>

std::atomic<bool> auto_mode(false);
std::atomic<bool> stop_thread(false);
std::condition_variable cv;
std::mutex cv_m;

void autoModeTask() {
    int speed = 1;
    while (!stop_thread.load() && speed <= 10) {
        std::this_thread::sleep_for(std::chrono::seconds(1)); // 模拟工作
        std::cout << "Speed: " << speed << std::endl;
        speed++;
    }
    if (stop_thread.load()) {
        std::cout << "Auto mode stopped by hand mode." << std::endl;
    } else {
        std::cout << "Auto mode completed." << std::endl;
    }
}

void monitorSerialPort() {
    while (true) {
        std::string state;
        std::cin >> state; // 模拟串口输入

        if (state == "auto") {
            if (!auto_mode.load()) {
                auto_mode.store(true);
                stop_thread.store(false);
                std::thread(autoModeTask).detach();
            }
        } else if (state == "hand") {
            if (auto_mode.load()) {
                stop_thread.store(true);
                {
                    std::lock_guard<std::mutex> lk(cv_m);
                    auto_mode.store(false);
                }
                cv.notify_one();
            }
        }
    }
}

int main() {
    std::thread monitorThread(monitorSerialPort);
    monitorThread.join();
    return 0;
}