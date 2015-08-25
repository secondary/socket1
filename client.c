#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>
#include <Lumstd.h>

int main(int argc, char *argv[]){
  int sock;
  struct sockaddr_in server;
  char buff[2014];

  sock= socket(AF_INEET, SOCK_STREAM, 0);
  if(sock<0){
    perror("socket failed");
    exit(1);
  }
  server.sin_family= AF_INET;
  hp= get

  return 0;
}
