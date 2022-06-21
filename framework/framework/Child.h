#pragma once
#include "parent.h"


class Child
{
private:
	//** 자기 자신만 사용 가능

protected:
	// ** 상속간의 공개된 상태. 비상속 클래스 사용불가. 외부사용불가
	int m_Number = 0;

public:
	void Initialize();

	// ** 공개된 상태
	void Output();
};

