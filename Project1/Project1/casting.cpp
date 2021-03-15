#include <iostream>
using namespace std;

int main()
{
	int val1 = 3;
	double val2 = 3.14;

	//정수 + 실수 = 실수
	cout << val1 + val2 << endl;

	//정수 + 정수 = 정수
	//(자료형)변수 =>강제형변환
	cout << val1 + int(val2) << endl;
	cout << "val1 = " << val1 << ", vla2 = " << val2 << endl;

	return 0;
}