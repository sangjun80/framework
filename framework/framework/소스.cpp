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

class Object
{
private:
	
public:
	/*
	// ** ����ڰ� ȣ������ �ʾƵ� ������ ȣ���.
	// ** Ŭ������ ������ ���� ȣ��
	
	Object()
	{
		cout << "������" << endl;
	};
	

	// ** ����ڰ� ȣ���� ������ ȣ��
	// ** ���ް��� ������ �ڷ����� ���� ���������� ȣ�� ��
	Object(int _Number)
	{
		cout << "���� ������" << endl;
			
		Number = _Number;
	};

	// ** Ŭ������ �����Ǳ� ����
	~Object()
	{
		cout << "�Ҹ���" << endl;
	};
	*/


};




int main(void)
{
	/*
	parent* p = new Child;

	p->Initialize();
	p->Output();
	*/
	/*
	Object o = Object(10);

	cout << "Hello world!!" << endl;
	*/

	Object o = Object(Object());
	
	


	return 0;
}

