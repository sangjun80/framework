#include <Windows.h>
#include <iostream>
#include <time.h>
#include <vector>
#include <list>
#include <map>

using namespace std;



// ** Singleton

class Singleton
{
private:
	static Singleton* Instance;

public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton;
		return Instance;
	}

private:
	int Number;

public:
	int GetNumber() const { return Number; }
	void SetNumber(const int& _Nuumber) { Number = _Nuumber; }


private:
	Singleton() {}

public:
	~Singleton() {}

};

Singleton* Singleton::Instance = nullptr;







int main(void)
{
	/*
	ULONGLONG Time = GetTickCount64(); // 1/1000

	int Count = 0;

	char* Array[30];

	for (int y = 0; y < 30; ++y)
	{
		Array[y] = (char*)"*********************************************************************";
	}


	while(true)
	{
		if (Time + 999 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			//cout << Count++ << endl;

			for (int y = 0; y < 30; ++y)
			{
				
				cout << Array[y] << endl;
			}
			
		}


	}
	*/

	Singleton::GetInstance()->SetNumber(10);
	cout << Singleton::GetInstance()->GetNumber() << endl;





	return 0;
}
