 
#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/types.h> 
#include <sys/wait.h>
#include<sys/ipc.h>
#include <signal.h>
void SignalHandler(int no)
{
 printf("Got signal %d \n",no);
}

int main()
{
  printf("inside child process \n");
  printf("PID is : %d \n",getpid());
  signal(17,SignalHandler);
  printf("DDDD");
  pause();

return 0;

}
