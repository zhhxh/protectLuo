#include "GraphTest.h"
int GraphTest::FAN1[8] = { 7,7,8,8,9,9,10,10 };
int GraphTest::FAN2[8] = { 14,14,15,15,16,16,17,17 };
int GraphTest::FAN3[8] = { 21,21,22,22,23,23,24,24 };
int GraphTest::FANB1[10] = { 28,28,29,29,30,30,31,31,32,32 };
int GraphTest::FANB2[10] = { 35,35,36,36,37,37,38,38,39,39 };
int GraphTest::FANB3[10] = { 42,42,43,43,44,44,45,45,46,46 };


int GraphTest::B1[6] = { 22,22,23,23,24,24 };
int GraphTest::B2[6] = { 44,44,45,45,46,46 };
int GraphTest::B3[6] = { 66,66,67,67,68,68 };
int GraphTest::BB1[8] = { 88,88,89,89,90,90,91,91 };
int GraphTest::BB2[8] = { 110,110,111,111,112,112,113,113 };
int GraphTest::BB3[8] = { 132,132,133,133,134,134,135,135 };

int GraphTest::BS1[6] = { 7,7,8,8,9,9 };
int GraphTest::BS2[6] = { 14,14,15,15,16,16 };
int GraphTest::BS3[6] = { 21,21,22,22,23,23 };
int GraphTest::BSB1[14] = { 35,35,36,36,37,37,38,38,39,39,40,40,41,41 };
int GraphTest::BSB2[14] = { 42,42,43,43,44,44,45,45,46,46,47,47,48,48 };
int GraphTest::BSB3[14] = { 49,49,50,50,51,51,52,52,53,53,54,54,55,55 };


int GraphTest::S1[6] = { 7,7,8,8,9,9 };
int GraphTest::S2[6] = { 14,14,15,15,16,16 };
int GraphTest::S3[6] = { 21,21,22,22,23,23 };
int GraphTest::SB1[6] = { 35,35,36,36,37,37 };
int GraphTest::SB2[6] = { 42,42,43,43,44,44 };
int GraphTest::SB3[6] = { 49,49,50,50,51,51 };


int GraphTest::SN1[6] = { 7,7,8,8,9,9 };
int GraphTest::SN2[6] = { 14,14,15,15,16,16 };
int GraphTest::SN3[6] = { 21,21,22,22,23,23 };
int GraphTest::SNB1[6] = { 35,35,36,36,37,37 };
int GraphTest::SNB2[6] = { 42,42,43,43,44,44 };
int GraphTest::SNB3[6] = { 49,49,50,50,51,51 };

int GraphTest::SUN1[6] = { 7,7,8,8,9,9 };
int GraphTest::SUN2[6] = { 14,14,15,15,16,16 };
int GraphTest::SUN3[6] = { 21,21,22,22,23,23 };
int GraphTest::SUNB1[6] = { 35,35,36,36,37,37 };
int GraphTest::SUNB2[6] = { 42,42,43,43,44,44 };
int GraphTest::SUNB3[6] = { 49,49,50,50,51,51 };

