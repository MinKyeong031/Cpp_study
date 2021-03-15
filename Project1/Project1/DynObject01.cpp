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
	cout << "main begin" << endl;
	TestC* ptr = new TestC();
	//TestC* ptr = new TestC;도 가능
	//heap 영역에 메모리 생성
	cout << "Test Plus" << endl;

	delete ptr;//heap 영역의 메모리 삭제되고, 소멸자를 자동으로 호출.실행
	cout << "End" << endl;

	return 0;
}