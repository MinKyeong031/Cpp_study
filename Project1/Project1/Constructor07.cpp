#include <iostream>
using namespace std;

class CTest
{
private:
	int m_nData;
public:
	CTest(int nParam) : m_nData(nParam)
		// : m_nData(nParam)이 문장은 멤버변수를 초기화 하는 것이다.
		//일반함수에서는 사용이 불가하고 생성자메서드에서만 사용가능ㅎ다ㅏ.
		//멤버변수가 여러개 있어도 ,를 사용하여 초기화가 가능하다.
	{
		//m_nData = nParam; 대입문은 초기화가 아니다
		cout << "CTest::CTest(int)" << endl;
	}
	~CTest()
	{
		cout << "CTest::~CTest()" << m_nData << endl;

	}
};

int main()
{
	//CTest aa; 생성자가 존재하면 기본생성자를 컴파일러가 만들지 않는다. 따라서 오류가 발생함
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;

	return 0;
	//객체 생성이 a, b순으로 되었는데 객체가 소멸될 때는 역순으로 된다.
}