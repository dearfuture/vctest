#include "StdAfx.h"
#include "Message.h"
#include <string>

CMessage::CMessage(void)//构造函数
{
	//分配空间
	msg=new char[256];
}
CMessage::CMessage(CMessage&m)
{ 
	//分配空间
	msg=new char[256];
	//实现复制功能
	strcpy_s(msg,256,m.msg);

}
CMessage::CMessage(char *s)
{ 
	//分配空间
	msg=new char[256];
	//实现复制功能
	strcpy_s(msg,256,s);

}


CMessage::~CMessage(void)
{
	//释放掉空间
	delete[] msg;
}

void CMessage::SetMsg(char*msg)
{
  // this->msg=msg;
	strcpy_s(this->msg,256,msg);
}
void CMessage::ShowMsg(void)
{
   printf("%s\n",msg);
}