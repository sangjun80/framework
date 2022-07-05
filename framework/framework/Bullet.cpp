#include "Bullet.h"
#include "CursorManager.h"

Bullet::Bullet() { }
Bullet::Bullet(Transform _TransInfo) : Object(_TransInfo) { }
Bullet::~Bullet() { }


void Bullet::Initialize()
{
	strKey = "Bullet";

	Buffer[0] = (char*)"¡¬";
	Buffer[1] = (char*)"£¯";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 2.0f);
<<<<<<< HEAD
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
=======

	Vector3 Target = Vector3(60.0f, 15.0f);

	Vector3 Result = Target - TransInfo.Position;

	float Distance = sqrt((Result.x * Result.x) + (Result.y * Result.y));
		TransInfo.Direction /= Distance;

	//TransInfo.Direction = Vector3(0.1f, -0.06f);
>>>>>>> bac5b1e44c304e42247896305c7d38108e172a5f
}

int Bullet::Update()
{
<<<<<<< HEAD
	//printf_s("%f\n", TransInfo.Direction.x);
	//printf_s("%f\n", TransInfo.Direction.y);

	Vector3 Target = Vector3(60.0f, 15.0f);

	float Width = Target.x - TransInfo.Position.x;
	float Height = Target.y - TransInfo.Position.y;

	float Distance = sqrt((Width * Width) + (Height * Height));

	TransInfo.Direction = Vector3(Width / Distance, Height / Distance);
=======
	

>>>>>>> bac5b1e44c304e42247896305c7d38108e172a5f

	TransInfo.Position += TransInfo.Direction;

	return 0;
}

void Bullet::Render()
{
	CursorManager::GetInstance()->WriteBuffer(
		TransInfo.Position, (char*)"ABCDEFG", 0);
}

void Bullet::Release()
{

}