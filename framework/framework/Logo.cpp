#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

#include "ObjectManager.h"
#include "Player.h"
#include "Enemy.h"
#include "ObjectFactory.h"
#include "CursorManager.h"

Logo::Logo() { }
Logo::~Logo() { }


void Logo::Initialize()
{

}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();
	
	if (dwKey & KEY_ENTER)
		SceneManager::GetInstance()->SetScene(SCENEID::MENU);
	

}

void Logo::Render()
{
	//테두리
	{
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 0.0f, (char*)"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 1.0f, (char*)"■■■                                                              ■■■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 2.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 3.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 4.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 5.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 6.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 7.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 8.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 9.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 10.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 11.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 12.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 13.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 14.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 15.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 16.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 17.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 18.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 19.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 20.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 21.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 22.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 23.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 24.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 25.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 26.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 27.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 28.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 29.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 30.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 31.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 32.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 33.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 34.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 35.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 36.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 37.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 38.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 39.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 40.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 41.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 42.0f, (char*)"■                                                                      ■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 43.0f, (char*)"■■■                                                              ■■■");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 44.0f, (char*)"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	}

	//막대기
	{
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 3.0f, (char*)"□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□  ");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 23.0f, (char*)"□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□  ");
	}

	//Pixel
	{
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 5.0f, (char*)"□■■■                        □");
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 6.0f, (char*)"■     ■                       ■");
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 7.0f, (char*)"■     ■ □ □    ■  □■■   ■");
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 8.0f, (char*)"■■■■  ■  ■  ■  ■    ■  ■");
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 9.0f, (char*)"■        ■    ■   ■■■■■ ■");
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 10.0f, (char*)"■        ■  ■  ■  ■        ■");
		CursorManager::GetInstance()->WriteBuffer
		(19.0f, 11.0f, (char*)"■        ■ ■    ■  ■■■   ■");
	}

	//Shotter
	{
		CursorManager::GetInstance()->WriteBuffer
		(9.0f, 14.0f, (char*)"  □■■■ □");
		CursorManager::GetInstance()->WriteBuffer
		(9.0f, 15.0f, (char*)" ■        ■");
		CursorManager::GetInstance()->WriteBuffer
		(9.0f, 16.0f, (char*)"■         ■                 □     □");
		CursorManager::GetInstance()->WriteBuffer
		(9.0f, 17.0f, (char*)" ■■■■  ■■■■  □■■ ■■■ ■■■ □■■  □");
		CursorManager::GetInstance()->WriteBuffer
		(16.0f, 18.0f, (char*)" ■ ■    ■ ■    ■  ■     ■  ■■■■ ■■■");
		CursorManager::GetInstance()->WriteBuffer
		(9.0f, 19.0f, (char*)"       ■  ■    ■ ■    ■  ■     ■  ■       ■");
		CursorManager::GetInstance()->WriteBuffer
		(9.0f, 20.0f, (char*)"■■■■   ■    ■  ■■■   ■     ■   ■■■  ■   ");
	}

	//왼 박스
	{
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 28.0f, (char*)"□■■■■■■■■■■■■□ ");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 29.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 30.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 31.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 32.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 33.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 34.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 35.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 36.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 37.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 38.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 39.0f, (char*)"■                        ■");
		CursorManager::GetInstance()->WriteBuffer
		(6.0f, 40.0f, (char*)"□■■■■■■■■■■■■□ ");
	}

	// 왼쪽 화살표
	{
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 30.0f, (char*)"■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 31.0f, (char*)"■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 32.0f, (char*)"■■■■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 33.0f, (char*)"■■■■■■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 34.0f, (char*)"■■■■■■■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 35.0f, (char*)"■■■■■■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 36.0f, (char*)"■■■■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 37.0f, (char*)"■■■■");
		CursorManager::GetInstance()->WriteBuffer
		(10.0f, 38.0f, (char*)"■■");
	}

	// 오른쪽 박스
	{
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 28.0f, (char*)"□■■■■■■■■■■■■□ ");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 29.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 30.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 31.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 32.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 33.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 34.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 35.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 36.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 37.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 38.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 39.0f, (char*)"■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(40.0f, 40.0f, (char*)"□■■■■■■■■■■■■□ ");
	}

	// 오른쪽 exit
	{
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 30.0f, (char*)"■■            ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 31.0f, (char*)"  ■■        ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 32.0f, (char*)"   ■■      ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 33.0f, (char*)"     ■■  ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 34.0f, (char*)"        ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 35.0f, (char*)"     ■■  ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 36.0f, (char*)"   ■■      ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 37.0f, (char*)"  ■■        ■■");
	CursorManager::GetInstance()->WriteBuffer
	(44.0f, 38.0f, (char*)"■■            ■■");
	}

}

void Logo::Release()
{

}