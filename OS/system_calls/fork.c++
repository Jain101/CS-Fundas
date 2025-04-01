#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    printf("Process Id %i\n", getpid());
    printf("Parent Process Id %i\n", getppid());
    if (pid < 0) {
        perror("fork fail");
        return -1;
    } else if (pid == 0) {
        printf("Hello from Child!\n");
    } else {
        printf("Hello from Parent!\n");
    }
    return 0;
}