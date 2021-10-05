#pragma once
#include "T_Sprite.h"

#define ROUND(x) (int)(x+0.5)	//定义四舍五入的宏

class MonsterSprite :public T_Sprite
{
protected:
	//……………………………………………………………………………………
	// 与角色图像相关的属性
	//……………………………………………………………………………………

	
	float   speed1;                 //减速后速度
	int		life;					// 怪物生命
	int monsterToBar = 0;                   //怪物与障碍碰撞次数
	int barStance;                      //怪物与地图检测碰撞的距离

	//血量相关
	int bloodh = 0;                //受到伤害的应掉的血量
	boolean hurt;                  //是否受到伤害
	boolean decSpeed;             //是否减速
	int frames;
public:

	MonsterSprite(wstring imgPath, int frameWidth = 0, int frameHeight = 0);
	// 析构函数
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
	// 检测地图碰撞
	bool CollideWithMap(IN T_Map* map,double distance);
	bool CollideWith(T_Sprite* target, int distance = 0);
	bool CollideWithMouse(int x, int y, int distance);
	void setMonsterToBar() { monsterToBar ++; }
	int getMonsterToBar() { return monsterToBar; }
	//void setBarStance(int n) { barStance = n; }
	int getBarStance() { return barStance; }
	
};