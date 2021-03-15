#include <iostream>
using namespace std;

void TestFunc(int a)
{
	cout << "TestFunc()" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "Testfunc(int, int)" << endl;
}

int main()
{
	//TestFunc(5);

	return 0;
}