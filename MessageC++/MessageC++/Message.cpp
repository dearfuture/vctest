#include "StdAfx.h"
#include "Message.h"
#include <string>

CMessage::CMessage(void)//���캯��
{
	//����ռ�
	msg=new char[256];
}
CMessage::CMessage(CMessage&m)
{ 
	//����ռ�
	msg=new char[256];
	//ʵ�ָ��ƹ���
	strcpy_s(msg,256,m.msg);

}
CMessage::CMessage(char *s)
{ 
	//����ռ�
	msg=new char[256];
	//ʵ�ָ��ƹ���
	strcpy_s(msg,256,s);

}


CMessage::~CMessage(void)
{
	//�ͷŵ��ռ�
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