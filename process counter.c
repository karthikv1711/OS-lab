#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>  // Required for exit()

int main() 
{
    int pid, pid1, pid2;
    
    pid = fork();  // Create a child process
    
    if (pid == -1) {
        printf("Error in process creation\n");
       exit(1);  // Exit if fork fails
    }
    
    if (pid != 0) {  // Parent process
        pid1 = getpid();
        printf("\nThe parent process ID is %d\n", pid1);
    } else {  // Child process
        pid2 = getpid();
        printf("\nThe child process ID is %d\n", pid2);
    }

    return 0;
}

/*

vitcse@vitcse50:~$ gcc unix2.c
vitcse@vitcse50:~$ ./a.out

The parent process ID is 13642

The child process ID is 13643





*/
