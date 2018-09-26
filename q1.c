#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main (){
  int x;
  x = 100; // sets int variable to 100
  int rc = fork();
  if( rc < 0){
    printf("fork failed\n");

  }
  else if (rc == 0){ // new child process 
    printf("value of x %d in the child process\n",x);
    x += 100;
    printf("new value of x %d in the child process \n",x);
  }
  else{ // parent process 
    printf("value of x %d in the parent process \n",x);
    x+= 50;
    printf("new value of x %d in the parent process \n",x);
  }
  
  return 0;
  /*
   Both procces's will have their own instance of the variable originally assigned to the parent process and will have access to it upon execution. The variable is the same in the child process as it was oringanally assigned. You can change the values in the parent and the child independantly as each has their own instance of the variable  
   */

}
