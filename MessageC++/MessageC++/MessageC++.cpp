// MessageC++.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Message.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMessage s("�ҵ���Ϣ");
 
	CMessage s2=s;//���õ� Ĭ�ϵĸ��ƹ��캯��
	s.SetMsg("asdfsadfafd");
	s2="�µ�   ��Ϣ"; //s2.CMessage("�µ�   ��Ϣ");
	
	s2.ShowMsg();
	getchar();
	return 0;
}

