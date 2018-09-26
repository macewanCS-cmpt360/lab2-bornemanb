#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(){
  int op = open("hello.txt");
  int rc = fork();
  if(rc < 0){
    printf("fork failed \n");
    return 1;
  }
  else if(rc ==0){// child process
    char * msg  = "hey there guys";
    write(op,msg,strlen(msg));
  }
    else{// parent process 
      char * msg3 = "this is a little too much fun";
      write(op,msg3,strlen(msg3));
  }


  return 0;
}/*
 as long as the proccess have read/write access to a file they will both be able to write to it 
  */
