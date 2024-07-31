#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int pipefd[2];

    int ret = pipe(pipefd);

    long size = fpathconf(pipefd[0], _PC_PIPE_BUF);
    printf("pipe size: %ld\n", size);

    return 0;
}
