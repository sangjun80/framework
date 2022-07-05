#include "MainUpdate.h"
#include "SceneManager.h"
#include "InputManager.h"
#include "CursorManager.h"

MainUpdate::MainUpdate() { }
MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	CursorManager::GetInstance()->CreateBuffer(120.f, 30.0f);

	SceneManager::GetInstance()->SetScene(LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();
	SceneManager::GetInstance()->Update();

	CursorManager::GetInstance()->FlippingBuffer();
	CursorManager::GetInstance()->ClearBuffer();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{

}
