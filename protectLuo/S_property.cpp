#include "S_property.h"

S_property::S_property(wstring imgPath, int frameWidth, int frameHeight)
	:T_Sprite(imgPath,frameWidth,frameHeight)
{
}


S_property::~S_property()
{
}

void S_property::Initiate(SPRITEINFO spInfo, PROPERTY pInfo)
{
	SetPosition(spInfo.X, spInfo.Y);	// 角色坐标
	Visible = spInfo.Visible;			// 角色是否可见
	//active = spInfo.Active;			// 角色状态（是否移动）
	dead = spInfo.Dead;					// 角色死亡状态
	score = spInfo.Score;				// 奖励金币数 
	frameRatio = spInfo.Ratio;			// 帧图片缩放比(等于1原始，大于1放大，小于1缩小)
	frameRotate = spInfo.Rotation;		// 帧图片是否旋转变换(TRANSFER值之一)
	frameAlpha = spInfo.Alpha;			// 帧图片透明度
	blood = pInfo.life;					// 道具的生命值
	frames = 0;
	if (frameRatio>0)
	{
		colideWidth = GetRatioSize().cx;
		colideHeight = GetRatioSize().cy;
	}
	else
	{
		colideWidth = (int)GetWidth();
		colideHeight = (int)GetHeight();
	}
}
bool S_property::CollideWith(T_Sprite * target, int distance)
{
	if (IsVisible())
	{
		//计算参与碰撞检测的角色矩形区域
		RECT targetRect = *(target->GetCollideRect());
		RECT hitRec;
		hitRec.left = targetRect.left - distance;
		hitRec.top = targetRect.top - distance;
		hitRec.right = targetRect.right + distance;
		hitRec.bottom = targetRect.bottom + distance;
		RECT thisRect = *(this->GetCollideRect());
		int cw = abs(thisRect.right - thisRect.left);
		int tw = abs(hitRec.right - hitRec.left);
		int ch = abs(thisRect.bottom - thisRect.top);
		int th = abs(hitRec.bottom - hitRec.top);

		//方式一：同时满足4个条件
		return thisRect.left <= hitRec.right &&
			hitRec.left <= thisRect.right &&
			thisRect.top <= hitRec.bottom &&
			hitRec.top <= thisRect.bottom;
	}
	else
		return false;
}
bool S_property::CollideWithMouse(int x,int y, int distance)
{
	if (IsVisible())
	{
		RECT hitRec;
		hitRec.left = x - distance;
		hitRec.right = x + distance;
		hitRec.top = y - distance;
		hitRec.bottom = y + distance;
		/*RECT hitRec;
		hitRec.left = targetRect.left - distance;
		hitRec.top = targetRect.top - distance;
		hitRec.right = targetRect.right + distance;
		hitRec.bottom = targetRect.bottom + distance;*/
		RECT thisRect = *(this->GetCollideRect());
		int cw = abs(thisRect.right - thisRect.left);
		int tw = abs(hitRec.right - hitRec.left);
		int ch = abs(thisRect.bottom - thisRect.top);
		int th = abs(hitRec.bottom - hitRec.top);

		//方式一：同时满足4个条件
		return thisRect.left <= hitRec.right &&
			hitRec.left <= thisRect.right &&
			thisRect.top <= hitRec.bottom &&
			hitRec.top <= thisRect.bottom;
	}
	else
		return false;
}