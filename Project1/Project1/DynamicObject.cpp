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
		// �������� ��ü�� �����ɶ� ������ �Լ��� ȣ��ȴ�.
		
		cout << "Test Plus" << endl;

		delete ptr;
		// ptr�� ����Ű�� �޸𸮸� �����ҋ� �Ҹ��ڰ� �ڵ����� ȣ��ȴ�.
		// ���������� ȣ���� �Ǹ� ������ �� �Ǿ��ٴ� �ǹ��̴�.

		cout << "End" << endl;

		return 0;
}