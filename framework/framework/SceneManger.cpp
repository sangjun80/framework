#include "SceneManger.h"



SceneManger::SceneManger()
{
}

SceneManger::~SceneManger()
{
}

void SceneManger::SetScene(SCENEID _SceneState)
{
	switch (_SceneState)
	{
	case LOGO:
		cout << "LOGO" << endl;
		break;

	case MENU:
		cout << "MENU" << endl;
		break;

	case STAGE:
		cout << "STAGE" << endl;
		break;

	case EXIT:
		cout << "EXIT" << endl;
		break;
	}
}


