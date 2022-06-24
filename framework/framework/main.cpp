#include "Headers.h"
#include "MainUpdate.h"



int main(void)
{
/*
	DWORD InputKey = 0;
	cout << "ют╥б : "; cin >> InputKey;
	if (InputKey & KYE_UP)
		cout << "KYE_UP" << endl;
	if (InputKey & KYE_DOWN)
		cout << "KYE_DOWN" << endl;
	if (InputKey & KYE_LEFT)
		cout << "KYE_LEFT" << endl;
	if (InputKey & KYE_RIGHT)
		cout << "KYE_RIGHT" << endl;
	if (InputKey & KYE_SPACE)
		cout << "KYE_SPACE" << endl;
	if (InputKey & KYE_ENTER)
		cout << "KYE_ENTER" << endl;
	if (InputKey & KYE_CTRL)
		cout << "KYE_CTRL" << endl;
	if (InputKey & KYE_ALT)
		cout << "KYE_ALT" << endl;
	
*/


		MainUpdate Main;
	Main.Initialize();

	ULONGLONG Time = GetTickCount64();

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}

	return 0;
}
