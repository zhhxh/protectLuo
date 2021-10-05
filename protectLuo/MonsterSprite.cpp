
#include "MonsterSprite.h"

MonsterSprite::MonsterSprite(wstring imgPath, int frameWidth, int frameHeight):T_Sprite(imgPath, frameWidth, frameHeight)
{
}

MonsterSprite::~MonsterSprite(void)
{
}


void MonsterSprite::Initiate(MONSTER spInfo)
{
	SetPosition(spInfo.X, spInfo.Y);	// 角色坐标
	Visible = spInfo.Visible;			// 角色是否可见
	dir = spInfo.dir;					// 角色方向
	speed = spInfo.speed;				// 角色移动速度
	speed1 = spInfo.speedl;             //角色减速后速度
	life = spInfo.life;                //角色生命
	score = spInfo.score;				// 角色分值 
	frameRatio = spInfo.ratio;			// 帧图片缩放比(等于1原始，大于1放大，小于1缩小)
	frameRotate = spInfo.Rotation;		// 帧图片是否旋转变换(TRANSFER值之一)
	frameAlpha = 255;			// 帧图片透明度
	decSpeed = false;
	dead = false;
	monsterToBar = 0;                   //怪物与障碍碰撞次数
	barStance = spInfo.instance;            //怪物与地图的碰撞距离
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
// 检测地图碰撞
bool MonsterSprite::CollideWithMap(IN T_Map* map,double distance)
{
	// 如果背景为图片则不检测地图碰撞
	if (map->getMapRows() == 0 && map->getMapCols() == 0)
	{
		mapBlockPT.x = -1;
		mapBlockPT.y = -1;
		return false;
	}

	// 如果地图不可见或角色不可见不检测地图碰撞
	if ((!(map->IsVisible())) || (!(this->IsVisible())))
	{
		mapBlockPT.x = -1;
		mapBlockPT.y = -1;
		return false;
	}

	// 计算当前地图图层的矩形范围
	int mapLeft = map->GetX();
	int mapTop = map->GetY();
	int mapRight = mapLeft + map->GetWidth();
	int mapBottom = mapTop + map->GetHeight();

	// 获得地图图层中使用的图块的宽高
	int tW = map->getTileWidth();
	int tH = map->getTileHeight();

	// 计算当前角色的矩形范围
	int spLeft = this->GetCollideRect()->left+distance;
	int spTop = this->GetCollideRect()->top+ distance;
	int spRight = this->GetCollideRect()->right- distance;
	int spBottom = this->GetCollideRect()->bottom- distance;

	// 获得当前地图中图块的总列数
	int tNumCols = map->getMapCols();
	// 获得当前地图中图块的总行数
	int tNumRows = map->getMapRows();

	// 计算当前角色的实际的宽高
	int spW = spRight - spLeft;
	int spH = spBottom - spTop;

	RECT lprcDst;
	// 根据以上计算的图层的矩形范围和角色的矩形范围构造两个矩形对象
	RECT mapRect = { mapLeft, mapTop, mapRight, mapBottom };
	RECT spRect = { spLeft, spTop, spRight, spBottom };
	// 如果两个矩形对象没有发生任何碰撞，则退出函数
	if ((IntersectRect(&lprcDst, &mapRect, &spRect)) == FALSE)
	{
		mapBlockPT.x = -1;
		mapBlockPT.y = -1;
		return false;
	}

	// 如果两个矩形对象发生了碰撞，首先计算角色矩形上、下、左、右的矩形区域
	int startRow = (spTop <= mapTop) ? 0 : (spTop - mapTop) / tH;
	int endRow = (spBottom < mapBottom) ? (spBottom - 1 - mapTop) / tH : tNumRows - 1;
	int startCol = (spLeft <= mapLeft) ? 0 : (spLeft - mapLeft) / tW;
	int endCol = (spRight < mapRight) ? (spRight - 1 - mapLeft) / tW : tNumCols - 1;

	// 根据角色矩形上、下、左、右的矩形区域判断哪个矩形区域为障碍
	for (int row = startRow; row <= endRow; ++row)
	{
		for (int col = startCol; col <= endCol; ++col)
		{
			// 如果当前矩形所在的图块在地图数据中为非0，就表示是障碍
			if (map->getTile(col, row) != 0)
			{
				mapBlockPT.x = col;	// 记录当前障碍图块的列
				mapBlockPT.y = row;	// 记录当前障碍图块的行

									// 根据角色当前的方向计算碰撞前的位置
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
				// 将角色定位在撞前的位置
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

		//方式一：同时满足4个条件
		return thisRect.left <= hitRec.right &&
			hitRec.left <= thisRect.right &&
			thisRect.top <= hitRec.bottom &&
			hitRec.top <= thisRect.bottom;
	}
	else
		return false;
}
