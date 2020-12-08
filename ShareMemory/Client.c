#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main()
{  int a;
char c;
   char *shm=NULL;
    char* fc=NULL;
    a=shmget(1234,27,0666);
    printf("Memory allocated:ID:%d",a);
      shm=shmat(a,NULL,0);
    printf("Shared Memory Gets attached at %d \n",shm);
    fc=shm;
    int x;
scanf("%d",&x);
      for(int i=0;i<27;i++)
      {
          printf("%c ",*fc);
          fc++;
      }
   *shm='*';
      

  printf("Completed !\n");
}