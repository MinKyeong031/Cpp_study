#include <iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	~CTest()
	{
		cout << "CTest::~CTest()" << endl;

	}
};

CTest a;
//전역변수 형태로 객체가 생성되었고, 이때 생성자가 호출된다.
//main() 함수 이전에 먼저 실행된다 : 기말고사

int main()
{
	cout << "Begin" << endl;
	cout << "End" << endl;

	return 0;//소멸자가 호출
}