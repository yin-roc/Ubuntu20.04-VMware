/*
    #include <unistd.h>
    int access(const char *pathname, int mode);
        作用: 判断某个文件是否有某个权限,或者判断文件是否存在
        参数:
            - pathname: 判断文件的路径
            - mode: 
                R_OK: 是否有读权限
                W_OK: 是否有写权限
                X_OK: 是否有执行权限
                F_OK: 是否有该文件
        返回值: 成功返回0, 失败返回 -1
*/

#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ret = access("a.txt", F_OK);
    if(ret == -1){
        perror("access");
    }

    printf("文件存在!!!\n");

    return 0;
}
