#include <stdio.h>

struct socket_server{
  unsigned int total_users;
  time_t boot_time;
  struct socket_user *users;

};

struct socket_user{
  unsigned int port;
  char *host;
};


int main(int argc, char* argv[]){
  int port, sock;
  struct socket_server server;
  struct sockaddr_in clientname;
  socklen_t size;
  int i;
  fd_set active_fd_set, read_fd_set;

  server.boot_time= time(NULL);
  server.total_users= 0;

  if(argc!=2){
    printf("Usage: %s <port>\n", argv[0]);
    exit(0);
  }
  port= atoi(argv[1]);

  sock= create_socket(port);
  if(listen(sock,1)<0){
    perror("Listen fail\n");
    exit(1);
  }
  printf("Socket server started on port %d", port);

  while(1){
   read_fd_set= active_fd_set;
   if(select(FD_SETSIZE, &read_fd_set, NULL, NULL, NULL)<0){
     perror("select fail\n");
     exit(1);
   }
  for(i=0;i<FD_SETSIZE; i++){
    if(FD_ISSET(i, &read_fd_set))
  }

}
