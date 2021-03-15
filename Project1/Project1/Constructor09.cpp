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

	CTest* pData = new CTest[3];
	cout << "Test" << endl;
	delete pData;

	return 0;
}