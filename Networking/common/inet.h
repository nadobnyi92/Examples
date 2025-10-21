#include "common.h"

#define SERV_UDP_PORT 60000
#define SERV_TCP_PORT 60000

#define SERV_HOST_ADDR "127.0.0.1"

ssize_t readline( int fd, void *vptr, size_t maxlen );
ssize_t writen( int fd, const void *vptr, size_t n);

