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
	//┼╫╡╬╕о
	{
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 0.0f, (char*)"бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 1.0f, (char*)"бсбсбс                                                              бсбсбс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 2.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 3.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 4.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 5.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 6.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 7.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 8.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 9.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 10.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 11.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 12.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 13.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 14.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 15.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 16.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 17.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 18.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 19.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 20.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 21.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 22.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 23.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 24.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 25.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 26.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 27.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 28.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 29.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 30.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 31.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 32.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 33.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 34.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 35.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 36.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 37.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 38.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 39.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 40.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 41.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 42.0f, (char*)"бс                                                                      бс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 43.0f, (char*)"бсбсбс                                                              бсбсбс");
		CursorManager::GetInstance()->WriteBuffer
		(0.0f, 44.0f, (char*)"бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс");
	}


	// Menu
	{
	// M
	CursorManager::GetInstance()->WriteBuffer(18.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(18.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(18.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(20.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(21.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(22.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(24.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(24.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(24.0f, 7.0f, (char*)"бр");

	// e
	CursorManager::GetInstance()->WriteBuffer(28.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(28.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(28.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(30.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(30.0f, 6.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(30.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(32.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(32.0f, 6.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(32.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(34.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(34.0f, 6.0f, (char*)"бс");
	// n
	CursorManager::GetInstance()->WriteBuffer(38.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(38.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(38.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(40.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(42.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(44.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(44.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(44.0f, 7.0f, (char*)"бр");
	// u
	CursorManager::GetInstance()->WriteBuffer(48.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(48.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(48.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(50.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(52.0f, 7.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(54.0f, 5.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(54.0f, 6.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(54.0f, 7.0f, (char*)"бр");
	}

	// Start ─о╡╬░│▒│┬ў
	{
	// ┐└╕е┬╩─о
	CursorManager::GetInstance()->WriteBuffer(12.0f, 14.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(12.0f, 15.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(14.0f, 15.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(14.0f, 16.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(16.0f, 16.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(16.0f, 17.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(18.0f, 17.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(17.0f, 18.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(19.0f, 18.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(18.0f, 19.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(20.0f, 19.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(19.0f, 20.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(21.0f, 20.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(26.0f, 20.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(20.0f, 21.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(22.0f, 21.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(24.0f, 21.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(21.0f, 22.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(23.0f, 22.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(19.0f, 23.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(25.0f, 23.0f, (char*)"бс");
	CursorManager::GetInstance()->WriteBuffer(27.0f, 24.0f, (char*)"бс");

	// ┐▐┬╩─о
	CursorManager::GetInstance()->WriteBuffer(24.0f, 14.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(22.0f, 15.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(24.0f, 15.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(20.0f, 16.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(22.0f, 16.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(20.0f, 17.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(16.0f, 19.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(15.0f, 20.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(17.0f, 20.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(10.0f, 20.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(12.0f, 21.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(14.0f, 21.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(16.0f, 21.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(13.0f, 22.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(15.0f, 22.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(11.0f, 23.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(17.0f, 23.0f, (char*)"бр");
	CursorManager::GetInstance()->WriteBuffer(9.0f, 24.0f, (char*)"бр");

	}
	
	// Ranking ┐╒░№
	{
		CursorManager::GetInstance()->WriteBuffer(40.0f, 14.0f, (char*)"бр");
		CursorManager::GetInstance()->WriteBuffer(40.0f, 15.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 15.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(40.0f, 16.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 16.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 16.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(40.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 17.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(60.0f, 17.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(40.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 18.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(60.0f, 18.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(40.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 19.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(60.0f, 19.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(42.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 20.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 20.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(40.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 21.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(60.0f, 21.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(42.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 22.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 22.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(40.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 23.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(60.0f, 23.0f, (char*)"бс");

		CursorManager::GetInstance()->WriteBuffer(40.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(42.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(44.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(46.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(48.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(50.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(52.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(54.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(56.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(58.0f, 24.0f, (char*)"бс");
		CursorManager::GetInstance()->WriteBuffer(60.0f, 24.0f, (char*)"бс");
	}

	// Option ┼щ┤╧
	{
		//d
	}

	// Exit ┐в╜║
	{
		//d
	}



}

void Menu::Release()
{

}