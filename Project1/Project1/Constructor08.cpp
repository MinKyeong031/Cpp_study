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

	//new�����ڸ� �̿��ؼ� �������� ��ü�� ����
	CTest* pData = new CTest();
	//pData������ ������ stack����, ��ü�� heap����
	//pData�� heap������ ������� ��ü�� �ּҰ��� ������.
	cout << "Test" << endl;

	//delete�����ڸ� �̿��ؼ� ��ü�� �����Ѵ�.
	delete pData;
	//pData�� ����Ű�� heap������ ��ü�� ����


	return 0;
}