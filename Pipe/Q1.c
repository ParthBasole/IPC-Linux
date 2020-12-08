#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main()
{
      int fd=0;
fd=open("/home/wowbagger/Documents/Assignments/Assignment_12/mypipe",O_RDONLY);
if(fd==-1)
{
    return -1;
}
char buff[12];
printf("reached");
read(fd,buff,12);
close(fd);
printf("recieved : %s",buff);
//unlink("/home/wowbagger/Documents/Assignments/Assignment_12/mypipe");
return 0;
}