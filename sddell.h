#ifndef SDDELL
#define SDDELL
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
extern char **environ;
char **divide_buffer(char *buffer);
void print_sh();
int ownCmdHandler(char** divide, char* buffer, size_t buf);
void exit_sh(char *buffer, int buf);
int env_sh(void);

#endif /* _SDDELL */
