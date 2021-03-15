#include <iostream>
using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}

int main()
{
	//호출자가 실인수를 기술하지 않았으므로 디폴트 매개 변수 10 리턴
	cout << TestFunc() << endl;
	//호출자가 실인수를 기술했으므로 20리턴
	cout << TestFunc(20) << endl;
}