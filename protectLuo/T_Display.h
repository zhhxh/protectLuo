//*******************************************************************
// TinyEngine����  
// ����: ������(WanLizhong)
// ����: www.wanlizhong.com 
// ����: 2013-08-02
// ����: 2018-12-13
// ��Ȩ���� 2007-2018 ������
// (C) 2007-2018 WanLizhong All Rights Reserved
//*******************************************************************

#pragma once
#include <Windows.h> 

class T_Display 
{
public:
	T_Display();
	~T_Display();

	void SaveMode();						// ���浱ǰ�ֱ���
	void ResetMode();						// �ָ��ѱ���ķֱ���
	bool ChangeMode(int width, int height);	// �ı�ֱ���

private:
	DEVMODE	devmode_saved;					// ����ĵ�ǰ�ֱ���
	bool mode_changed;						// �ֱ����Ƿ�ı�
} ;