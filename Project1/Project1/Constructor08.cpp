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
		cout << "CTest::~CTest()" <<  endl;

	}
};

int main()
{
	cout << "Begin" << endl;

	//new연사자를 이용해서 동적으로 객체를 생성
	CTest* pData = new CTest();
	//pData포인터 변수는 stack영역, 객체는 heap영역
	//pData는 heap영역에 만들어진 객체의 주소값을 가진다.
	cout << "Test" << endl;

	//delete연산자를 이용해서 객체를 삭제한다.
	delete pData;
	//pData가 가리키는 heap영역의 객체를 삭제


	return 0;
}