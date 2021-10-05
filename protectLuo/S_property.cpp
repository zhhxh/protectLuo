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
	SetPosition(spInfo.X, spInfo.Y);	// ��ɫ����
	Visible = spInfo.Visible;			// ��ɫ�Ƿ�ɼ�
	//active = spInfo.Active;			// ��ɫ״̬���Ƿ��ƶ���
	dead = spInfo.Dead;					// ��ɫ����״̬
	score = spInfo.Score;				// ��������� 
	frameRatio = spInfo.Ratio;			// ֡ͼƬ���ű�(����1ԭʼ������1�Ŵ�С��1��С)
	frameRotate = spInfo.Rotation;		// ֡ͼƬ�Ƿ���ת�任(TRANSFERֵ֮һ)
	frameAlpha = spInfo.Alpha;			// ֡ͼƬ͸����
	blood = pInfo.life;					// ���ߵ�����ֵ
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
		//���������ײ���Ľ�ɫ��������
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

		//��ʽһ��ͬʱ����4������
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

		//��ʽһ��ͬʱ����4������
		return thisRect.left <= hitRec.right &&
			hitRec.left <= thisRect.right &&
			thisRect.top <= hitRec.bottom &&
			hitRec.top <= thisRect.bottom;
	}
	else
		return false;
}