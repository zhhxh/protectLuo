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
#include "T_Config.h"
#include "T_Sprite.h"
#include "T_Map.h"

// ��¼�ƶ���Ϣ�Ľṹ��
struct MoveCoord
{
	int oldX;			// �ƶ�ǰ��X����
	int oldY;			// �ƶ�ǰ��Y����
	int moveX;			// �ƶ����X����
	int moveY;			// �ƶ����Y����
	int BoundDir;		// �ڱ߽��ϵķ���
};

class T_AI
{
private:
	int dir_style;		// ����ģʽ����ֵ������4��8

	// ��ܷ���
	// ���ά��GAME_DIR��Ԫ�ر��һ��
	// �ڶ�ά��ʾ��Ӧ�Ķ�ܷ���
	static int EvadeDir[8][5];

	// �������spָ���Ľ�ɫǰ�������Ӧ����ײ�������
	// ����sp�������Ľ�ɫ����
	// ����spSizeTimes����ɫ��ߵı����������������ķ�Χ
	// ����testRec������Ͳ������õ����յļ������
	void GetHitRect(IN T_Sprite* sp, IN int spSizeTimes, OUT RECT& testRec);

	// �����ƶ������ٶȺ�ָ���Ļ��Χ���㵱ǰ��ɫ���ƶ�λ��
	MoveCoord GetMoveCoord(T_Sprite* npc_sp, int dir, int speed, RECT boundary);

public:
	T_AI(int d_style);	// d_style��ֵ������4��8
	virtual ~T_AI(void);

	// �����ƶ������ٶȺ�ָ���Ļ��Χ�Խ�ɫ�����δ���
	void Wander(T_Sprite* npc_sp, int npc_dir, int speed, RECT boundary);
	// �����ƶ������ٶȺ�ָ���ĵ�ͼ����Խ�ɫ�����δ���
	void Wander(T_Sprite* npc_sp, int npc_dir, int speed, T_Map* map);
	// ��ɫ��ܴ�����һ������Ϊ��ܵĶ��󣬵ڶ�������ΪҪ�رܵļ�����
	void Evade(T_Sprite* npc_sp, T_Sprite* player);
	// ��ɫ���ص�������һ������Ϊ�����󣬵ڶ�������Ϊ���������ڵĽ�ɫ����
	void CheckOverlay(T_Sprite* npc_sp, vector<T_Sprite*> vSpriteSet);
};
