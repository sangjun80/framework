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
	//Pixel
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 8.0f, (char*)"□■■■                         □  ");
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 9.0f, (char*)"■     ■                        ■");
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 10.0f, (char*)"■     ■                        ■ ");
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 11.0f, (char*)"■■■■  □  □    ■   □■    ■");
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 12.0f, (char*)"■        ■    ■■    ■   ■  ■");
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 13.0f, (char*)"■        ■    ■■   ■ ■■   ■");
	CursorManager::GetInstance()->WriteBuffer
	(19.0f, 14.0f, (char*)"■        ■  ■    ■  ■■■   ■");

	//Dungeon
	CursorManager::GetInstance()->WriteBuffer
	(13.0f, 16.0f, (char*)"■■■■■");



	
}

void Logo::Release()
{

}