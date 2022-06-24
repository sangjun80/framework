#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::Instance = nullptr;

SceneManager::SceneManager() : SceneState(nullptr){}

SceneManager::~SceneManager(){}



void SceneManager::SetScene(int _SceneState)
{
	if (SceneState != nullptr)
		::Safe_Delete(SceneState);
		
	switch (_SceneState)
	{
	case LOGO:
		
		break;

	case MENU:
	
		break;

	case STAGE:
	
		break;

	case EXIT:
	
		break;
	}

	Sleep(500);
}

