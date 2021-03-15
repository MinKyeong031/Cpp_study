#include <iostream>
using namespace std;

class TestC {
private:
	int iData;
public:
	TestC() {
		cout << "TestC:TestC()" << endl;
	}
	~TestC() {
		cout << "TestC:~TestC()" << endl;
	}
};

int main()
{
	//heap 영역에 TestC클래스의 객체가 3개의 배열로 생성된다.
	TestC* ptr = new TestC[3];//생성자는 3번 호출.실행

	//heap영역의 배열을 전부 삭제하고, 소멸자를 3번 호출.실행
	delete[] ptr;

	return 0;
}