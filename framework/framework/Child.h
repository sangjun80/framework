#pragma once
#include "parent.h"


class Child
{
private:
	//** �ڱ� �ڽŸ� ��� ����

protected:
	// ** ��Ӱ��� ������ ����. ���� Ŭ���� ���Ұ�. �ܺλ��Ұ�
	int m_Number = 0;

public:
	void Initialize();

	// ** ������ ����
	void Output();
};

