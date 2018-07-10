// MessageC++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Message.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMessage s("我的信息");
 
	CMessage s2=s;//调用的 默认的复制构造函数
	s.SetMsg("asdfsadfafd");
	s2="新的   信息"; //s2.CMessage("新的   信息");
	
	s2.ShowMsg();
	getchar();
	return 0;
}

