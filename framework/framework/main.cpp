// ** Framework v13.0   ( Prototype )
#define _CRT_SECURE_NO_WARNINGS
#include "Headers.h"
#include "MainUpdate.h"



int main(void)
{
	system("title ภฬป๓มุ - Pixel Shotter");

	system("mode con cols=75 lines=45");

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





