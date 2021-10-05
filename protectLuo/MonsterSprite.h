#pragma once
#include "T_Sprite.h"

#define ROUND(x) (int)(x+0.5)	//������������ĺ�

class MonsterSprite :public T_Sprite
{
protected:
	//����������������������������������������������������������������
	// ���ɫͼ����ص�����
	//����������������������������������������������������������������

	
	float   speed1;                 //���ٺ��ٶ�
	int		life;					// ��������
	int monsterToBar = 0;                   //�������ϰ���ײ����
	int barStance;                      //�������ͼ�����ײ�ľ���

	//Ѫ�����
	int bloodh = 0;                //�ܵ��˺���Ӧ����Ѫ��
	boolean hurt;                  //�Ƿ��ܵ��˺�
	boolean decSpeed;             //�Ƿ����
	int frames;
public:

	MonsterSprite(wstring imgPath, int frameWidth = 0, int frameHeight = 0);
	// ��������
	virtual ~MonsterSprite(void);
	void setFrames() { frames++; }
	int getFrames() { return frames; }
	void Initiate(MONSTER spInfo);
	int getBloodh() { return bloodh; }
	void setBloodh(int b) { bloodh += b; }
	void setHurt(boolean h) { hurt = h; }
	int getLife() { return life; }
	int getHurt() { return hurt; }
	void setDecSpeed(boolean dec) { decSpeed = dec; }
	boolean getDecSpeed() { return decSpeed; }
	// ����ͼ��ײ
	bool CollideWithMap(IN T_Map* map,double distance);
	bool CollideWith(T_Sprite* target, int distance = 0);
	bool CollideWithMouse(int x, int y, int distance);
	void setMonsterToBar() { monsterToBar ++; }
	int getMonsterToBar() { return monsterToBar; }
	//void setBarStance(int n) { barStance = n; }
	int getBarStance() { return barStance; }
	
};