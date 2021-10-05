
#include "MonsterSprite.h"

MonsterSprite::MonsterSprite(wstring imgPath, int frameWidth, int frameHeight):T_Sprite(imgPath, frameWidth, frameHeight)
{
}

MonsterSprite::~MonsterSprite(void)
{
}


void MonsterSprite::Initiate(MONSTER spInfo)
{
	SetPosition(spInfo.X, spInfo.Y);	// ��ɫ����
	Visible = spInfo.Visible;			// ��ɫ�Ƿ�ɼ�
	dir = spInfo.dir;					// ��ɫ����
	speed = spInfo.speed;				// ��ɫ�ƶ��ٶ�
	speed1 = spInfo.speedl;             //��ɫ���ٺ��ٶ�
	life = spInfo.life;                //��ɫ����
	score = spInfo.score;				// ��ɫ��ֵ 
	frameRatio = spInfo.ratio;			// ֡ͼƬ���ű�(����1ԭʼ������1�Ŵ�С��1��С)
	frameRotate = spInfo.Rotation;		// ֡ͼƬ�Ƿ���ת�任(TRANSFERֵ֮һ)
	frameAlpha = 255;			// ֡ͼƬ͸����
	decSpeed = false;
	dead = false;
	monsterToBar = 0;                   //�������ϰ���ײ����
	barStance = spInfo.instance;            //�������ͼ����ײ����
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
// ����ͼ��ײ
bool MonsterSprite::CollideWithMap(IN T_Map* map,double distance)
{
	// �������ΪͼƬ�򲻼���ͼ��ײ
	if (map->getMapRows() == 0 && map->getMapCols() == 0)
	{
		mapBlockPT.x = -1;
		mapBlockPT.y = -1;
		return false;
	}

	// �����ͼ���ɼ����ɫ���ɼ�������ͼ��ײ
	if ((!(map->IsVisible())) || (!(this->IsVisible())))
	{
		mapBlockPT.x = -1;
		mapBlockPT.y = -1;
		return false;
	}

	// ���㵱ǰ��ͼͼ��ľ��η�Χ
	int mapLeft = map->GetX();
	int mapTop = map->GetY();
	int mapRight = mapLeft + map->GetWidth();
	int mapBottom = mapTop + map->GetHeight();

	// ��õ�ͼͼ����ʹ�õ�ͼ��Ŀ��
	int tW = map->getTileWidth();
	int tH = map->getTileHeight();

	// ���㵱ǰ��ɫ�ľ��η�Χ
	int spLeft = this->GetCollideRect()->left+distance;
	int spTop = this->GetCollideRect()->top+ distance;
	int spRight = this->GetCollideRect()->right- distance;
	int spBottom = this->GetCollideRect()->bottom- distance;

	// ��õ�ǰ��ͼ��ͼ���������
	int tNumCols = map->getMapCols();
	// ��õ�ǰ��ͼ��ͼ���������
	int tNumRows = map->getMapRows();

	// ���㵱ǰ��ɫ��ʵ�ʵĿ��
	int spW = spRight - spLeft;
	int spH = spBottom - spTop;

	RECT lprcDst;
	// �������ϼ����ͼ��ľ��η�Χ�ͽ�ɫ�ľ��η�Χ�����������ζ���
	RECT mapRect = { mapLeft, mapTop, mapRight, mapBottom };
	RECT spRect = { spLeft, spTop, spRight, spBottom };
	// ����������ζ���û�з����κ���ײ�����˳�����
	if ((IntersectRect(&lprcDst, &mapRect, &spRect)) == FALSE)
	{
		mapBlockPT.x = -1;
		mapBlockPT.y = -1;
		return false;
	}

	// ����������ζ���������ײ�����ȼ����ɫ�����ϡ��¡����ҵľ�������
	int startRow = (spTop <= mapTop) ? 0 : (spTop - mapTop) / tH;
	int endRow = (spBottom < mapBottom) ? (spBottom - 1 - mapTop) / tH : tNumRows - 1;
	int startCol = (spLeft <= mapLeft) ? 0 : (spLeft - mapLeft) / tW;
	int endCol = (spRight < mapRight) ? (spRight - 1 - mapLeft) / tW : tNumCols - 1;

	// ���ݽ�ɫ�����ϡ��¡����ҵľ��������ж��ĸ���������Ϊ�ϰ�
	for (int row = startRow; row <= endRow; ++row)
	{
		for (int col = startCol; col <= endCol; ++col)
		{
			// �����ǰ�������ڵ�ͼ���ڵ�ͼ������Ϊ��0���ͱ�ʾ���ϰ�
			if (map->getTile(col, row) != 0)
			{
				mapBlockPT.x = col;	// ��¼��ǰ�ϰ�ͼ�����
				mapBlockPT.y = row;	// ��¼��ǰ�ϰ�ͼ�����

									// ���ݽ�ɫ��ǰ�ķ��������ײǰ��λ��
				int x = GetX(), y = GetY();
				switch (GetDir())
				{
				case DIR_LEFT:
					x = GetX() + GetSpeed();
					y = GetY();
					break;
				case DIR_RIGHT:
					x = GetX() - GetSpeed();
					y = GetY();
					break;
				case DIR_UP:
					x = GetX();
					y = GetY() + GetSpeed();
					break;
				case DIR_DOWN:
					x = GetX();
					y = GetY() - GetSpeed();
					break;
				}
				// ����ɫ��λ��ײǰ��λ��
				SetPosition(x, y);
				return true;
			}
		}
	}
	return false;
}

bool MonsterSprite::CollideWith(T_Sprite * target, int distance)
{
	if(IsVisible())
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
bool MonsterSprite::CollideWithMouse(int x, int y, int distance)
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
