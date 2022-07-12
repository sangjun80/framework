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
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 10.0f, (char*)"s");
	CursorManager::GetInstance()->WriteBuffer
	(10.0f, 11.0f, (char*)"sss");


	
}

void Logo::Release()
{

}