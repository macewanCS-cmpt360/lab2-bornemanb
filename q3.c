#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
  int rc = fork();
  if(rc <0){
    printf("Fork failed \n");
  }
  else if(rc ==0){ // the child process 
    printf("Hello \n");
  }
  else{// the parent process
    sleep(1);// makes this process wait for 1 second 
    printf("Goodbye\n");
  }
  return 0;
}
/*
The parent process will always execute first unless there is a system call that will delay it 
 */
