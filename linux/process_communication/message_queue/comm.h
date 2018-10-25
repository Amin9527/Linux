#ifndef _COMM_H_
#define _COMM_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<sys/ipc.h>

#define PATHNAME "."
#define PROJ_ID 0x6666
#define SEND_TYPE 1
#define RECEIVE_TYPE 2

struct buffer
{
	long msgtype;
	char msgtext[100];
};

int CreateMsgQueue();
int GetMsgQueue();
int ReceiveMsg(int msgid,int mtype,char* buf);
int SendMsg(int msgid,int mtype,char* buf);

#endif
