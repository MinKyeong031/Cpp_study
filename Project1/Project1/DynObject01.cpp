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
	//TestC* ptr = new TestC;�� ����
	//heap ������ �޸� ����
	cout << "Test Plus" << endl;

	delete ptr;//heap ������ �޸� �����ǰ�, �Ҹ��ڸ� �ڵ����� ȣ��.����
	cout << "End" << endl;

	return 0;
}