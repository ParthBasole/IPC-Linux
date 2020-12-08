#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main(int argc,char * argv[])
{
int fd=0;
fd=open(argv[1],O_RDONLY);
if(fd==-1)
{ printf("Cant open");
     return -1;
}
char buff[100];
printf("reached");
read(fd,buff,100);
close(fd);
printf("recieved : %s",buff);
return 0;
}
