#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main(int argc,char * argv[])
{ 
    if(argc!=3)
    { printf("insufficient number og arguments");
        return -1;
    }
    if(mkfifo(argv[1],0666)==-1)
    {
        printf("error making pipe in the given DIRECTORY. \n");
    return -1;
    }
    int fd=0;
fd=open(argv[1],O_WRONLY);
if(fd==-1)
{
    return -1;
}
printf("reached");
write(fd,argv[2],strlen(argv[2]));
close(fd);
unlink(argv[1]);
return 0;
}
