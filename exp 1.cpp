#include <stdio.h>
#include <unistd.h>

int main()
 {
    pid_t child_pid;
    child_pid = fork();

    if (child_pid == -1) {
        perror("Fork failed");
        return 1;
    }
    if (child_pid == 0) {
        printf("Child Process - PID: %d\n", getpid());
        printf("Child Process - Parent PID: %d\n", getppid());
    } else {
        printf("Parent Process - PID: %d\n", getpid());
    }
    return 0;
}
