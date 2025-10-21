#pragma once

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define MAXLINE 4096
static char sendline[MAXLINE],
            recvchar[MAXLINE + 1];

void err_dump( const char*, ... );
void err_sys( const char*, ... );

void str_cli( FILE *, int sockfd );
void str_echo( int sockfd );

void dg_cli( FILE * fp, int sockfd, struct sockaddr* pserv_addr, int servlen );
void dg_echo( FILE * fp, int sockfd, struct sockaddr* pcli_addr, int clilen );

