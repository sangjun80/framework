#pragma once
#include "Headers.h"


class parent
{
private:
	//** �ڱ� �ڽŸ� ��� ����

protected:
	// ** ��Ӱ��� ������ ����. ���� Ŭ���� ���Ұ�. �ܺλ��Ұ�
	int m_Number = 0;

public:
	// ** ������ ����
	virtual void Initialize() = 0;
	virtual void Output() = 0;

	// ** [virtual] = �����Լ�
	// ** �Լ��� ���� [=0] ���̰� �Ǹ� [���� ���� �Լ�]�� �ȴ�.
	// ** [=0] : virtual �Լ����� ���� �� �ִ�.

	// ** [���� ���� �Լ�]
	// ** virtual �Լ��� �Լ��� ��ü(����)�� ������ ����Ѵ�.
	
	// ** virtual �Լ��� ����ϴ� ����
	// ** 
};

