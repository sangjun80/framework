// framework 0.1

#include <iostream>

using namespace std;


// ** 1. 정보은닉
// ** 2. 캡슐화
// ** 3. 추상화
// ** 4. 상속
// ** 5. 다형성

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


	// ** 데이터를 사용한다는것은 가능하지만 수정은 불가.
	int GetNumber()
	{
		return m_iNumber;
	}

	// ** 데이터를 수정하는것은 가능하지만 참조는 불가.
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
	//b.Number 사용할 수 없음.(구조체는 퍼블릭이지만 클래스는 프라이빗이기때문,,)




	return 0;
}

void Initialize(int& _Number)
{
	_Number = 0;

}
