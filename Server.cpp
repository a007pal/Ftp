#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*for getting file size using stat()*/
#include <sys/stat.h>
/*for sendfile()*/
#include <sys/sendfile.h>
/*for O_RDONLY*/
#include <fcntl.h>

int main(int argc, char const *argv[]) {
  /* code */
  struct sockaddr_in server, client;
  struct stat obj;
  int sock1, sock2;
  char buf[100], command[5], filename[20];

  int k, i, size, len, c;
  int filehandle;

  sock1 = socket(AF_INET, SOCK_STREAM, 0);

  if (sock1 == -1){
    printf("Socket creation failed");
    exit(1);
  }
  return 0;
}
