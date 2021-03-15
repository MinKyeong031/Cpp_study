#include <iostream>

using namespace std;

void display1();
void display2();
void display3();

int main()
{
	cout << "stack 알고리즘 테스트" << endl;
	display1();

	return 0;
}

void display1()
{
	cout << "display 함수1." << endl;
	display2();
}

void display2()
{
	cout << "display 함수2." << endl;
	display3();
}

void display3()
{
	cout << "display 함수3." << endl;
}