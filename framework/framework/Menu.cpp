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
	CursorManager::GetInstance()->WriteBuffer(15.0f, 14.0f, (char*)"Menu");
	CursorManager::GetInstance()->WriteBuffer(15.0f, 15.0f, (char*)"Selete char");
	CursorManager::GetInstance()->WriteBuffer(15.0f, 16.0f, (char*)"Ranking");
}

void Menu::Release()
{

}