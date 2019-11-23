#include "sddell.h"
int main()
{
  while(1)
    {
      print_sh();
 char *buffer = NULL;
      size_t bufsize = 32;
      size_t buf;

      buffer = (char *)malloc(bufsize * sizeof(char));
      if( buffer == NULL)
        {
          perror("Unable to allocate buffer");
          exit(1);
        }
buf = getline(&buffer,&bufsize,stdin);
char **divide = divide_buffer(buffer);

 int p = ownCmdHandler(divide, buffer, buf);
 
pid_t pid;
pid=fork();
if(pid ==0)
        {
          execve(divide[0],divide,NULL);
          perror("error:");
          exit(1);
        }
      if(pid>0)
        while(wait(0) != -1);
    }
  return(0);
}
