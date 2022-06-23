#pragma once
#include  "Headers.h"

class SceneManger
{
private:
	static SceneManger* Instance;

public:
	static SceneManger* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new SceneManger;
		return Instance;
	}


private:
	

public:
	void SetScene(SCENEID _SceneState);

private:
	SceneManger();
public:
	~SceneManger();
};

