// framework 0.1

#include <iostream>

using namespace std;


// ** 1. ��������
// ** 2. ĸ��ȭ
// ** 3. �߻�ȭ
// ** 4. ���
// ** 5. ������

struct AAA
{
	int Number;

};

class BBB
{
private:
	int m_iNumber = 0;

public:
	void Initialize(int& _Number)
	{
		m_iNumber = 0;
	}


	// ** �����͸� ����Ѵٴ°��� ���������� ������ �Ұ�.
	int GetNumber()
	{
		return m_iNumber;
	}

	// ** �����͸� �����ϴ°��� ���������� ������ �Ұ�.
	void SetNumber(int _Number)
	{
		m_iNumber = _Number;
	}

};

void Initialize(int& _Number);




int main(void)
{
	AAA a;
	Initialize(a.Number);
	cout << a.Number << endl;

	BBB b;
	b.Initialize();
	cout << b.GetNumber() << endl;
	//b.Number ����� �� ����.(����ü�� �ۺ������� Ŭ������ �����̺��̱⶧��,,)




	return 0;
}

void Initialize(int& _Number)
{
	_Number = 0;

}
