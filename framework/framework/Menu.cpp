#include "Menu.h"
#include "SceneManager.h"
#include "InputManager.h"
#include "CursorManager.h"

Menu::Menu() { }
Menu::~Menu() { }


void Menu::Initialize()
{

}

void Menu::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey & KEY_ENTER)
		SceneManager::GetInstance()->SetScene(SCENEID::STAGE);
}

void Menu::Render()
{
	CursorManager::GetInstance()->WriteBuffer(0.0f, 0.0f, (char*)"Menu");
}

void Menu::Release()
{

}