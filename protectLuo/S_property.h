#pragma once
#include "T_Sprite.h"
class S_property :
	public T_Sprite
{
private:
	int blood;		//道具血量
	int bloodh = 0;
	boolean hurt;	//是否收到攻击
	int frames;
	
public:
	S_property(wstring imgPath, int frameWidth, int frameHeight);
	~S_property();

	void Initiate(SPRITEINFO spInfo, PROPERTY pInfo);
	void setBloodh(int h) { bloodh = bloodh+h; }
	void sethurt(boolean h) { hurt = h; }
	void setFrames() { frames++; }
	int getFrames() { return frames; }
	int getBloodh() { return bloodh; }
	int getBlood() { return blood; }
	boolean gethurt() { return hurt; }
	bool CollideWith(T_Sprite * target, int distance);
	bool CollideWithMouse(int x, int y, int distance);
};

