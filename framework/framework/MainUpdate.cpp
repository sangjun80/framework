#include "MainUpdate.h"
#include "SceneManager.h"
#include "CursorManager.h"
#include "InputManager.h"
#include "Prototype.h"


MainUpdate::MainUpdate() { }
MainUpdate::~MainUpdate() { Release(); }


void MainUpdate::Initialize()
{
	Prototype::GetInstance()->Initialize();
	CursorManager::GetInstance()->CreateBuffer(ConsoleWidthSize, ConsoleHeightSize);
	SceneManager::GetInstance()->SetScene(SCENEID::LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();
	SceneManager::GetInstance()->Update();

	CursorManager::GetInstance()->FlippingBuffer();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{

}

