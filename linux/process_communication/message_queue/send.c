#include"comm.h"

int main()
{
	int msgid=GetMsgQueue();
	char buf[100];
	while(1)
	{
        //buf[0]=0;
		printf("please enter#");
		fflush(stdout);
		int r=read(0,buf,sizeof(buf));
		if(r>0)
		{
			buf[r-1]=0;
			SendMsg(msgid,SEND_TYPE,buf);
		}
		ReceiveMsg(msgid,RECEIVE_TYPE,buf);
		printf("receive #%s\n",buf);
	}
	return 0;
}
