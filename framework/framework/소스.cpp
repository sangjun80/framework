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

class Object
{
private:
	
public:
	/*
	// ** 사용자가 호출하지 않아도 스스로 호출됨.
	// ** 클래스가 생성된 직후 호출
	
	Object()
	{
		cout << "생성자" << endl;
	};
	

	// ** 사용자가 호출한 시점에 호출
	// ** 전달값의 개수와 자료형에 따라서 선택적으로 호출 됨
	Object(int _Number)
	{
		cout << "복사 생성자" << endl;
			
		Number = _Number;
	};

	// ** 클래스가 삭제되기 직전
	~Object()
	{
		cout << "소멸자" << endl;
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

