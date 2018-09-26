#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
  int rc = fork();
  if(rc < 0){
    printf("fork failed");
    return 1;
  }
  else if( rc == 0){//child process
    close(STDOUT_FILENO);
    printf("Hello world \n");
  }
  else{ //parent process
    printf("Hello world \n");
  }
  return 0;
}
/*
Since standard output is closed printf will not print to the screen anymore
 */
