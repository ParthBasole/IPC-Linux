 #include <sys/types.h>
       #include <sys/wait.h>
       #include <stdio.h>
       #include <stdlib.h>
       #include <unistd.h>
       #include <string.h>
 
int main(int argc,char *argv[])
{ 
     int pipefd[2];
     pid_t cpid;
     char buf;
     char buff[50];
    if(argc!=2)
    {
 printf("ERR!");
 return -1;
    }
    if(pipe(pipefd)==-1)
    {
        printf("Error creating Pipe");
        return -1;
    }
    printf("%d file discriptor of read pipe \n",pipefd[0]);
    printf("%d file discriptor of write pipe \n",pipefd[1]);
        if(fork())
        {   
      close(pipefd[0]);

      printf("%s given \n",argv[1]);
      write(pipefd[1],argv[1],strlen(argv[1]));
      wait(NULL);
      close(pipefd[1]);       
      }
      else{
          close(pipefd[1]);
          printf("inside child process \n");
          while(!read(pipefd[0],&buf,1))
            printf("%c",buf);
              
           
          printf("finsih");
          close(pipefd[0]);
      }
      
        
    return 0;
   

}