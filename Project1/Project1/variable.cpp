#include <iostream>
using namespace std;

int same = 2;
int global = 2;

int main()
{
	int same(3); //	=> C++ 스타일
	//int same = 3; => C언어 스타일
	cout << "전역변수 same = " << ::same << endl; //::same => 전역변수이다.
	cout << "지역변수 same = " << same << endl; //same => 지역변수이다.
	//지역변수와 전역변수의 이름이 같을 경우에는 지역변수가 우선한다.
	cout << "전역변수 global  = " << global << endl;

	return 0;
}