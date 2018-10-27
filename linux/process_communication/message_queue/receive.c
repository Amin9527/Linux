#include"comm.h"

int main()
{
	int msgid=CreateMsgQueue();
	char buf[100];
	while(1)
	{
        //buf[0]=0;
		int rcv=ReceiveMsg(msgid,SEND_TYPE,buf);
		if(rcv<0)
		{
			perror("receive error!");
			return 0;
		}
		printf("sender #%s\n",buf);
		printf("please enter#");
		fflush(stdout);
		int r=read(0,buf,sizeof(buf));
		if(r>0)
		{
			buf[r-1]=0;
			SendMsg(msgid,RECEIVE_TYPE,buf);
		}
	}
	return 0;
}