LPCTSTR GraphTest::tower_files[6] = { L".\\res\\tower\\bottle.png",L".\\res\\tower\\sun.png",L".\\res\\tower\\bluestaratt.png",L".\\res\\tower\\fan.png", L".\\res\\tower\\shit.png",L".\\res\\tower\\snow.png" };
//怪物信息
MONSTER GraphTest::mInfo[8] = {
	// x   y  怪物图片   怪物速度	减速后速度	怪物生命值	是否可见 怪物奖励金	图片缩放比率  翻转 方向 与地图碰撞距离
	/*{ 0,0,L"res\\monster\\boss.png", 2 , 1 , 12 ,true , 268 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\fat1.png", 2 , 1 , 9 ,true , 168 , 0.5 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\fat2.png", 2, 1 , 9 ,true , 168 , 0.5 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\flyblack.png", 5 , 3 , 3 ,true , 14 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\flyyellow.png", 5 , 3 , 3 ,true , 14 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\smallpink.png", 3 , 2 , 6 ,true , 14 , 0.8 , TRANS_NONE,DIR_RIGHT,35 },
	{ 0,0, L"res\\monster\\smallpurple.png", 3 ,2 , 6 ,true , 14 , 0.8 , TRANS_NONE,DIR_RIGHT,35 },
	{ 0,0, L"res\\monster\\smallred.png", 3 , 2 , 6 ,true , 14 ,0.6 ,TRANS_NONE, DIR_RIGHT,32 }*/
	{ 0,0,L"res\\monster\\boss.png", 2 , 1 , 120 ,true , 268 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\fat1.png", 2 , 1 , 90 ,true , 168 , 0.5 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\fat2.png", 2, 1 , 90,true , 168 , 0.5 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\flyblack.png", 5 , 3 , 300 ,true , 14 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\flyyellow.png", 5 , 3 , 300 ,true , 14 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\smallpink.png", 3 , 2 , 600 ,true , 14 , 0.8 , TRANS_NONE,DIR_RIGHT,35 },
	{ 0,0, L"res\\monster\\smallpurple.png", 3 ,2 , 600 ,true , 14 , 0.8 , TRANS_NONE,DIR_RIGHT,35 },
	{ 0,0, L"res\\monster\\smallred.png", 3 , 2 , 600 ,true , 14 ,0.6 ,TRANS_NONE, DIR_RIGHT,32 }
};
//光晕信息
SPRITEINFO GraphTest::lInfo[4] = {
	{ 170, 133,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
	{ 240, 395,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
	{ 200, 420,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
	{ 495, 483,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
};
//道具信息
PROPERTY GraphTest::pInfo[10] = {
	// 道具图片   道具生命值    道具奖励金   图片缩放比率
	{ L"res\\property\\0.png",2500,2500,0.8},
	{ L"res\\property\\1.png",1300,150,0.8 },
	{ L"res\\property\\2.png",670,75,0.6 },
	{ L"res\\property\\3.png",1300,150,0.9 },
	{ L"res\\property\\4.png",2500,268,0.8 },
	{ L"res\\property\\5.png",670,75,0.5 },
	{ L"res\\property\\6.png",1300,1000,0.8 },
	{ L"res\\property\\7.png",1300,150,1 },
	{ L"res\\property\\8.png",670,75,0.7 },
	{ L"res\\property\\9.png",2500,268,1 },
};
int GraphTest::Explosion_F[4] = {0,1,2,3};
//怪物帧序列
int GraphTest::Monster_M[6] = { 0,0,0,1,1,1 };
//光晕帧序列
int GraphTest::Monster_L[11] = { 0,0,0,0,1,1,1,1,1,1,1 };
//萝卜满血帧序列
int GraphTest::luo_lF[100]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,2,2,3,3,3,0,0,0,0,0,0,1,1,1,2,2,2,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,7,8,9,10,11,12,13,13 };
//萝卜掉血
int GraphTest::luo_eF[9]{ 14,14,15,15,16,17,18,19,20 };
GraphTest::GraphTest(HINSTANCE hInstance, LPCTSTR szWindowClass, LPCTSTR szTitle,
	WORD Icon, WORD SmIcon, int iWidth, int iHeight) :T_Engine(hInstance,
		szWindowClass, szTitle, Icon, SmIcon, iWidth, iHeight)
{
	srand((unsigned)time(NULL));
	t_scence = new T_Scene();
	wnd_width = iWidth;
	wnd_height = iHeight;
}

GraphTest::~GraphTest()
{
}

void GraphTest::GameInit()
{
	LoadMusic();
	loadMenu();
	LoadImg();
	loadTowerMenu(0, 0);
	loadUpdateMenu(350, 560);
}

void GraphTest::GameLogic()
{
	if (guans != guan && GameState == GAME_RUN)
	{
		guans = guan;
		LoadGuan(guan);
	}
	if (GameState == GAME_RUN)
	{
		controlFrame();
		if (bomb.size() > 0)
		{
			int bombvi = 0;
			vMonsterSet::iterator mp;
			vSpriteSet::iterator p;
			vSpriteSet::iterator bp;
			for (mp = npc_set.begin(); mp != npc_set.end(); mp++)
			{
				if (((*mp)->IsDead() == false && (*mp)->IsVisible() == true) || focused != 0 || focusedm != 0)
				{
					bombvi = 1;
				}
			}
			if (bombvi == 1)
			{
				for (bp = bomb.begin(); bp != bomb.end(); bp++)
				{
					if ((*bp)->GetX() != 0 && (*bp)->GetY() != 0)
						(*bp)->SetVisible(true);
				}
			}
			else if (bombvi == 0)
			{
				for (bp = bomb.begin(); bp != bomb.end(); bp++)
				{
					(*bp)->SetVisible(false);
				}
			}

			for (p = bomb.begin(); p != bomb.end(); p++)
			{
				if ((*p)->IsVisible() == true)
				{
					if (focusedm != 0)
					{
						updateBombPos((*p), (*p)->GetDir(), fx-60, fy-50);
						vMonsterSet::iterator mp2;
						vSpriteSet::iterator pt4;
						vSpriteSet::iterator pt5;
						for (mp2 = npc_set.begin(); mp2 != npc_set.end(); mp2++)
						{
							if ((*mp2)->IsDead() == false)
							{
								if ((*mp2)->CollideWith((*p),-100))
								{
									if ((*p)->score == 1 && (*p)->level == 1)
										(*mp2)->setBloodh(12);
									else if ((*p)->score == 1 && (*p)->level == 2)
										(*mp2)->setBloodh(24);
									else if ((*p)->score == 1 && (*p)->level == 3)
										(*mp2)->setBloodh(31);

									else if ((*p)->score == 2 && (*p)->level == 1)
										(*mp2)->setBloodh(15);
									else if ((*p)->score == 2 && (*p)->level == 2)
										(*mp2)->setBloodh(22);
									else if ((*p)->score == 2 && (*p)->level == 3)
										(*mp2)->setBloodh(36);

									else if ((*p)->score == 3 && (*p)->level == 1)
										(*mp2)->setBloodh(10);
									else if ((*p)->score == 3 && (*p)->level == 2)
										(*mp2)->setBloodh(12);
									else if ((*p)->score == 3 && (*p)->level == 3)
										(*mp2)->setBloodh(13);

									else if ((*p)->score == 4 && (*p)->level == 1)
										(*mp2)->setBloodh(1);
									else if ((*p)->score == 4 && (*p)->level == 2)
										(*mp2)->setBloodh(3);
									else if ((*p)->score == 4 && (*p)->level == 3)
										(*mp2)->setBloodh(5);

									else if ((*p)->score == 5 && (*p)->level == 1)
										(*mp2)->setBloodh(19);
									else if ((*p)->score == 5 && (*p)->level == 2)
										(*mp2)->setBloodh(25);
									else if ((*p)->score == 5 && (*p)->level == 3)
										(*mp2)->setBloodh(47);

									else if ((*p)->score == 6 && (*p)->level == 1)
										(*mp2)->setBloodh(17);
									else if ((*p)->score == 6 && (*p)->level == 2)
										(*mp2)->setBloodh(32);
									else if ((*p)->score == 6 && (*p)->level == 3)
										(*mp2)->setBloodh(46);
									for (pt4 = player.begin(), pt5 = bomb.begin(); pt4 != player.end(), pt5 != bomb.end(); pt4++, pt5++)
									{
										if ((*p) == (*pt5))
										{

											(*p)->SetPosition((*pt4)->GetX(), (*pt4)->GetY());
											break;
										}
									}
								}
							}
						}
						(*p)->LoopFrame();
						bombvi = 0;
					}
					else if (focused != 0)
					{

						updateBombPos((*p), (*p)->GetDir(), fx-60, fy-50);
						sPropertySet::iterator mp3;
						vSpriteSet::iterator pt41;
						vSpriteSet::iterator pt51;
						for (mp3 = proper_set.begin(); mp3 != proper_set.end(); mp3++)
						{
							if ((*mp3)->IsDead() == false)
							{
								if ((*mp3)->CollideWith((*p),-100))
								{
									(*mp3)->sethurt(true);
									if ((*p)->score == 1 && (*p)->level == 1)
										(*mp3)->setBloodh(12);
									else if ((*p)->score == 1 && (*p)->level == 2)
										(*mp3)->setBloodh(24);
									else if ((*p)->score == 1 && (*p)->level == 3)
										(*mp3)->setBloodh(31);

									else if ((*p)->score == 2 && (*p)->level == 1)
										(*mp3)->setBloodh(15);
									else if ((*p)->score == 2 && (*p)->level == 2)
										(*mp3)->setBloodh(22);
									else if ((*p)->score == 2 && (*p)->level == 3)
										(*mp3)->setBloodh(36);

									else if ((*p)->score == 3 && (*p)->level == 1)
										(*mp3)->setBloodh(10);
									else if ((*p)->score == 3 && (*p)->level == 2)
										(*mp3)->setBloodh(12);
									else if ((*p)->score == 3 && (*p)->level == 3)
										(*mp3)->setBloodh(13);

									else if ((*p)->score == 4 && (*p)->level == 1)
										(*mp3)->setBloodh(1);
									else if ((*p)->score == 4 && (*p)->level == 2)
										(*mp3)->setBloodh(3);
									else if ((*p)->score == 4 && (*p)->level == 3)
										(*mp3)->setBloodh(5);

									else if ((*p)->score == 5 && (*p)->level == 1)
										(*mp3)->setBloodh(19);
									else if ((*p)->score == 5 && (*p)->level == 2)
										(*mp3)->setBloodh(25);
									else if ((*p)->score == 5 && (*p)->level == 3)
										(*mp3)->setBloodh(47);

									else if ((*p)->score == 6 && (*p)->level == 1)
										(*mp3)->setBloodh(17);
									else if ((*p)->score == 6 && (*p)->level == 2)
										(*mp3)->setBloodh(32);
									else if ((*p)->score == 6 && (*p)->level == 3)
										(*mp3)->setBloodh(46);
									for (pt41 = player.begin(), pt51 = bomb.begin(); pt41 != player.end(), pt51 != bomb.end(); pt41++, pt51++)
									{
										if ((*p) == (*pt51))
										{

											(*p)->SetPosition((*pt41)->GetX(), (*pt41)->GetY());
											break;
										}
									}
								}
							}
						}
						(*p)->LoopFrame();
						bombvi = 0;
					}
					else
					{
						for (mp = npc_set.begin(); mp != npc_set.end(); mp++)
						{

							/////////////////////////////////////
							vMonsterSet::iterator mp;

							for (mp = npc_set.begin(); mp != npc_set.end(); mp++)
							{
								if ((*mp)->IsDead() == false)
								{
									updateBombPos((*p), (*p)->GetDir(), (*mp)->GetX() - 60, (*mp)->GetY() - 50);
									if ((*p)->CollideWith((*mp), -100))
									{
										vSpriteSet::iterator pt;
										vSpriteSet::iterator pt1;
										if ((*p)->score == 1 && (*p)->level == 1)
											(*mp)->setBloodh(12);
										else if ((*p)->score == 1 && (*p)->level == 2)
											(*mp)->setBloodh(24);
										else if ((*p)->score == 1 && (*p)->level == 3)
											(*mp)->setBloodh(31);

										else if ((*p)->score == 2 && (*p)->level == 1)
											(*mp)->setBloodh(15);
										else if ((*p)->score == 2 && (*p)->level == 2)
											(*mp)->setBloodh(22);
										else if ((*p)->score == 2 && (*p)->level == 3)
											(*mp)->setBloodh(36);

										else if ((*p)->score == 3 && (*p)->level == 1)
											(*mp)->setBloodh(10);
										else if ((*p)->score == 3 && (*p)->level == 2)
											(*mp)->setBloodh(12);
										else if ((*p)->score == 3 && (*p)->level == 3)
											(*mp)->setBloodh(13);

										else if ((*p)->score == 4 && (*p)->level == 1)
											(*mp)->setBloodh(1);
										else if ((*p)->score == 4 && (*p)->level == 2)
											(*mp)->setBloodh(3);
										else if ((*p)->score == 4 && (*p)->level == 3)
											(*mp)->setBloodh(5);

										else if ((*p)->score == 5 && (*p)->level == 1)
											(*mp)->setBloodh(19);
										else if ((*p)->score == 5 && (*p)->level == 2)
											(*mp)->setBloodh(25);
										else if ((*p)->score == 5 && (*p)->level == 3)
											(*mp)->setBloodh(47);

										else if ((*p)->score == 6 && (*p)->level == 1)
											(*mp)->setBloodh(17);
										else if ((*p)->score == 6 && (*p)->level == 2)
											(*mp)->setBloodh(32);
										else if ((*p)->score == 6 && (*p)->level == 3)
											(*mp)->setBloodh(46);
										for (pt = player.begin(), pt1 = bomb.begin(); pt != player.end(), pt1 != bomb.end(); pt++, pt1++)
										{
											if ((*p) == (*pt1))
											{

												(*p)->SetPosition((*pt)->GetX(), (*pt)->GetY());
												break;
											}
										}
									}
								}
							}
							/////////////////////////////////////
							bombvi = 0;
						}
					}

				}
			}
		}


		if (player.size() > 0)
		{
			vSpriteSet::iterator p1;
			for (p1 = player.begin(); p1 != player.end(); p1++)
			{
				if ((*p1)->IsVisible() == true)
				{
					(*p1)->LoopFrame();
				}
			}
		}
		LoadWaveNPC();
		updateNPCPos();
		updateAnimation();
		updateLuo();
		winState();
	}
}
void GraphTest::GameEnd()
{
	ClearGuan();
	player.clear();
	bomb_set.clear();
}

void GraphTest::GamePaint(HDC hdc)
{
	if (GameState == GAME_START)
	{
		p_menu->DrawMenu(hdc,1,255,true);
		set_menu.DrawMenu(hdc, 0.5);
		start_menu.DrawMenu(hdc,0.5);
	}
	else if (GameState == GAME_SCREEN)
	{
		p_screenmenu->DrawMenu(hdc,1,0,255,true);
		main_menu.DrawMenu(hdc,0.7);
		if (flagbg == true)
			bg_buffer.Play(true);
		runbg_buffer.Stop();
	}
	else if (GameState == GAME_ABOUT)
	{
		p_aboutmenu->DrawMenu(hdc);

		//T_Graph::PaintBlank(hdc, 360, 50, 400, 360, Color::Green, 80);
		RectF infoRec;
		infoRec.X = 0.00;
		infoRec.Y = 145.00;
		infoRec.Width = (float)wnd_width;
		infoRec.Height = (float)wnd_height / 2 + 30;

		LPCTSTR info = L" 保卫萝卜 1.0\n\n组号:6\n\n          8000116127  张 涵 软工164\n\n\n\n         8000116120  王一清 软工164\n\n\n\n         8000116024  白星宇 软工161";
		T_Graph::PaintText(hdc, infoRec, info, 20, L"华康少女文字W5", Color(255, 252, 231), FontStyleBold, StringAlignmentCenter);
		int pp = 350;
		int yy = 225;
		zhang->PaintImage(hdc, pp, yy, 64, 85, 255);
		wang->PaintImage(hdc, pp, yy + 100, 64, 85, 255);
		bai->PaintImage(hdc, pp, yy + 200, 64, 85, 255);
		
	}
	else if (GameState == GAME_SETTING)
	{
		p_setBack_menu->DrawMenu(hdc, 1, 255, true);
		RectF infoRec;
		infoRec.X = 250.00;
		infoRec.Y = 110.00;
		infoRec.Width = (float)wnd_width;
		infoRec.Height = (float)wnd_height / 2 - 30;

		LPCTSTR info = L" 背景音乐:";
		T_Graph::PaintText(hdc, infoRec, info, 25, L"华康少女文字W5", Color(255, 252, 231), FontStyleBold, StringAlignmentNear);

		infoRec.X = 250.00;
		infoRec.Y = 250.00;
		infoRec.Width = (float)wnd_width;
		infoRec.Height = (float)wnd_height / 2 - 30;

		info = L" 按键音乐:";
		T_Graph::PaintText(hdc, infoRec, info, 25, L"华康少女文字W5", Color(255, 252, 231), FontStyleBold, StringAlignmentNear);
		setm_menu1.DrawMenu(hdc);
		setm_menu2.DrawMenu(hdc);
	}
	else if (GameState == GAME_RUN)
	{
		t_scence->Draw(hdc, 0, 0);
		if (forflag == true)
		{
			forbid->PaintImage(hdc, mouse_pt.x-10, mouse_pt.y-10,34,34,255);
			forflag = false;
		}
		if (lightflag)
		{
			if (frameCount % 6<3)
				light.PaintRegion(light.GetBmpHandle(), hdc, lInfo[guan - 1].X, lInfo[guan - 1].Y, 0, 0, 98, 92, 1, TRANS_NONE, 200);
			else
				light.PaintRegion(light.GetBmpHandle(), hdc, lInfo[guan - 1].X, lInfo[guan - 1].Y, 98, 0, 98, 92, 1, TRANS_NONE, 200);
		}
		countDown(hdc);
		vMonsterSet::iterator p;
		for (p = npc_set.begin(); p != npc_set.end(); p++)
		{
			
			if ((*p)->IsVisible() == true)
			{
				//(*p)->Draw(hdc);
				drawMBlood(hdc,(*p)->GetX()+5, (*p)->GetY()+5,*p);
			}
				
		}

		RectF infoRec;
		infoRec.X = 540;
		infoRec.Y = 11;
		infoRec.Width = 40;
		infoRec.Height = 40;
		LPCTSTR info = T_Util::int_to_wstring(waveNum[guan - 1]);
		T_Graph::PaintText(hdc, infoRec, info,18, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);
		info = T_Util::int_to_wstring(frameCount / (MaxFrameCount / waveNum[guan - 1]) + 1);
		infoRec.X = 490;
		infoRec.Y = 11;
		T_Graph::PaintText(hdc, infoRec, info, 18, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);
		info = T_Util::int_to_wstring(price);
		infoRec.X = 170;
		infoRec.Y = 11;
		infoRec.Width = 60;
		infoRec.Height = 40;
		T_Graph::PaintText(hdc, infoRec, info, 18, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);

		luolife->PaintRegion(luolife->GetBmpHandle(), hdc, playLuo->GetX() + 70, playLuo->GetY() + 15, 0, (life - 1) * 37, 74, 36, 0.8);

		run_speed.DrawMenu(hdc,0.8);
		run_start.DrawMenu(hdc,0.8);
		run_return.DrawMenu(hdc,0.8);

		//技能按钮
		s_ice.DrawMenu(hdc);
		s_del.DrawMenu(hdc);
		s_life.DrawMenu(hdc);
		s_slow.DrawMenu(hdc);

		choosefan.DrawMenu(hdc,0.8);
		choosebluestar.DrawMenu(hdc, 0.8);
		choosebottle.DrawMenu(hdc, 0.8);
		chooseshit.DrawMenu(hdc, 0.8);
		choosesnow.DrawMenu(hdc, 0.8);
		choosesun.DrawMenu(hdc, 0.8);
		chooselevel.DrawMenu(hdc, 0.8);

		countDown(hdc);
		if (focused != 0)
		{
			if (focusedm == 0)
			{
				fo->PaintRegion(fo->GetBmpHandle(), hdc, proper_set.at(focused - 1)->GetX() + 20, proper_set.at(focused - 1)->GetY() - 10, 30 * framef,0 , 30, 36, 0.8);
			}
			else
			{
				fo->PaintRegion(fo->GetBmpHandle(), hdc, npc_set.at(focused - 1)->GetX() + 30, npc_set.at(focused - 1)->GetY() - 20, 30 * framef, 0, 30, 36, 0.8);
			}
			framef++;
			//fo->PaintRegion(fo->GetBmpHandle(), hdc, fx, fy, 30, 0, 30, 36, 1);
			//fo->PaintRegion(fo->GetBmpHandle(), hdc, fx, fy, 30, 0, 30, 36, 1);
		}
		if (frameTime == 81)
			updateProLife(hdc);
		updateNPCLife(hdc);
		//GameState = GAME_WIN;
	}
	else if (GameState == GAME_PAUSE)
	{
		pause->PaintRegion(pause->GetBmpHandle(),hdc, 850, 10,0,0, pause->GetImageWidth(), pause->GetImageHeight()/2,0.8,0,200);
	}
	else if (GameState == GAME_WIN)
	{
		p_winmenu->DrawTMenu(hdc,0.95);
		if (luoType == -1)     //铜萝卜
			tong->PaintImage(hdc, 505, 40,118,160, 250);
		if (luoType == 0)   //银萝卜
			yin->PaintImage(hdc, 505, 40, 118, 160, 250);
		if (luoType == 1)   //金萝卜
			jin->PaintImage(hdc, 505, 40, 118, 160, 250);
		RectF infoRec;
		infoRec.X = 435;
		infoRec.Y = 225;
		infoRec.Width = 250;
		infoRec.Height = 40;
		LPCTSTR info = L"你获得的宝石数 ";
		T_Graph::PaintText(hdc, infoRec, info, 18, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);
		infoRec.X += 120;
		info = T_Util::int_to_wstring(price / 1000);
		T_Graph::PaintText(hdc, infoRec, info, 18, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);
	}
	else if (GameState == GAME_OVER)
	{
		p_overmenu->DrawTMenu(hdc, 0.95);
		RectF infoRec;
		infoRec.X = 605;
		infoRec.Y = 220;
		infoRec.Width = 60;
		infoRec.Height = 40;
		LPCTSTR info = T_Util::int_to_wstring(waveNum[guan - 1]);
		T_Graph::PaintText(hdc, infoRec, info, 22, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);
		info = T_Util::int_to_wstring(frameCount / (MaxFrameCount / waveNum[guan - 1]) + 1);
		infoRec.X = 533;
		T_Graph::PaintText(hdc, infoRec, info, 22, L"华康少女文字W5", Color::White, FontStyleBold, StringAlignmentCenter);
		infoRec.X = 300;
		infoRec.Y = 350;
		infoRec.Width = 550;
		infoRec.Height = 100;
		info = L"危机时使用魔法技能可以给怪物致命一击！";
		T_Graph::PaintText(hdc, infoRec, info, 17, L"华康少女文字W5", Color(10,127,207), FontStyleBold, StringAlignmentCenter);
	}
}

void GraphTest::GameKeyAction(int ActionType)
{
	if (GameState == GAME_START)
	{
		if (GetAsyncKeyState(VK_UP) < 0)
			p_menu->MenuKeyDown(VK_UP);
		if (GetAsyncKeyState(VK_DOWN) < 0)
			p_menu->MenuKeyDown(VK_DOWN);
		if (GetAsyncKeyState(VK_LEFT) < 0)
			p_menu->MenuKeyDown(VK_LEFT);
		if (GetAsyncKeyState(VK_RIGHT) < 0)
			p_menu->MenuKeyDown(VK_RIGHT);
		if (GetAsyncKeyState(VK_RETURN) < 0)
		{
			if (p_menu->GetMenuIndex() >= 0)
			{
				switch (p_menu->GetMenuIndex())
				{
				case 0:
					GameState = GAME_SCREEN;			
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
		}
	}
	else if (GameState == GAME_ABOUT)
	{
		if (GetAsyncKeyState(VK_UP) < 0)
			p_aboutmenu->MenuKeyDown(VK_UP);
		if (GetAsyncKeyState(VK_DOWN) < 0)
			p_aboutmenu->MenuKeyDown(VK_DOWN);
		if (GetAsyncKeyState(VK_LEFT) < 0)
			p_aboutmenu->MenuKeyDown(VK_LEFT);
		if (GetAsyncKeyState(VK_RIGHT) < 0)
			p_aboutmenu->MenuKeyDown(VK_RIGHT);
		if (GetAsyncKeyState(VK_RETURN) < 0)
		{
			if (p_aboutmenu->GetMenuIndex() >= 0)
			{
				switch (p_aboutmenu->GetMenuIndex())
				{
				case 0:
					GameState = GAME_START;
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
		}
	}
	else if (GameState == GAME_RUN) {
		
		
	}
}

void GraphTest::GameMouseAction(int x, int y, int ActionType)
{
	wstring setItems[] = { L" " };
	if (GameState == GAME_START)
	{
		if (ActionType == MOUSE_MOVE&&GameState != GAME_RUN)
		{
			p_menu->MenuMouseMove(x, y);
			start_menu.MenuMouseMove(x, y);
			set_menu.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_menu->MenuMouseClick(x, y);
			int aboutindex = start_menu.MenuMouseClick(x, y);
			int setindex = set_menu.MenuMouseClick(x, y);
			if (index >= 0)
			{
				switch (index)
				{
				case 0:
					GameState = GAME_SCREEN;
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
			if(aboutindex==0)  GameState = GAME_ABOUT;
			//如果点击设置(小螺丝钉)
			if (setindex == 0)  GameState = GAME_SETTING;
		}
	}
	else if (GameState == GAME_SCREEN)
	{
		if (ActionType == MOUSE_MOVE&&GameState != GAME_RUN)
		{
			p_screenmenu->MenuMouseMove(x, y);
			main_menu.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_screenmenu->MenuMouseClick(x, y);
			int mainindex = main_menu.MenuMouseClick(x, y);
			if (index >= 0)
			{
				switch (index)
				{
				case 0:
					GameState = GAME_RUN;
					guan = 1;		
					break;
				case 1:
					GameState = GAME_RUN;
					guan = 2;
					break;
				case 2:
					GameState = GAME_RUN;
					guan = 3;
					break;
				case 3:
					GameState = GAME_RUN;
					guan = 4;
					break;
				}
				bg_buffer.Stop();
				if (flagbg)
				{
					runbg_buffer.Play(true);
				}
				
			}
			if (mainindex == 0)  GameState = GAME_START;
		}
	}
	else if (GameState == GAME_ABOUT)
	{
		if (ActionType == MOUSE_MOVE&&GameState != GAME_RUN)
		{
			p_aboutmenu->MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_aboutmenu->MenuMouseClick(x, y);
			if (index >= 0)
			{
				switch (index)
				{
				case 0:
					GameState = GAME_START;
					
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
		}
	}
	else if (GameState == GAME_RUN)
	{
		if (ActionType == MOUSE_MOVE)
		{
			run_return.MenuMouseMove(x, y);		//返回
			run_speed.MenuMouseMove(x, y);		//切换速度
			run_start.MenuMouseMove(x, y);		//开始暂停

			choosefan.MenuMouseMove(x, y);
			choosebluestar.MenuMouseMove(x, y);
			choosebottle.MenuMouseMove(x, y);
			chooseshit.MenuMouseMove(x, y);
			choosesnow.MenuMouseMove(x, y);
			choosesun.MenuMouseMove(x, y);

			chooselevel.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{	
			//菜单
			int index = run_return.MenuMouseClick(x, y);
			if (index == 0)
			{
				GameState = GAME_SCREEN;
				ClearGuan();
				guans = 0;
				
			}
			index = run_speed.MenuMouseClick(x, y);
			if (index == 0)
			{
				//GameState = GAME_SCREEN;
				if (speedf == 1)
				{
					setMenu(&run_speed, 100, 56, L"res\\menu\\speed2.png", setItems);
					speedf = 2;
				}
				else if (speedf == 2)
				{
					setMenu(&run_speed, 100, 56, L"res\\menu\\speed1.png", setItems);
					speedf = 1;
				}
			}
			index = run_start.MenuMouseClick(x, y);
			if (index == 0)
			{
				setMenu(&run_start, 56, 56, L"res\\menu\\zan.png", setItems);
				GameState = GAME_PAUSE;
			}
			//技能
			int indexskill = s_ice.MenuMouseClick(x, y);					//冰冻技能
			if (indexskill  == 0)
			{
				skillIce();
				skillf = 1;
			}
			indexskill = s_slow.MenuMouseClick(x, y);
			if (indexskill  == 0)
			{
				skillSlow();
				skillf = 2;
			}
			indexskill  = s_del.MenuMouseClick(x, y);					//删除技能
			if (indexskill  == 0)
			{
				skillDel();
			}
			indexskill  = s_life.MenuMouseClick(x, y);
			if (indexskill  == 0)
			{
				skillLife();
			}

			if (x >= 78 && x <= 1060 && y >= 77 && y <= 620)
			{
				forflag = false;
				for (int i = 0; i < npc_set.size(); i++)
				{
					if(npc_set.at(i)->CollideWithMouse(x, y, 2))
					{ 
						if ((focused-1) < npc_set.size() &&focused != 0 && npc_set.at(focused - 1)->CollideWithMouse(x, y, 2))
						{
							focused = 0;
							break;
						}
						else if (npc_set.at(i)->CollideWithMouse(x, y, 2) && focused != i + 1)
						{
							focused = i + 1;
							fx = npc_set.at(i)->GetX();
							fy = npc_set.at(i)->GetY();
							focusedm = 1;
							
							//button_click_buffer.Play(true);
							break;
						}
					}
				}
				for (int i = 0; i < proper_set.size(); i++)
				{
					if (focused != 0  && focused <= proper_set.size() && proper_set.at(focused - 1)->CollideWithMouse(x, y, 2))
					{
						focused = 0;
						break;
					}
					else if (proper_set.at(i)->CollideWithMouse(x, y, 2) && focused != i + 1)
					{
						focused = i + 1;
						fx = proper_set.at(i)->GetX();
						fy = proper_set.at(i)->GetY();
						focusedm = 0;
						//button_click_buffer.Play(true);
						break;
					}
				}
				//炮塔
				int indexf = choosefan.MenuMouseClick(x, y);
			int indexbs = choosebluestar.MenuMouseClick(x, y);
			int indexb = choosebottle.MenuMouseClick(x, y);
			int indexs = chooseshit.MenuMouseClick(x, y);
			int indexsn = choosesnow.MenuMouseClick(x, y);
			int indexsun = choosesun.MenuMouseClick(x, y);
			if (indexf == 0)
			{
				move = 0;
				towerkind = 1;
				towerflag = 1;
				
				LoadPlayer(0, 0);
				LoadBomb(0, 0);
			}
			if (indexbs == 0)
			{
				move = 0;
				towerkind = 2;
				towerflag = 1;
				
				LoadPlayer(0, 0);
				LoadBomb(0, 0);
			}
			if (indexb == 0)
			{
				move = 0;
				towerkind = 3;
				towerflag = 1;
				
				LoadPlayer(0, 0);
				LoadBomb(0, 0);
			}
			if (indexs == 0)
			{
				move = 0;
				towerkind = 4;
				towerflag = 1;
				
				LoadPlayer(0, 0);
				LoadBomb(0, 0);
			}
			if (indexsn == 0)
			{
				move = 0;
				towerkind = 5;
				towerflag = 1;
				
				LoadPlayer(0, 0);
				LoadBomb(0, 0);
			}
			if (indexsun == 0)
			{
				move = 0;
				towerkind = 6;
				towerflag = 1;
				
				LoadPlayer(0, 0);
				LoadBomb(0, 0);
			}
			if (towerflag == 1&&move==1&&player.size()>0&& player.back()->active == true)
			{
				int tp1 = price;
				if (player.back()->score == 1)
					tp1 -= 128;
				else if (player.back()->score == 2)
					tp1 -= 180;
				else if (player.back()->score == 3)
					tp1 -= 100;
				else if (player.back()->score == 4)
					tp1 -= 120;
				else if (player.back()->score == 5)
					tp1 -= 160;
				else if (player.back()->score == 6)
					tp1 -= 180;
				if (tp1 >= 0)
				{
					player.back()->SetPosition(x - 113, y - 113);
					bomb.back()->SetPosition(x - 113, y - 113);

					player.back()->SetVisible(true);
					bomb.back()->SetVisible(true);
					player.back()->active = false;
					move = 0;
					price = tp1;
				}
				else 
				{
					
				}
				


				
			}
			move = 1;
			int indexl = chooselevel.MenuMouseClick(x, y);
			
			vSpriteSet::iterator p;
			vSpriteSet::iterator p1;
			if (indexl == 0)
			{
				up2 = 0;
				up1 = 1;
			}

			if(up1==1&&up2==1)
			{
				for (p = player.begin(), p1 = bomb.begin(); p != player.end(), p1 != bomb.end(); p++, p1++)
				{
					if (x >= (*p)->GetX() && x <= ((*p)->GetX() + (*p)->GetRatioSize().cx) && y >= (*p)->GetY() && y <= ((*p)->GetY() + (*p)->GetRatioSize().cy))
					{
						int tprice = price;
						if ((*p)->score == 1)
							tprice -= 220;
						else if ((*p)->score == 2)
							tprice -= 260;
						else if ((*p)->score == 3)
							tprice -= 180;
						else if ((*p)->score == 4)
							tprice -= 220;
						else if ((*p)->score == 5)
							tprice -= 220;
						else if ((*p)->score == 6)
							tprice -= 260;
						if (tprice >= 0)
						{
							(*p)->level++;
							UpdateTowerLevel(*p);
							(*p1)->level++;
							UpdateBombLevel(*p1);
							price = tprice;
						}

						else
						{
							
						}
					}
					else
					{
						
					}
				}
				up1 = 0;
			}
			up2 = 1;

		}
			else
			{
				forflag = true;
				mouse_pt.x = x;
				mouse_pt.y = y;
			}
		}
	}
	else if (GameState == GAME_PAUSE)
	{
		if (ActionType == MOUSE_MOVE)
		{
			run_start.MenuMouseMove(x, y);		//开始暂停
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = run_start.MenuMouseClick(x, y);
			if (index == 0)
			{
				setMenu(&run_start, 56, 56, L"res\\menu\\start.png", setItems);
				GameState = GAME_RUN;
			}
		}
	}
	//设置页面
	else if (GameState == GAME_SETTING)
	{
		
		MENUITEM mItem;
		if (ActionType == MOUSE_MOVE)
		{
			p_setBack_menu->MenuMouseMove(x, y);
			setm_menu1.MenuMouseMove(x, y);
			setm_menu2.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index1 = setm_menu1.MenuMouseClick(x, y);
			int index2 = setm_menu2.MenuMouseClick(x, y);
			int index = p_setBack_menu->MenuMouseClick(x,y);
			
			if (index == 0)  GameState = GAME_START;
			//设置音效是开启或关闭
			if (index1 == 0)
			{
				mItem.pos.x = 470;
				mItem.pos.y = 200;
				mItem.ItemName = setItems[0];
				setm_menu1.AddMenuItem(mItem);
				if (flagbg==false)
				{
					//bg_buffer.Restore();
					bg_buffer.Play(true);
					//runbg_buffer.Restore();
					//runbg_buffer.Play(true);
					flagbg = true;

					setMenu(&setm_menu1, 200, 100, L"res\\menu\\kai.png", setItems);
				}
				else if (flagbg == true)
				{
					bg_buffer.Stop();
					//runbg_buffer.Stop();
					flagbg = false;

					setMenu(&setm_menu1, 200, 100, L"res\\menu\\guan.png", setItems);
				}
			}
			 if (index2 == 0)
			{
				 mItem.pos.x = 470;
				 mItem.pos.y = 350;
				 mItem.ItemName = setItems[0];
				 setm_menu1.AddMenuItem(mItem);
				if (flagbut == false)
				{
					stopClickMusic(button_click_buffer, button_move_buffer);
					flagbut = true;

					setMenu(&setm_menu2, 200, 100, L"res\\menu\\kai.png", setItems);
				}
				else if (flagbut == true)
				{
					t_menu.SetClickSound(NULL);
					start_menu.SetClickSound(NULL);
					about_menu.SetClickSound(NULL);
					screen_menu.SetClickSound(NULL);
					setm_menu1.SetClickSound(NULL);
					setm_menu2.SetClickSound(NULL);
					setBack_menu.SetClickSound(NULL);
					run_return.SetClickSound(NULL);
					main_menu.SetClickSound(NULL);
					set_menu.SetClickSound(NULL);

					t_menu.SetMoveSound(NULL);
					start_menu.SetMoveSound(NULL);
					about_menu.SetMoveSound(NULL);
					screen_menu.SetMoveSound(NULL);
					setm_menu1.SetMoveSound(NULL);
					setm_menu2.SetMoveSound(NULL);
					setBack_menu.SetMoveSound(NULL);
					run_return.SetMoveSound(NULL);
					main_menu.SetMoveSound(NULL);
					set_menu.SetMoveSound(NULL);
					flagbut = false;

					setMenu(&setm_menu2, 200, 100, L"res\\menu\\guan.png", setItems);
				}

			}
		}
	}
	else if (GameState == GAME_WIN)
	{
		if (ActionType == MOUSE_MOVE)
		{
			p_overmenu->MenuMouseMove(x, y);		//开始暂停
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index;
			index = p_overmenu->MenuMouseClick(x, y);
			switch (index)
			{
			case 0:
				GameState = GAME_SCREEN;
				guans = 0;
				break;
			case 1:
				GameState = GAME_RUN;
				ClearGuan();
				guan = guan + 1;
				break;
			}
		}
	}
	else if (GameState == GAME_OVER)
	{
		if (ActionType == MOUSE_MOVE)
		{
			p_winmenu->MenuMouseMove(x, y);		//开始暂停
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_winmenu->MenuMouseClick(x, y);
			switch (index)\
			{
			case 0:
				GameState = GAME_SCREEN;
				guans = 0;
				break;
			case 1:
				GameState = GAME_RUN;
				guans = 0;
				break;
			}
		}
	}
}

void GraphTest::loadTowerMenu(int x, int y) {

	int btn_width = 0, btn_height = 0;
	wstring setItems[] = { L" " };
	MENUITEM mItem;

	btn_width = 226;           //菜单项图片宽
	btn_height = 226;         //菜单项图片高
							  //游戏界面的返回
	mItem.pos.x = 0;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	choosefan.AddMenuItem(mItem);

	setMenu(&choosefan, btn_width, btn_height, L"res\\tower\\fan.png", setItems);
	mItem.pos.x = 0;
	mItem.pos.y = 200;
	mItem.ItemName = setItems[0];
	choosebluestar.AddMenuItem(mItem);

	setMenu(&choosebluestar, btn_width, btn_height, L"res\\tower\\bluestaratt.png", setItems);

	mItem.pos.x = 0;
	mItem.pos.y = 400;
	mItem.ItemName = setItems[0];
	choosebottle.AddMenuItem(mItem);

	setMenu(&choosebottle, btn_width, btn_height, L"res\\tower\\bottle.png", setItems);

	mItem.pos.x = 950;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	chooseshit.AddMenuItem(mItem);

	setMenu(&chooseshit, btn_width, btn_height, L"res\\tower\\shit.png", setItems);

	mItem.pos.x = 950;
	mItem.pos.y = 200;
	mItem.ItemName = setItems[0];
	choosesnow.AddMenuItem(mItem);

	setMenu(&choosesnow, btn_width, btn_height, L"res\\tower\\snow.png", setItems);

	mItem.pos.x = 950;
	mItem.pos.y = 400;
	mItem.ItemName = setItems[0];
	choosesun.AddMenuItem(mItem);

	setMenu(&choosesun, btn_width, btn_height, L"res\\tower\\sun.png", setItems);

	bg_buffer.Play(true);
	//GameState = GAME_RUN;
}

void GraphTest::loadUpdateMenu(int x, int y)
{
	int btn_width = 0, btn_height = 0;
	wstring setItems[] = { L" " };
	MENUITEM mItem;
	//---游戏界面的返回-------------------------

	btn_width = 76;           //菜单项图片宽
	btn_height = 78;         //菜单项图片高
							 //游戏界面的返回
	mItem.pos.x = x;
	mItem.pos.y = y;
	mItem.ItemName = setItems[0];

	chooselevel.AddMenuItem(mItem);

	setMenu(&chooselevel, btn_width, btn_height, L"res\\tool\\up.png", setItems);


	bg_buffer.Play(true);
	//GameState = GAME_RUN;
}
//加载菜单
void GraphTest::loadMenu()
{
	//GameState = GAME_WIN;
	GameState = GAME_START;
	int x = 0, y = 0;
	int btn_width = 0, btn_height = 0;     //主菜单和关于界面的菜单
	p_menu = &t_menu;
	p_aboutmenu = &about_menu;
	p_screenmenu = &screen_menu;
	p_setBack_menu = &setBack_menu;
	p_start_menu = &start_menu;
	p_winmenu = &win_menu;
	p_overmenu = &over_menu;
	p_menu->SetMenuBkg(L"res\\menu\\menu.png");						//主页面
	p_aboutmenu->SetMenuBkg(L"res\\menu\\about_bak.png");			//关于页面
	p_screenmenu->SetMenuBkg(L"res\\menu\\guanc.png");				//选关页面
	p_setBack_menu->SetMenuBkg(L"res\\menu\\about_bak.png");		//设置页面
	p_winmenu->SetMenuBkg(L"res\\menu\\win.jpg");				//游戏win页面*
	p_overmenu->SetMenuBkg(L"res\\menu\\over.jpg");			//游戏失败页面

	wstring menuItems[] = { L"新游戏",L"退出游戏" };
	wstring aboutMenuItems[] = { L"返回",L"退出游戏" };
	wstring setItems[] = { L" " };
	wstring setItem[] = { L" ",L"" };
	wstring chooseItems[] = { L"1 ",L"2",L"3",L"4",L"5",L"6",L"7",L"8",L"9" };
	wstring setmItems[] = { L"返回" };
	MENUITEM mItem;

	//----主页面-----------------------------
	btn_width = 260;           //菜单项图片宽
	btn_height = 120;         //菜单项图片高
	for (int i = 0; i < 2; i++)
	{
		//垂直居中布局的坐标
		/*x = (wndWidth - btn_width) / 2;
		y = i*(btn_height + MENU_SPACE) + (wnd_height - 3 * btn_height - 2 * MENU_SPACE) / 2;*/
		x = (wndWidth - btn_width) / 2;
		y = i*(btn_height + MENU_SPACE) + (wnd_height - 2 * btn_height - MENU_SPACE) / 2;

		mItem.pos.x = x + 2;      //当前菜单项x坐标
		mItem.pos.y = y + 5;       //当前菜单项y坐标
		mItem.ItemName = menuItems[i];          //当前菜单项文字
		p_menu->AddMenuItem(mItem);

		x = i*(btn_width + MENU_SPACE) + (wnd_width - 2 * btn_width - MENU_SPACE) / 2;
		y = wnd_height - 2 * btn_height + 100;
		mItem.pos.x = x;
		mItem.pos.y = y + 20;
		mItem.ItemName = aboutMenuItems[i];
		p_aboutmenu->AddMenuItem(mItem);
	}
	setMenu(p_menu, btn_width, btn_height, L"res\\menu\\menu_b1.png", menuItems);
	//-----关于界面的菜单--------------------------
	btn_width = 236;           //菜单项图片宽
	btn_height = 72;         //菜单项图片高
	setMenu(p_aboutmenu, btn_width, btn_height, L"res\\menu\\button.png", aboutMenuItems);
	//-----设置界面的菜单--------------------------
	//返回按键
	btn_width = 236;           //菜单项图片宽
	btn_height = 72;         //菜单项图片高
	x = 450;
	y = 480;
	mItem.pos.x = x;
	mItem.pos.y = y;
	mItem.ItemName = setmItems[0];
	p_setBack_menu->AddMenuItem(mItem);

	setMenu(p_setBack_menu, btn_width, btn_height, L"res\\menu\\button.png", setmItems);
	//音效按键
	btn_width = 200;           //菜单项图片宽
	btn_height = 100;         //菜单项图片高

	mItem.pos.x = 470;
	mItem.pos.y = 200;
	mItem.ItemName = setItems[0];
	setm_menu1.AddMenuItem(mItem);
	setMenu(&setm_menu1, btn_width, btn_height, L"res\\menu\\kai.png", setItems);

	mItem.pos.x = 470;
	mItem.pos.y = 350;
	mItem.ItemName = setItems[0];
	setm_menu2.AddMenuItem(mItem);
	setMenu(&setm_menu2, btn_width, btn_height, L"res\\menu\\kai.png", setItems);

	//----主菜单的关于问号--------------------------
	btn_width = 52;           //菜单项图片宽
	btn_height = 75;         //菜单项图片高
							 //关于问号
	mItem.pos.x = wnd_width - 150;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	start_menu.AddMenuItem(mItem);

	setMenu(&start_menu, btn_width, btn_height, L"res\\menu\\menu_h.png", setItems);

	//---主菜单的设置---------------
	//设置
	mItem.pos.x = wnd_width - 100;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	set_menu.AddMenuItem(mItem);
	setMenu(&set_menu, btn_width, btn_height, L"res\\menu\\menu_s.png", setItems);

	//----关卡选择的设置-------
	btn_width = 68;
	btn_height = 55;
	//选关
	int posx[] = { 58,5,210,515,185,420,660,930,900 };
	int posy[] = { 418,210,60,210,360,460,520,445,230 };
	for (int i = 0; i < 9; i++)
	{
		mItem.pos.x = posx[i];
		mItem.pos.y = posy[i];
		mItem.ItemName = chooseItems[i];
		p_screenmenu->AddMenuItem(mItem);
	}
	setMenu(p_screenmenu, btn_width, btn_height, L"res\\menu\\g.png", chooseItems);

	//-----关卡选择返回主菜单-------
	btn_width = 74;
	btn_height = 74;
	//返回主菜单
	mItem.pos.x = 10;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	main_menu.AddMenuItem(mItem);
	setMenu(&main_menu, btn_width, btn_height, L"res\\menu\\hh.png", setItems);

	//-----运行界面按钮-------
	btn_width = 56;
	btn_height = 56;
	//开始暂停
	mItem.pos.x = 850;
	mItem.pos.y = 10;
	mItem.ItemName = setItems[0];
	run_start.AddMenuItem(mItem);
	setMenu(&run_start, btn_width, btn_height, L"res\\menu\\start.png", setItems);
	//返回主页面
	mItem.pos.x = 930;
	mItem.pos.y = 10;
	mItem.ItemName = setItems[0];
	run_return.AddMenuItem(mItem);
	setMenu(&run_return, btn_width, btn_height, L"res\\menu\\return.png", setItems);
	//切换速度
	btn_width = 100;
	mItem.pos.x = 728;
	mItem.pos.y = 10;
	mItem.ItemName = setItems[0];
	run_speed.AddMenuItem(mItem);
	setMenu(&run_speed, btn_width, btn_height, L"res\\menu\\speed1.png", setItems);
	//-------------成功失败页面-------
	//成功
	for (int i = 0; i < 2; i++)
	{
		x = 305 + i * 300;
		y = 500;
		mItem.pos.x = x;      //当前菜单项x坐标
		mItem.pos.y = y;       //当前菜单项y坐标
		mItem.ItemName = setItem[i];          //当前菜单项文字
		p_winmenu->AddMenuItem(mItem);
		p_overmenu->AddMenuItem(mItem);
	}
	btn_width = 236;           //菜单项图片宽
	btn_height = 72;         //菜单项图片高
	setMenuT(p_winmenu, btn_width, btn_height, L"res\\menu\\0.png", L"res\\menu\\1.png", setItem);
	//失败
	setMenuT(p_overmenu, btn_width, btn_height, L"res\\menu\\0.png", L"res\\menu\\2.png", setItem);

	//-----------------技能按钮---------
	btn_width = 65;
	btn_height = 65;
	//开始暂停
	mItem.pos.x = 480;
	mItem.pos.y = 560;
	mItem.ItemName = setItems[0];
	s_ice.AddMenuItem(mItem);
	mItem.pos.x += 110;
	s_del.AddMenuItem(mItem);
	mItem.pos.x += 110;
	s_life.AddMenuItem(mItem);
	mItem.pos.x += 110;
	s_slow.AddMenuItem(mItem);
	setMenu(&s_ice, btn_width, btn_height, L"res\\menu\\skill_ice.png", setItems);
	setMenu(&s_del, btn_width, btn_height, L"res\\menu\\skill_del.png", setItems);
	setMenu(&s_life, btn_width, btn_height, L"res\\menu\\skill_life.png", setItems);
	setMenu(&s_slow, btn_width, btn_height, L"res\\menu\\skill_slow.png", setItems);

	bg_buffer.Play(true);


}
//停止点击的音乐
void GraphTest::stopClickMusic(AudioDXBuffer button_click_buffer, AudioDXBuffer button_move_buffer)
{
	t_menu.SetClickSound(&button_click_buffer);
	start_menu.SetClickSound(&button_click_buffer);
	about_menu.SetClickSound(&button_click_buffer);
	screen_menu.SetClickSound(&button_click_buffer);
	setm_menu1.SetClickSound(&button_click_buffer);
	setm_menu2.SetClickSound(&button_click_buffer);
	setBack_menu.SetClickSound(&button_click_buffer);
	run_return.SetClickSound(&button_click_buffer);
	main_menu.SetClickSound(&button_click_buffer);
	set_menu.SetClickSound(&button_click_buffer);

	t_menu.SetMoveSound(&button_move_buffer);
	start_menu.SetMoveSound(&button_move_buffer);
	about_menu.SetMoveSound(&button_move_buffer);
	screen_menu.SetMoveSound(&button_move_buffer);
	setm_menu1.SetMoveSound(&button_move_buffer);
	setm_menu2.SetMoveSound(&button_move_buffer);
	setBack_menu.SetMoveSound(&button_move_buffer);
	run_return.SetMoveSound(&button_move_buffer);
	main_menu.SetMoveSound(&button_move_buffer);
	set_menu.SetMoveSound(&button_move_buffer);
}
//设置菜单，load调用set
void GraphTest::setMenu(T_Menu* menu,int w,int h,wstring path,wstring item[])
{
	Color normalClr(193, 92, 0);
	Color focusClr(213, 104, 0);
	menu->SetBtnBmp(path, w, h);
	MENU_INFO menuInfo;
	menuInfo.align = 1;							//对齐方式
	menuInfo.space = MENU_SPACE;                //菜单项之间的间隔距离
	menuInfo.width = w;                 //菜单项宽
	menuInfo.height = h;               //菜单项高
	menuInfo.fontName = L"华康少女文字W5";
	menuInfo.isBold = true;
	menuInfo.normalTextColor = normalClr;
	menuInfo.focusTextColor = focusClr;
	menu->SetMenuInfo(menuInfo);
	
	menu->SetClickSound(&button_click_buffer);
	menu->SetMoveSound(&button_move_buffer);
}
void GraphTest::setMenuT(MyMenu * menu, int w, int h, wstring path, wstring path1, wstring item[])
{
	Color normalClr(193, 92, 0);
	Color focusClr(213, 104, 0);
	menu->SetBtnBmpT(path, path1, w, h);
	MENU_INFO menuInfo;
	menuInfo.align = 1;							//对齐方式
	menuInfo.space = MENU_SPACE;                //菜单项之间的间隔距离
	menuInfo.width = w;                 //菜单项宽
	menuInfo.height = h;               //菜单项高
	menuInfo.fontName = L"华康少女文字W5";
	menuInfo.isBold = true;
	menuInfo.normalTextColor = normalClr;
	menuInfo.focusTextColor = focusClr;
	menu->SetMenuInfo(menuInfo);

	menu->SetClickSound(&button_click_buffer);
	menu->SetMoveSound(&button_move_buffer);
}
//加载每一波的怪物
void GraphTest::LoadWaveNPC()
{
	GAMELAYER gameLayer;
	levelNPCNum = waveNum[guan - 1] * monster;
	for (int i = 0; i < levelNPCNum; i++)
	{
		if (frameCount >= NPCFrame[i].frame - 10 && frameCount < NPCFrame[i].frame)
		{
			lightflag = true;
		}
		if (frameCount == NPCFrame[i].frame)
		{
			lightflag = false;
			//new 怪物对象,然后加入npcset
			int number = NPCFrame[i].minfo - 1;
			MonsterSprite* tempSprite = new MonsterSprite(mInfo[number].imgName, 140, 121);
			MONSTER spInfo;
			spInfo.X = stationX[guan - 1];
			spInfo.Y = stationY[guan - 1];
			//设定初始方向
			if (guan == 1) monsterBegin = 0;
			else if (guan == 2) monsterBegin = 5;
			else if (guan == 3) monsterBegin = 19;
			else if (guan == 4) monsterBegin = 32;
			spInfo.dir = monsterDir[monsterBegin];		//初始化方向
			if (spInfo.dir == DIR_LEFT) spInfo.Rotation = TRANS_HFLIP_NOROT;
			else spInfo.Rotation = mInfo[number].Rotation;

			spInfo.imgName = mInfo[number].imgName;
			spInfo.speed = mInfo[number].speed;
			spInfo.speedl = mInfo[number].speedl;
			spInfo.life = mInfo[number].life;
			//spInfo.level = 0;
			spInfo.score = mInfo[number].score;
			spInfo.Visible = true;
			//spInfo.Active = true;
			//spInfo.Dead = false;
			spInfo.instance = mInfo[number].instance;
			spInfo.ratio = mInfo[number].ratio;
			tempSprite->Initiate(spInfo);
			tempSprite->SetLayerTypeID(LAYER_NPC);
			tempSprite->SetSequence(Monster_M, 6);
			npc_set.push_back(tempSprite);

			gameLayer.layer = tempSprite;
			gameLayer.type_id = LAYER_NPC;
			gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
			gameLayer.layer->setZorder(gameLayer.z_order);
			t_scence->Append(gameLayer);
		}
	}
}
//加载地图
void GraphTest::LoadMap(char* path)
{
	t_scence->LoadTxtMap(path);
	scn_width = t_scence->getSceneLayers()->back().layer->GetWidth();
	scn_height = t_scence->getSceneLayers()->back().layer->GetHeight();
	// 视图初始位置以地图作为参照
	int scn_x = (wnd_width - scn_width) / 2;
	int scn_y = (wnd_height - scn_height) / 2;
	// 将游戏地图初始化为屏幕中央位置
	t_scence->InitScene(scn_x, scn_y, scn_width, scn_height, wnd_width, wnd_height);
	// 将所有地图图层定位在屏幕中央
	SCENE_LAYERS::iterator p;
	for (p = t_scence->getSceneLayers()->begin(); p != t_scence->getSceneLayers()->end(); p++)
	{
		if (p->layer->ClassName() == "T_Map") p->layer->SetPosition(scn_x, scn_y);
	}
}

void GraphTest::UpdateTowerLevel(T_Sprite* t)
{
	if (t->score == 1)
	{
		if (t->level == 1) t->SetSequence(FAN1, 8);
		if (t->level == 2) t->SetSequence(FAN2, 8);
		if (t->level == 3) t->SetSequence(FAN3, 8);
	}
	else if (t->score == 2)
	{
		if (t->level == 1) t->SetSequence(BS1, 6);
		if (t->level == 2) t->SetSequence(BS2, 6);
		if (t->level == 3) t->SetSequence(BS3, 6);
	}
	else if (t->score == 3)
	{
		if (t->level == 1) t->SetSequence(B1, 6);
		if (t->level == 2) t->SetSequence(B2, 6);
		if (t->level == 3) t->SetSequence(B3, 6);
	}
	else if (t->score == 4)
	{
		if (t->level == 1) t->SetSequence(S1, 6);
		if (t->level == 2) t->SetSequence(S2, 6);
		if (t->level == 3) t->SetSequence(S3, 6);
	}
	else if (t->score == 5)
	{
		if (t->level == 1) t->SetSequence(SN1, 6);
		if (t->level == 2) t->SetSequence(SN2, 6);
		if (t->level == 3) t->SetSequence(SN3, 6);
	}
	else if (t->score == 6)
	{
		if (t->level == 1) t->SetSequence(SUN1, 6);
		if (t->level == 2) t->SetSequence(SUN2, 6);
		if (t->level == 3) t->SetSequence(SUN3, 6);
	}

}
void GraphTest::UpdateBombLevel(T_Sprite* t)
{
	if (t->score == 1)
	{
		if (t->level == 1) t->SetSequence(FANB1, 10);
		if (t->level == 2) t->SetSequence(FANB2, 10);
		if (t->level == 3) t->SetSequence(FANB3, 10);
	}
	else if (t->score == 2)
	{
		if (t->level == 1) t->SetSequence(BSB1, 14);
		if (t->level == 2) t->SetSequence(BSB2, 14);
		if (t->level == 3) t->SetSequence(BSB3, 14);
	}
	else if (t->score == 3)
	{
		if (t->level == 1) t->SetSequence(BB1, 8);
		if (t->level == 2) t->SetSequence(BB2, 8);
		if (t->level == 3) t->SetSequence(BB3, 8);
	}
	else if (t->score == 4)
	{
		if (t->level == 1) t->SetSequence(SB1, 6);
		if (t->level == 2) t->SetSequence(SB2, 6);
		if (t->level == 3) t->SetSequence(SB3, 6);
	}
	else if (t->score == 5)
	{
		if (t->level == 1) t->SetSequence(SNB1, 6);
		if (t->level == 2) t->SetSequence(SNB2, 6);
		if (t->level == 3) t->SetSequence(SNB3, 6);
	}
	else if (t->score == 6)
	{
		if (t->level == 1) t->SetSequence(SUNB1, 6);
		if (t->level == 2) t->SetSequence(SUNB2, 6);
		if (t->level == 3) t->SetSequence(SUNB3, 6);
	}

}

//加载炮塔
void GraphTest::LoadPlayer(int x, int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO spInfo;
	//加载玩家角色
	T_Sprite* tplayer;
	if(towerkind==1)  tplayer = new T_Sprite(L".\\res\\tower\\fan.png", 226, 226);
	else if (towerkind == 2)  tplayer = new T_Sprite(L".\\res\\tower\\bluestaratt.png", 226, 226);
	else if (towerkind == 3)  tplayer = new T_Sprite(L".\\res\\tower\\bottle.png", 226, 226);
	else if (towerkind == 4)  tplayer = new T_Sprite(L".\\res\\tower\\shit.png", 226, 226);
	else if (towerkind == 5) tplayer = new T_Sprite(L".\\res\\tower\\snow.png", 226, 226);
	else if (towerkind == 6)  tplayer = new T_Sprite(L".\\res\\tower\\sun.png", 226, 226);
	spInfo.Active = true;
	spInfo.Dead = false;
	spInfo.Dir = DIR_UP;
	spInfo.Rotation = TRANS_NONE;
	spInfo.Ratio = 0.9f;
	spInfo.Level = 1;
	if (towerkind == 1) spInfo.Score = 1;
	else if (towerkind == 2) spInfo.Score = 2;
	else if (towerkind == 3) spInfo.Score = 3;
	else if (towerkind == 4) spInfo.Score = 4;
	else if (towerkind == 5) spInfo.Score = 5;
	else if (towerkind == 6) spInfo.Score = 6;
	spInfo.Speed = 0;
	spInfo.Alpha = 220;
	spInfo.X = x;
	spInfo.Y = y;
	spInfo.Visible = false;
	tplayer->Initiate(spInfo);
	
	if (towerkind == 1) tplayer->SetSequence(FAN1, 8);
	else if (towerkind == 2) tplayer->SetSequence(BS1, 6);
	else if (towerkind == 3) tplayer->SetSequence(B1, 6);
	else if (towerkind == 4) tplayer->SetSequence(S1, 6);
	else if (towerkind == 5) tplayer->SetSequence(SN1, 6);
	else if (towerkind == 6)tplayer->SetSequence(SUN1, 6);

	tplayer->SetLayerTypeID(LAYER_NPC);
	player.push_back(tplayer);
	gameLayer.layer = tplayer;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
}
//加载萝卜
void GraphTest::LoadLuo(int x,int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO pro_Info;
	pro_Info.X = x;
	pro_Info.Y = y;
	pro_Info.Dead = false;
	pro_Info.Rotation = TRANS_NONE;
	pro_Info.Ratio = 0.6f;
	pro_Info.Alpha = 255;
	pro_Info.Visible = true;
	pro_Info.Score = 10;
	pro_Info.Dir = DIR_LEFT;
	pro_Info.Speed = 0;
	pro_Info.Active = true;
	pro_Info.Level = 1;
	int sp_width = 118;
	int sp_height = 112;
	playLuo = new T_Sprite(L"res\\luobo.png", sp_width, sp_height);
	playLuo->Initiate(pro_Info);
	playLuo->SetLayerTypeID(LAYER_NPC);
	playLuo->SetSequence(luo_lF, 100);

	gameLayer.layer = playLuo;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
}
//加载道具
void GraphTest::LoadProp(int t,int x,int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO pro_Info;
	PROPERTY p_info;
	pro_Info.X = x;
	pro_Info.Y = y;
	pro_Info.Dead = false;
	pro_Info.Rotation = TRANS_NONE;
	pro_Info.Ratio = pInfo[t].ratio;
	pro_Info.Alpha = 255;
	pro_Info.Visible = true;
	pro_Info.Score = pInfo[t].score;
	p_info.life = pInfo[t].life;
	int sp_width = 110;
	int sp_height = 110;
	proper_set.push_back(new S_property(pInfo[t].imgName, sp_width, sp_width));
	S_property *sp = proper_set.back();
	sp->Initiate(pro_Info, p_info);
	sp->SetLayerTypeID(LAYER_NPC);
	gameLayer.layer = sp;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
	sp = NULL;
}
//加载音乐
void GraphTest::LoadMusic()
{
	if (!ds.CreateDS(m_hWnd)) return;
	if (flagbg) {

		runbg_buffer.LoadWave(ds, L"res\\Audio\\RunBGMusic.wav");
		bg_buffer.LoadWave(ds, L"res\\Audio\\BGMusic.wav");
	}
	else
	{
		runbg_buffer.LoadWave(ds, L"");
		bg_buffer.LoadWave(ds, L"");
	}
	if (flagbut)
	{
		button_click_buffer.LoadWave(ds, L"res\\Audio\\button_click.wav");
		button_move_buffer.LoadWave(ds, L"res\\Audio\\button_select.wav");
	}
	else
	{
		button_click_buffer.LoadWave(ds, L"");
		button_move_buffer.LoadWave(ds, L"");
	}
	
}
//加载爆炸效果
void GraphTest::LoadExplosion(int x,int y)
{
	SPRITEINFO spInfo;
	GAMELAYER gameLayer;
	explosion_set.push_back(new T_Sprite(L"res\\boom\\pb.png",262,242));
	T_Sprite* sp = explosion_set.back();
	spInfo.Active = true;
	spInfo.Alpha = 255;
	spInfo.Dead = false;
	spInfo.Level = 0;
	spInfo.Ratio = 0.5f;
	spInfo.Rotation = TRANS_NONE;
	spInfo.Score = 0;
	spInfo.Speed = 0;
	spInfo.Visible = true;
	spInfo.X = x;
	spInfo.Y = y;
	sp->Initiate(spInfo);
	sp->SetSequence(Explosion_F, 4);
	sp->SetLayerTypeID(LAYER_EXPLOSION);
	
	gameLayer.layer = sp;
	gameLayer.type_id = LAYER_EXPLOSION;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
	sp = NULL;
}

void GraphTest::LoadBomb(int x, int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO spInfo;
	T_Sprite* tbomb;
	if (towerkind == 1)  tbomb = new T_Sprite(L".\\res\\tower\\fan.png", 226, 226);
	else if (towerkind == 2) tbomb = new T_Sprite(L".\\res\\tower\\bluestaratt.png", 226, 226);
	else if (towerkind == 3) tbomb = new T_Sprite(L".\\res\\tower\\bottle.png", 226, 226);
	else if (towerkind == 4) tbomb = new T_Sprite(L".\\res\\tower\\shit.png", 226, 226);
	else if (towerkind == 5) tbomb = new T_Sprite(L".\\res\\tower\\snow.png", 226, 226);
	else if (towerkind == 6) tbomb = new T_Sprite(L".\\res\\tower\\sun.png", 226, 226);

	spInfo.Active = true;
	spInfo.Dead = false;
	spInfo.Dir = DIR_DOWN;
	spInfo.Rotation = TRANS_NONE;
	spInfo.Ratio = 1.0f;
	spInfo.Level = 1;

	if (towerkind == 1) spInfo.Score = 1;
	else if (towerkind == 2) spInfo.Score = 2;
	else if (towerkind == 3) spInfo.Score = 3;
	else if (towerkind == 4) spInfo.Score = 4;
	else if (towerkind == 5) spInfo.Score = 5;
	else if (towerkind == 6) spInfo.Score = 6;

	
	spInfo.Speed = 5;
	spInfo.Alpha = 220;
	spInfo.Visible = false;
	spInfo.X = x;
	spInfo.Y = y;
	tbomb->Initiate(spInfo);
	switch (spInfo.Dir)
	{
	case DIR_DOWN:
		 
		if (towerkind == 1) tbomb->SetSequence(FANB1, 10);
		else if (towerkind == 2) tbomb->SetSequence(BSB1, 14);
		else if (towerkind == 3) tbomb->SetSequence(BB1, 8);
		else if (towerkind == 4) tbomb->SetSequence(SB1, 6);
		else if (towerkind == 5) tbomb->SetSequence(SNB1, 6);
		else if (towerkind == 6) tbomb->SetSequence(SUNB1, 6);
		break;
	}
	tbomb->SetLayerTypeID(LAYER_NPC);
	bomb.push_back(tbomb);
	gameLayer.layer = tbomb;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
}
//加载图片
void GraphTest::LoadImg()
{
	blood0 = new T_Graph(L"res\\property\\blood1.png");
	blood1 = new T_Graph(L"res\\property\\blood.png");
	time1 = new T_Graph(L"res\\tool\\1.png");
	time2 = new T_Graph(L"res\\tool\\2.png");
	time3 = new T_Graph(L"res\\tool\\3.png");
	time4 = new T_Graph(L"res\\tool\\go.png");
	start = new T_Graph(L"res\\menu\\start.png");
	pause = new T_Graph(L"res\\menu\\zan.png");
	light.LoadImageFile(L"res\\monster\\light.png");
	luolife = new T_Graph(L"res\\tool\\life.png");
	money[0] = new T_Graph(L"res\\price\\14.png");
	money[1] = new T_Graph(L"res\\price\\50.png");
	money[2] = new T_Graph(L"res\\price\\75.png");
	money[3] = new T_Graph(L"res\\price\\85.png");
	money[4] = new T_Graph(L"res\\price\\150.png");
	money[5] = new T_Graph(L"res\\price\\168.png");
	money[6] = new T_Graph(L"res\\price\\268.png");
	money[7] = new T_Graph(L"res\\price\\999.png");
	money[8] = new T_Graph(L"res\\price\\1000.png");
	money[9] = new T_Graph(L"res\\price\\1500.png");
	money[10] = new T_Graph(L"res\\price\\2500.png");
	jin = new T_Graph(L"res\\menu\\jin.png");
	yin = new T_Graph(L"res\\menu\\yin.png");
	tong = new T_Graph(L"res\\menu\\tong.png");
	wang = new T_Graph(L"res\\photo\\wyq.jpg");
	zhang = new T_Graph(L"res\\photo\\zh.jpg");
	bai = new T_Graph(L"res\\photo\\bai.jpg");
	fo = new T_Graph(L"res\\tool\\focus.png");
	forbid = new T_Graph(L"res\\tool\\forbide.png");
}

void GraphTest::drawBlood(HDC hdc, int i)
{
	int x = px[i] + 8;
	int y = py[i] + 1;
	int total = proper_set.at(i)->getBlood();
	int hurt = proper_set.at(i)->getBloodh();
	if (hurt >= total)
	{
		proper_set.at(i)->SetDead(true);
	}
	else
	{
		blood1->PaintImage(hdc, x, y, blood1->GetImageWidth(), blood1->GetImageHeight(), 255);
		x = x + 2 + blood0->GetImageWidth()* (total - hurt) / total;
		y = y + 2;
		int sx = blood0->GetImageWidth()* (total - hurt) / total;
		int rw = blood0->GetImageWidth() * hurt / total + 1;
		blood0->PaintRegion(blood0->GetBmpHandle(), hdc, x, y, sx, 0, rw, blood0->GetImageHeight(), 1);
	}
}
//draw这个npc的时候  画进度条
void GraphTest::drawMBlood(HDC hdc,int rx,int ry,MonsterSprite* npc)
{
	int x = rx + 15;
	int y = ry -10;
	int total = npc->getLife();
	int hurt = npc->getBloodh();
	if (hurt >= total)
	{
		npc->SetDead(true);
	}
	int h = total - hurt;
	blood1->PaintImage(hdc, x, y, blood1->GetImageWidth(), blood1->GetImageHeight(), 255);
	x = x + 2 + 48* h/ total;
	y = y + 2;
	int sx = 48 * h / total;
	int rw = 48 * hurt / total + 1;
	blood0->PaintRegion(blood0->GetBmpHandle(), hdc, x, y, sx, 0, rw, blood0->GetImageHeight(), 1);
}
//更新帧频
void GraphTest::updateAnimation()
{
	vSpriteSet::iterator p;
	for (p = explosion_set.begin(); p != explosion_set.end(); )
	{
		if ((*p)->LoopFrameOnce() == true)
		{
			// 删除场景中已经失效的爆炸对象	
			SCENE_LAYERS::iterator lp;
			for (lp = t_scence->getSceneLayers()->begin(); lp != t_scence->getSceneLayers()->end(); lp++)
			{
				if ((*lp).layer == (*p))
				{
					lp = t_scence->getSceneLayers()->erase(lp);
					break;
				}
			}
			p = explosion_set.erase(p);
			continue;
		}
		else
			p++;
	}
	vMonsterSet::iterator p1;
	for (p1 = npc_set.begin(); p1 != npc_set.end(); p1++)
	{
		(*p1)->LoopFrame();

	}
	vSpriteSet::iterator p2;
	for (p2 = light_set.begin(); p2 != light_set.end(); p2++)
	{
		(*p2)->LoopFrameOnce();

	}
	playLuo->LoopFrame();
}
//更新NPC位置
void GraphTest::updateNPCPos()
{
	for (int i = 0; i < npc_set.size(); i++)
	{
		int dir = npc_set.at(i)->GetDir();
		int xspeed = 0;
		int yspeed = 0;
		if (npc_set.at(i)->CollideWithMap(t_scence->getBarrier(), npc_set.at(i)->getBarStance()))
		{

			npc_set.at(i)->setMonsterToBar();
			int t = npc_set.at(i)->getMonsterToBar();
			dir = monsterDir[monsterBegin + t];
			npc_set.at(i)->SetDir(dir);
		}
		if (dir == DIR_LEFT) npc_set.at(i)->SetRotation(TRANS_HFLIP_NOROT);
		else npc_set.at(i)->SetRotation(TRANS_NONE);
		if (dir == DIR_LEFT)
		{
			xspeed = -npc_set.at(i)->GetSpeed() * speedf;
		}
		else if (dir == DIR_RIGHT)
		{
			xspeed = npc_set.at(i)->GetSpeed()* speedf;
		}
		else if (dir == DIR_UP)
		{
			yspeed = -npc_set.at(i)->GetSpeed()* speedf;
		}
		else if (dir == DIR_DOWN)
		{
			yspeed = npc_set.at(i)->GetSpeed()* speedf;
		}
		npc_set.at(i)->Move(xspeed, yspeed);
	}
	
}

void GraphTest::updateBombPos(T_Sprite* ts,int dir,int x,int y)
{
	//if (bomb == NULL) return;
	if (ts->GetScore() == 5 || ts->GetScore() == 6) return;
	int nextStepX, nextStepY;
	int SpeedX = 0, SpeedY = 0;
	
			if (ts->IsDead() == false && ts->IsVisible() == true )
			{
				/*switch (dir)
				{
				case DIR_LEFT:
					SpeedX = -ts->GetSpeed();
					SpeedY = 0;

					nextStepX = ts->GetX() - ts->GetSpeed();

					break;
				case DIR_RIGHT:
					SpeedX = ts->GetSpeed();
					SpeedY = 0;

					nextStepX = ts->GetX() + ts->GetRatioSize().cx + ts->GetSpeed();

					break;
				case DIR_UP:
					SpeedX = 0;
					SpeedY = -ts->GetSpeed();

					nextStepY = ts->GetY() - ts->GetSpeed();

					break;
				case DIR_DOWN:
					SpeedX = 0;
					SpeedY = ts->GetSpeed();

					nextStepY = ts->GetY() + ts->GetRatioSize().cy + ts->GetSpeed();

					break;
				}*/
				nextStepX = (x - ts->GetX()) + ts->GetSpeed();
				nextStepY=(y-ts->GetY()) + ts->GetSpeed();
				/*int x = ts->GetX();
				int y = ts->GetY();*/
				

				if(x>ts->GetX()&&y>ts->GetY())
					ts->Move(ts->GetSpeed(), ts->GetSpeed());
				if (x>ts->GetX() && y<ts->GetY())
					ts->Move(ts->GetSpeed(), -ts->GetSpeed());
				if (x<ts->GetX() && y>ts->GetY())
					ts->Move(-ts->GetSpeed(), ts->GetSpeed());
				if (x<ts->GetX() && y<ts->GetY())
					ts->Move(-ts->GetSpeed(), -ts->GetSpeed());

				if (ts->GetX() <= -ts->GetWidth() || ts->GetX() >= wnd_width + ts->GetWidth() || ts->GetY() <= -ts->GetHeight() || ts->GetY() >= wnd_height + ts->GetHeight())
				{
					vSpriteSet::iterator p;
					vSpriteSet::iterator p1;
					
					for (p = player.begin(), p1 = bomb.begin(); p != player.end(), p1 != bomb.end(); p++, p1++)
						{
							if (ts==(*p1))
							{

								ts->SetPosition((*p)->GetX(), (*p)->GetY());
								break;
							}
						}
				}
			}
}

void GraphTest::updateLuo()
{
	if (life < 10 && life > 0 && playLuo->IsActive() == false)
	{
		playLuo->SetSequence(&luo_eF[10 - life - 1], 1);
		playLuo->SetActive(true);
	}
	if (life == 0 && playLuo->IsVisible() == true)
	{
		playLuo->SetVisible(false);
		GameState = GAME_OVER;
	}
}
void GraphTest::updatePlayerLevel()
{
}
//更新怪物信息
void GraphTest::updateNPCInfo()
{
	int waveLength = MaxFrameCount / waveNum[guan - 1];	//波数之间的间隔
	int monsterLength = 45;							//怪物之间的间隔				
	for (int i = 0; i < waveNum[guan - 1]; i++)//波数
	{
		int m = rand() % 7 + 2;
		//int m = 8;
		for (int j = 0; j < monster; j++)//
		{
			
				NPCFrame[5 * i + j].frame = i*waveLength + j*(monsterLength / mInfo[m].speed)+3;
				if(m==3)
					NPCFrame[5 * i + j].frame = i*waveLength + j*(monsterLength / 2);
				if (m == 8)
					NPCFrame[5 * i + j].frame = i*waveLength + j*(monsterLength / 3)+3;
				//NPCFrame[5 * i + j].frame = i*waveLength + j*(monsterLength - 7);
			if (i == waveNum[guan - 1] - 1 && j == monster - 1)//BOSS
			{
				NPCFrame[5 * i + j].minfo = 1;
				break;
			}
			NPCFrame[5 * i + j].minfo = m;
			if (NPCFrame[5 * i + j].minfo <= 0)
			{
				NPCFrame[5 * i + j].minfo = rand() % 7 + 1;
			}
		}
		NPCFrame[0].frame = 1;
	}
}
//更新怪物生命
void GraphTest::updateNPCLife(HDC hdc)
{
	vMonsterSet::iterator p;
	for (p = npc_set.begin(); p != npc_set.end(); p++)
	{
		if (*p != NULL)
		{
			if ((*p)->CollideWith(playLuo, -30))
			{
				//p = npc_set.erase(p);
				//(*p)->SetDead(true);
				(*p)->SetVisible(false);//与萝卜碰撞，dead为true，visible为false，与炮弹碰撞而死，dead为true，visible为true
				//萝卜的逻辑
				life--;
				playLuo->SetScore(life);
				playLuo->SetActive(false);
				if (focusedm == 1)
					focused = 0;
				focusedm = 0;
			}
			if ((*p)->IsDead() == true && (*p)->IsVisible() == true)
			{
				(*p)->SetVisible(false);
				LoadExplosion((*p)->GetX(), (*p)->GetY());
				price = price + (*p)->GetScore();
				focused = 0;
			}
			if ((*p)->IsVisible() == false && (*p)->IsDead() == true && (*p)->getFrames() < 10)
			{
				drawPrice(hdc, (*p)->GetScore(), (*p)->GetX(), (*p)->GetY() - (*p)->getFrames() * 5);
				(*p)->setFrames();
			}
			/*if ((*p)->IsDead() == true && (*p)->getFrames() < 10)
			{
				if ((*p)->getFrames() == 0)
				{
					LoadExplosion((*p)->GetX(), (*p)->GetY());
					price = price + (*p)->GetScore();
				}
				if ((*p)->IsVisible())
				{
					drawPrice(hdc, (*p)->GetScore(), (*p)->GetX(), (*p)->GetY() - (*p)->getFrames() * 5);
					
				}
				(*p)->setFrames();
				focused = 0;
			}*/
		}
	}
}
//更新道具生命
void GraphTest::updateProLife(HDC hdc)
{
	sPropertySet::iterator p;
	int i = 0;
	for (p = proper_set.begin(); p != proper_set.end(); p++)
	{
		if (*p != NULL)
		{
			//(*p)->setBloodh(20);
			//(*p)->sethurt(true);
			if ((*p)->IsDead() == true && (*p)->IsVisible() == true)
			{
				(*p)->SetVisible(false);
				LoadExplosion((*p)->GetX(), (*p)->GetY());
				price = price + (*p)->GetScore();
				if(focusedm == 0 && focused != 0)
					focused = 0;
			}
			if ((*p)->IsDead() == true && (*p)->getFrames() < 10)
			{
				drawPrice(hdc, (*p)->GetScore(), (*p)->GetX(), (*p)->GetY() - (*p)->getFrames() * 5);
				(*p)->setFrames();
			}
			if ((*p)->gethurt() == true)
			{
				drawBlood(hdc, i);
				//(*p)->sethurt(false);
			}
		}
		i++;
	}
}
void GraphTest::drawPrice(HDC hdc, int m, int x, int y)
{
	switch (m)
	{
	case 14:
		money[0]->PaintImage(hdc, x, y, money[0]->GetImageWidth(), money[0]->GetImageHeight(), 255);
		break;
	case 50:
		money[1]->PaintImage(hdc, x, y);
		break;
	case 75:
		money[2]->PaintImage(hdc, x, y, money[2]->GetImageWidth(), money[2]->GetImageHeight(), 255);
		break;
	case 85:
		money[3]->PaintImage(hdc, x, y);
		break;
	case 150:
		money[4]->PaintImage(hdc, x, y, money[4]->GetImageWidth(), money[4]->GetImageHeight(), 255);
		break;
	case 168:
		money[5]->PaintImage(hdc, x, y, money[5]->GetImageWidth(), money[5]->GetImageHeight(), 255);
		break;
	case 268:
		money[6]->PaintImage(hdc, x, y, money[6]->GetImageWidth(), money[6]->GetImageHeight(), 255);
		break;
	case 999:
		money[7]->PaintImage(hdc, x, y);
		break;
	case 1000:
		money[8]->PaintImage(hdc, x, y, money[8]->GetImageWidth(), money[8]->GetImageHeight(), 255);
		break;
	case 1500:
		money[9]->PaintImage(hdc, x, y, money[9]->GetImageWidth(), money[9]->GetImageHeight(), 255);
		break;
	case 2500:
		money[10]->PaintImage(hdc, x, y, money[10]->GetImageWidth(), money[10]->GetImageHeight(), 255);
		break;
	}
}
//加载关卡
void GraphTest::LoadGuan(int g)
{
	ClearGuan();
	t_scence = new T_Scene();
	monsterDead = 0;
	price = 500;
	frameCount = 0;
	frameTime = 0;
	skillf = 0;
	speedf = 1;
	updateNPCInfo();
	life = 10;
	switch (g)
	{
	case 1:
	{
		pnum = 15;
		int x[][2] = {
			{ 14 * 17,14 * 6 },{ 14 * 27,14 * 6 },{ 14 * 46,14 * 6 },
			{ 14 * 13,14 * 15 },{ 14 * 27,14 * 15 },{ 14 * 32,14 * 15 },{ 14 * 42,14 * 15 },{ 14 * 62,14 * 15 },
			{ 14 * 37,14 * 20 },
			{ 14 * 17,14 * 25 },{ 14 * 28,14 * 25 },{ 14 * 42,14 * 25 },{ 14 * 57,14 * 25 },
			{ 14 * 27,14 * 35 },{ 14 * 42,14 * 35 }
		};
		int p[] = { 2,2,4,8,2,2,2,8,2,8,5,3,8,3,2 };
		for (int i = 0; i < pnum; i++)
		{
			px[i] = x[i][0];
			py[i] = x[i][1];
			LoadProp(p[i], px[i], py[i]);
		}
		LoadMap("res\\map\\guan1.txt");
		break;
	}
	case 2:
	{
		pnum = 27;
		int x[][2] = {
			{ 14 * 32,17 * 5 },{ 14 * 42,14 * 7 },
			{ 14 * 9,14 * 10 },{ 14 * 32,14 * 11 },{ 14 * 38,14 * 11 },{ 14 * 52,14 * 11 },{ 14 * 62,14 * 11 },
			{ 14 * 22,14 * 15 },{ 14 * 38,14 * 15 },{ 14 * 47,14 * 15 },{ 14 * 57,14 * 16 },
			{ 14 * 9,14 * 20 },{ 14 * 27,14 * 20 },{ 14 * 43,14 * 20 },{ 14 * 52,14 * 20 },{ 14 * 67,14 * 20 },
			{ 14 * 9,14 * 25 },{ 14 * 22,14 * 25 },{ 14 * 32,14 * 25 },{ 14 * 47,14 * 25 },{ 14 * 57,14 * 25 },
			{ 14 * 22,14 * 30 },{ 14 * 37,14 * 30 },{ 14 * 52,14 * 30 },{ 14 * 62,14 * 30 },
			{ 14 * 27,14 * 35 },{ 14 * 42,14 * 35 },
		};
		int p[] = { 2,4,9,5,2,2,2,8,5,1,4,7,8,2,2,2,9,5,5,2,2,1,8,5,3,3,8 };
		for (int i = 0; i < pnum; i++)
		{
			px[i] = x[i][0];
			py[i] = x[i][1];
			LoadProp(p[i], px[i], py[i]);
		}
		LoadMap("res\\map\\guan2.txt");
		break;
	}
	case 3:
	{
		pnum = 21;
		int x[][2] = {
			{ 14 * 18,14 * 5 },{ 14 * 27,14 * 6 },{ 14 * 37,14 * 6 },{ 14 * 42,14 * 5 },{ 14 * 57,14 * 6 },
			{ 14 * 8,14 * 11 },{ 14 * 62,14 * 11 },
			{ 14 * 22,14 * 15 },{ 14 * 32,14 * 15 },{ 14 * 53,14 * 15 },
			{ 14 * 8,14 * 21 },{ 14 * 52,14 * 21 },
			{ 14 * 13,14 * 25 },{ 14 * 38,14 * 25 },{ 14 * 62,14 * 25 },
			{ 14 * 52,14 * 31 },
			{ 14 * 17,14 * 35 },{ 14 * 27,14 * 35 },{ 14 * 32,14 * 35 },{ 14 * 47,14 * 35 },{ 14 * 57,14 * 35 }
		};
		int p[] = { 1,2,2,1,2,2,9,5,1,2,2,5,1,5,8,2,8,8,8,8,8 };
		for (int i = 0; i < pnum; i++)
		{
			px[i] = x[i][0];
			py[i] = x[i][1];
			LoadProp(p[i], px[i], py[i]);
		}
		LoadMap("res\\map\\guan3.txt");
		break;
	}
	case 4:
	{
		pnum = 15;
		int x[][2] = {
			{ 17 * 6,17 * 6 },{ 17 * 22,17 * 6 },{ 17 * 38,17 * 6 },
			{ 14 * 7,14 * 16 },{ 14 * 37,14 * 15 },
			{ 14 * 18,14 * 21 },{ 14 * 53,14 * 21 },{ 14 * 62,14 * 21 },
			{ 14 * 7,14 * 26 },{ 14 * 27,14 * 26 },{ 14 * 37,14 * 26 },
			{ 14 * 27,14 * 31 },{ 14 * 32,14 * 31 },{ 14 * 62,14 * 30 },
			{ 14 * 43,14 * 36 }
		};
		int p[] = { 9,9,9,2,7,4,5,8,2,2,4,5,2,8,2 };
		for (int i = 0; i < pnum; i++)
		{
			px[i] = x[i][0];
			py[i] = x[i][1];
			LoadProp(p[i], px[i], py[i]);
		}
		LoadMap("res\\map\\guan4.txt");
		break;
	}
	}
	
	LoadLuo(endX[g - 1], endY[g - 1]);
}
//倒计时
void GraphTest::countDown(HDC hdc)
{
	if (frameTime <= 80)
	{
		T_Graph::PaintBlank(hdc, 0, 0, wnd_width, wnd_height, Color::Black, 100);
	}
	if (frameTime <= 20)
	{
		time3->PaintImage(hdc, 500, 250, time3->GetImageWidth(), time3->GetImageHeight(), 255);
	}
	if (frameTime>20 && frameTime <= 40)
	{
		time2->PaintImage(hdc, 500, 250, time2->GetImageWidth(), time2->GetImageHeight(), 255);
	}
	if (frameTime>40 && frameTime <= 60)
	{
		time1->PaintImage(hdc, 500, 250, time1->GetImageWidth(), time1->GetImageHeight(), 255);
	}
	if (frameTime > 60 && frameTime <= 80)
	{
		time4->PaintImage(hdc, 480, 230, time4->GetImageWidth(), time4->GetImageHeight(), 255);
	}
}
void GraphTest::skillIce()
{
	speedf = 0;
}
void GraphTest::skillSlow()
{
	speedf = 0.95;
}
void GraphTest::skillDel()
{
	for (int i = 0; i < npc_set.size(); i++)
	{
		npc_set.at(i)->SetDead(true);
	}
}
void GraphTest::skillLife()
{
	if (life < 10)
		life++;
	playLuo->SetActive(false);
	if (life == 10)
		playLuo->SetSequence(luo_lF, 100);
}
void GraphTest::ClearGuan()
{
	delete t_scence;
	t_scence = NULL;
	proper_set.clear();
	proper_set.swap(vector<S_property*>());
	npc_set.clear();
	npc_set.swap(vector<MonsterSprite*>());
	//player.clear();
	//player.swap(vector<T_Sprite*>());
	//bomb_set.clear();
	//bomb_set.swap(vector<T_Sprite*>());
}

void GraphTest::controlFrame()
{
	if (frameTime < 81)
	{
		frameTime++;
	}
	if (frameTime == 81)           //倒数结束后开始计时
	{
		if (frameCount < MaxFrameCount - 1)
		{
			frameCount++;
		}
	}
	if (framef == 3)
	{
		framef = 0;
	}
	if (skillf != 0)
	{
		frames++;
	}
	if (frames > 40)
	{
		speedf = 1;
		frames = 0;
		skillf = 0;
	}
}
void GraphTest::winState()
{
	vMonsterSet::iterator p;
	for (p = npc_set.begin(); p != npc_set.end(); p++)
	{
		if (*p != NULL && npc_set.size() == waveNum[guan - 1] * 5)
		{
			if ((*p)->IsDead() == true)
				monsterDead++;
			if((*p)->IsDead() == false &&(*p)->IsVisible() == false)
				monsterDead++;
		}
	}
	if (waveNum[guan - 1] * 5 <= monsterDead && life >= 1)   //获胜
	{
		if (life >= 1 && life < 5)  //铜萝卜
			luoType = -1;
		if (life >= 5 && life <= 9)  //银萝卜
			luoType = 0;
		if (life == 10)  //金萝卜
			luoType = 1;
		GameState = GAME_WIN;
	}
	monsterDead = 0;
}
