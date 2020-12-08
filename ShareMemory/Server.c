#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main()
{  int a;
char c;
   char *shm=NULL;
    char* fc=NULL;
    a=shmget(1234,27,IPC_CREAT|0666);
    printf("Memory allocated:ID:%d",a);
      shm=shmat(a,NULL,0);
    printf("Shared Memory Gets attached at %ld\n",shm);
    fc=shm;

      for(c='a';c<='z';c++)
      {*fc=c;
      fc++;
      }
      fc=NULL;
      printf("Data Writtern \n");
      printf("Waiting... \n");
      while(*shm!='*');
      

  printf("Completed !\n");
}