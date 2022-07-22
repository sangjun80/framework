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
	//막대기
	CursorManager::GetInstance()->WriteBuffer
	(7.0f, 3.0f, (char*)"□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□  ");
	CursorManager::GetInstance()->WriteBuffer
	(7.0f, 23.0f, (char*)"□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□  ");
	

	//Pixel
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 6.0f, (char*)"□■■■                        □  ");
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 7.0f, (char*)"■     ■                       ■");
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 8.0f, (char*)"■     ■ □ □    ■  □■■   ■");
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 9.0f, (char*)"■■■■  ■  ■  ■  ■    ■  ■");
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 10.0f, (char*)"■        ■    ■   ■■■■■ ■");
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 11.0f, (char*)"■        ■  ■  ■  ■        ■");
	CursorManager::GetInstance()->WriteBuffer
	(20.0f, 12.0f, (char*)"■        ■ ■    ■  ■■■   ■");

	//Shotter
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 14.0f, (char*)"  □■■■ □                         ");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 15.0f, (char*)" ■        ■                         ");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 16.0f, (char*)"■         ■                 □     □            ");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 17.0f, (char*)" ■■■■  ■■■■  □■■ ■■■ ■■■ □■■  □              ");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 18.0f, (char*)"        ■ ■    ■ ■    ■  ■     ■  ■■■■ ■■■                   ");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 19.0f, (char*)"       ■  ■    ■ ■    ■  ■     ■  ■       ■     ");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 20.0f, (char*)"■■■■   ■    ■  ■■■   ■     ■   ■■■  ■   ");

	//왼 박스
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 25.0f, (char*)"ㅁㅁㅁ ");
	CursorManager::GetInstance()->WriteBuffer
	(18.0f, 25.0f, (char*)"                ㅁㅁㅁ ");



}

void Logo::Release()
{

}