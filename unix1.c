#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
    int pid;
    pid = fork();
    if (pid < 0)
        printf("Error");
    else if (pid == 0)
    {
        printf("Child Process\n");
        printf("Child ID: %d\n", getpid());
        printf("Print ID: %d\n", getppid());
        exit(0);
    }
    else
    {
        printf("Parent Process\n");
        wait(NULL);
        printf("Parent ID: %d\n", getpid());
    }
    return 0;
}