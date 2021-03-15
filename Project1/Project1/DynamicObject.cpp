#include <iostream>
using namespace std;
class TestC {
private:
	int iData;
public:
	TestC() {
		cout << "TestC::TestC()" << endl;
	}
	~TestC() {
		cout << "TestC::~TestC()" << endl;
	}
};
int main()
{
		cout << "main begin" << endl;
		TestC* ptr = new TestC; 
		// 동적으로 객체가 생성될때 생성자 함수가 호출된다.
		
		cout << "Test Plus" << endl;

		delete ptr;
		// ptr이 가라키는 메모리를 삭제할떄 소멸자가 자동으로 호출된다.
		// 정상적으로 호출이 되면 삭제가 잘 되었다는 의미이다.

		cout << "End" << endl;

		return 0;
}