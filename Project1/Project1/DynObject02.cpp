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
	//heap ������ TestCŬ������ ��ü�� 3���� �迭�� �����ȴ�.
	TestC* ptr = new TestC[3];//�����ڴ� 3�� ȣ��.����

	//heap������ �迭�� ���� �����ϰ�, �Ҹ��ڸ� 3�� ȣ��.����
	delete[] ptr;

	return 0;
}