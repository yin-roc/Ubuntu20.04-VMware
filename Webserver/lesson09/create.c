/*
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>


    // 创建了一个新文件
    int open(const char *pathname, int flags, mode_t mode);
        参数:
            - pathname: 要创建的文件的路径
            - flags: 对文件的操作权限和其他设置
                - 必选项: O_RDONLY, O_WRONLY, or O_RDWR 这三个设置是互斥的
                - 可选项: O_CREAT，文件不存在，创建新文件
            - mode: 八进制数，表示用户对创建出的新的文件的操作权限，比如: 0775
            最终的权限是: mode & ~umask
            0777    ->  111111111      
        &   0775    ->  111111101
        --------------------------
                        111111101
        按位与: 0 和任何数都为 0

        umask 的作用就是抹去某些权限。（系统默认 umask 是 0002，即系统不允许其他用户组对该文件拥有写权限）

        flags 参数是一个 int 类型的数据，占 4 个字节，32位，每一位都是一个标志位

*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd = open("create.txt", O_RDWR | O_CREAT, 0777);

    if(fd == -1){
        perror("create");
    }        

    // 关闭
    close(fd);
    
    return 0;
}
    