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

	return 0;//�Ҹ��ڰ� ȣ��
	//main()�Լ� ����� ��ü�� ������ ������ŭ �Ҹ��ڵ� ȣ��ȴ�.
}