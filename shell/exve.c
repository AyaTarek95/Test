#include <stdio.h>
#include <unistd.h>
int main() {
  char cmd[] = "/usr/bin/ls";
  char *argv[] = {"ls", NULL};
  char *env[] = {NULL};
  
  printf("start excuting %s :\n", cmd);
  printf("================\n");
  if(execve(cmd, argv, env) == -1){
  perror("didnot execute execve\n");
  }
  printf("oops!\n");

    return 0;
}
