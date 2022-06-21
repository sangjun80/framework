#include "Headers.h"
#include "parent.h"
#include "Child.h"
#include "bullet.h"


// ** 1. 정보은닉
/*
	 protected:
	 상속간의 공개된 상태. 비상속 클래스 사용불가. 외부사용불가
	 public:
	 공개된 상태
	 private:
	 자기 자신만 사용 가능
*/
// ** 2. 캡슐화
/*
	데이터(변수)와 기능(함수)을 묶음으로 사용하는 것
*/
// ** 3. 추상화
//	객체가 존재하지 않는 추상적인 클래스를 추상 클래스라고 한다.
//	예) 사랑, 학생, 군인, 등의 대상이 특정되지 않는 경우
//	예) "홍길동은 학생이다." 라면 홍길동이라는 특정 대상이 있으므로
//		추상적 형태로 볼 수 없음.

// ** 4. 상속
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

// ** 5. 다형성
//		다양한 형태로 존재할 수 있다.


// ** 6. namespace
/*
	별도의 영역을 지정하여 동일 함수를 사용할 수 있도록 함.
*/

// ** 7. 생성자 & 소멸자 & 복사 생성자

/*
namespace AAA
{
	void Output()
	{
		cout << "홍길동" << endl;
	}

}

using AAA::Output;

namespace BBB
{
	void Output()
	{
		cout << "임꺽정" << endl;
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

