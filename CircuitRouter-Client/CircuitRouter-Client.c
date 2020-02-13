#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFSIZ 256

char* global_pipeName;
char commandBuff[BUFFSIZ];
char* global_clientPipeName;
char thisClientPipe[] = "../ClientPipeXXXXXX";

void writeToPipe(){
  int fd;

  fd = open(global_pipeName, O_WRONLY);
  write(fd, commandBuff, BUFFSIZ + 1);
  close(fd);
}

int main(int argc, char** argv){
  mkstemp(thisClientPipe);
  unlink(thisClientPipe);
  mkfifo(thisClientPipe, 0777);

  if(argv[1] == NULL){
    printf("Missing pipe path!\n");
    exit(EXIT_FAILURE);
  }

  global_pipeName = argv[1];

  while (1) {
    fgets(commandBuff, sizeof(commandBuff), stdin);
    strcat(commandBuff, " ");
    strcat(commandBuff, thisClientPipe);
    writeToPipe();
    int fd;
    char buffer[256];
    fd = open(thisClientPipe, O_RDWR);
    read(fd, buffer, 256);
    close(fd);

    printf("%s\n", buffer);
  }

  return 0;
}
