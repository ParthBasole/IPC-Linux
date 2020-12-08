#include<unistd.h>
#include<sys/ipc.h>
int main()
{ int no;

no=ftok("Demo.c",11);
printf("Key is :%d",no);

}