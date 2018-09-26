#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(void){
  char *cmdline;
  char * token = NULL;
  int i,rc;
  char * args[10];
  cmdline = calloc(1,1024);
  i =0;
  printf("prompt> ");
  fgets(cmdline,1024,stdin);
  rc = fork();

  if(rc < 0){
 fprintf(stderr,"[debug] cmdline = *%s*\n",cmdline);
 exit(1);
  }
  token = strtok(cmdline, "\n ");
  while(token != NULL){
    args[i++] = strdup(token);
    token = strtok(NULL, "\n ");
    if (rc == 0){
      execvp(cmdline,args);
    }
    else{
      wait(NULL);
    }
  }
  args[i] = NULL;
  free(cmdline);
  return 1;
}
