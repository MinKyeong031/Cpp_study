#include <iostream>
using namespace std;
class TestC {
private:
	int iData;
public:
	TestC() { cout << "TestC::TestC()" << endl;	}
	~TestC() { 	cout << "TestC::~TestC()" << endl;	}
};
int main()
{

	// �迭�� new ������ ������ �� �ִ�.
	TestC* ptr = new TestC[3]; // 3���� ��ü�� ����
	

	// �迭�� ������ ���� �ݵ�� �迭�� �����ؾ� �Ѵ�.
	delete [] ptr; // �Ҹ��ڵ� 3�� ȣ��ȴ�
	
	cout << "End" << endl;

	return 0;
}