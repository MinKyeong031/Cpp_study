#include <iostream>

using namespace std;

void display1();
void display2();
void display3();

int main()
{
	cout << "stack �˰��� �׽�Ʈ" << endl;
	display1();

	return 0;
}

void display1()
{
	cout << "display �Լ�1." << endl;
	display2();
}

void display2()
{
	cout << "display �Լ�2." << endl;
	display3();
}

void display3()
{
	cout << "display �Լ�3." << endl;
}