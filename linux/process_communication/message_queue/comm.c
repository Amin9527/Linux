#include"comm.h"

static int ComMsgQueue(int msgflg)
{
	int key=ftok(PATHNAME,PROJ_ID);
	if(key<0)
	{
		perror("ftok error");
		return -1;
	}
	int msgid=msgget(key,msgflg);
	if(msgid<0)
	{
		perror("msgget error!");
	}
	return msgid;
}

int GetMsgQueue()
{
	return ComMsgQueue(IPC_CREAT);
}

int CreateMsgQueue()
{
	return ComMsgQueue(IPC_EXCL|IPC_CREAT|0777);
}

int ReceiveMsg(int msgid,int mtype,char* buf)
{
	struct buffer _buf;
	_buf.msgtype=mtype;
	if(msgrcv(msgid,buf,sizeof(_buf.msgtext),mtype,0)<0)
	{
		perror("msgrcv error!");
		return -1;
	}
	strcpy(buf,_buf.msgtext);
	return 0;
}

int SendMsg(int msgid,int mtype,char* buf)
{
	struct buffer _buf;
	_buf.msgtype=mtype;
	strcpy(buf,_buf.msgtext);
	if(msgsnd(msgid,buf,sizeof(_buf.msgtext),0)<0)
	{
		perror("msgsnd error!");
		return -1;
	}
	return 0;

}









