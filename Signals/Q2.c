#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/types.h> 
#include <sys/wait.h>
#include<sys/ipc.h>
#include <signal.h>

int main()
{
  int ret=fork();
  if(ret==-1)
  return -1;
  



  if(ret==0)
  {
   execl("./Runner",NULL,NULL);
  }
  else
  {
     
  }
  printf("PID GOT %d \n",ret);
 
  kill(ret,17);  
// wait(NULL);
//printf("Catched Signal");
return 0;

}
