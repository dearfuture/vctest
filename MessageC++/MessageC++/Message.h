#pragma once
//
class CMessage
{
public:
	char *msg;
	void SetMsg(char*msg);
	void ShowMsg(void);
	CMessage::CMessage(char *s);
	CMessage(CMessage&m);
	CMessage(void);
	~CMessage(void);
};
