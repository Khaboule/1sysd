#include<stdio.h>
#include<unistd.h>


int main() {
    int pid;

    for (int i = 0; i < 5; i++) {
        pid = fork();
        if (pid) {
            printf("Je suis ton père\n");
        } else {
            printf("Noooooon !\n");
            sleep(10);
            break;
        }
    }
    sleep(10);
}
