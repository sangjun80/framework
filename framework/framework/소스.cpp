#include "Headers.h"
#include "parent.h"
#include "Child.h"
#include "bullet.h"


// ** 1. ��������
/*
	 protected:
	 ��Ӱ��� ������ ����. ���� Ŭ���� ���Ұ�. �ܺλ��Ұ�
	 public:
	 ������ ����
	 private:
	 �ڱ� �ڽŸ� ��� ����
*/
// ** 2. ĸ��ȭ
/*
	������(����)�� ���(�Լ�)�� �������� ����ϴ� ��
*/
// ** 3. �߻�ȭ
//	��ü�� �������� �ʴ� �߻����� Ŭ������ �߻� Ŭ������� �Ѵ�.
//	��) ���, �л�, ����, ���� ����� Ư������ �ʴ� ���
//	��) "ȫ�浿�� �л��̴�." ��� ȫ�浿�̶�� Ư�� ����� �����Ƿ�
//		�߻��� ���·� �� �� ����.

// ** 4. ���
/*
class AAA
{
protected:
	string m_str = "AAA";

public:
	void Output()
	{
		cout << m_str << endl;
	}
};

class BBB : public AAA
{
private:
	string m_str = "BBB";

public:
	void Output()
	{
		cout << m_str << endl;
	}
};

class CCC : public AAA
{
private:
	//string m_str = "CCC";

public:
	void Output()
	{
		cout << m_str << endl;
	}
};
*/

// ** 5. ������
//		�پ��� ���·� ������ �� �ִ�.


// ** 6. namespace
/*
	������ ������ �����Ͽ� ���� �Լ��� ����� �� �ֵ��� ��.
*/

// ** 7. ������ & �Ҹ��� & ���� ������

/*
namespace AAA
{
	void Output()
	{
		cout << "ȫ�浿" << endl;
	}

}

using AAA::Output;

namespace BBB
{
	void Output()
	{
		cout << "�Ӳ���" << endl;
	}

}

using namespace AAA;
*/


const int ID_Child = 0;
const int ID_bullet = 1;

int main(void)
{
	/*
	parent* p = new Child;

	p->Initialize();
	p->Output();
	*/

	
	parent* p[2];

	p[ID_Child] = new Child;
	p[ID_bullet] = new bullet;

	for (int i = 0; i < 2; ++i)
	{
		p[i]->Initialize();
		p[i]->Output();
	}
	



	return 0;
}

