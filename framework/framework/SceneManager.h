#pragma once
#include "Headers.h"


class Scene;
class SceneManager
{
private:
	static SceneManager* Instance;
public:
	static SceneManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new SceneManager;

		return Instance;
	}
private:
	Scene* SceneState;
public:
	void SetScene(int _SceneState);
private:
	SceneManager();
public:
	~SceneManager();
};