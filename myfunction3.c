#include "sddell.h"

void print_sh()
{
 ssize_t fileno;
 fileno = write(STDOUT_FILENO,"#cisfun$", strlen("#cisfun$"));
 if (fileno == -1)
   {
     perror("error");
   }
return;
}
