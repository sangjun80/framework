#include "Bullet.h"
#include "CursorManager.h"

Bullet::Bullet() { }
Bullet::Bullet(Transform _TransInfo) : Object(_TransInfo) { }
Bullet::~Bullet() { }


void Bullet::Initialize()
{
	strKey = "Bullet";

	Buffer[0] = (char*)"��";
	Buffer[1] = (char*)"��";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 2.0f);
	TransInfo.Direction = Vector3(0.0f, 0.0f);


	Vector3 Target = Vector3(60.0f, 15.0f);

	//Vector3 Result = Target - TransInfo.Position;
	//TransInfo.Direction = Vector3(0.1f, -0.06f);

	float Width = Target.x - TransInfo.Position.x;
	float Height = Target.y - TransInfo.Position.y;

	float Distance = sqrt((Width * Width) + (Height * Height));

	TransInfo.Direction.x /= Distance;
	TransInfo.Direction.y /= Distance;
	TransInfo.Direction.z /= Distance;
}

int Bullet::Update()
{
	//cout << TransInfo.Direction.x << endl;
	//cout << TransInfo.Direction.y << endl;

	printf_s("%f\n", TransInfo.Direction.x);
	printf_s("%f\n", TransInfo.Direction.y);
	printf_s("%f\n", TransInfo.Direction.z);

	TransInfo.Position += TransInfo.Direction * 5.0f;

	return 0;
}

void Bullet::Render()
{
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		CursorManager::Draw(
			TransInfo.Position.x - (TransInfo.Scale.x * 0.5f),
			TransInfo.Position.y - (TransInfo.Scale.y * 0.5f) + i,
			Buffer[i]);
	}
}

void Bullet::Release()
{

}