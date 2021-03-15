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

int main()
{
	cout << "Begin" << endl;
	CTest a;
	cout << "End" << endl;
	CTest b;

	return 0;//소멸자가 호출
	//main()함수 종료시 객체가 생성된 갯수만큼 소멸자도 호출된다.
}