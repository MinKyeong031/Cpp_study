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
//�������� ���·� ��ü�� �����Ǿ���, �̶� �����ڰ� ȣ��ȴ�.
//main() �Լ� ������ ���� ����ȴ� : �⸻���

int main()
{
	cout << "Begin" << endl;
	cout << "End" << endl;

	return 0;//�Ҹ��ڰ� ȣ��
}