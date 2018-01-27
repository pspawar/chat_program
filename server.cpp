/*
 * Server Side 
 */

#include <iostream>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std;

int main()
{
  int client, server; /* variable for sockets */
  int port = 3000; /* Port Number */
  int bufsize = 1024; /* Buffer_size */
  char Buf[bufsize];  /* Buffer */
  int rc; /* return value 8/
  
  struct sockaddr_in server_addr;
  Socklen_t size;
  
  /* Create a socket */
  client = socket(AF_INET, SOCK_STREAM, 0);
  
  if(client < 0)
  {
     cout << "error" << endl;
    exit(1);
  }
  cout << "Socket has been created for Server" <<endl;
 
  sever_addr.sin_family = AF_INET;
  server_addr.sin_addr.s_addr = htons(IPADDR_ANY);
  server_addr.sin_port = htons(port);
  
  /* Bind() a socket */
  rc = (client, (struct sockaddr*)&server_addr, sizeof(server_addr)));
  if(rc < 0)
  {
     cout << "failed " << endl;
    exit(1);
  }
  size = sizeof(server_addr);
  listen(client, 1);
  
  
  
}
