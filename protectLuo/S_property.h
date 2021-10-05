#pragma once
#include "T_Sprite.h"
class S_property :
	public T_Sprite
{
private:
	int blood;		//����Ѫ��
	int bloodh = 0;
	boolean hurt;	//�Ƿ��յ�����
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

