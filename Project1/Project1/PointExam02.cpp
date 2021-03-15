#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int* ptr = &a;
	
	cout << "a의 주소값을 참조합니다." << ptr << endl;
	cout << "a의 값을 참조합니다." << *ptr << endl;

	*ptr = 10;
	cout << "a의 값을 간접 참조로 바꿉니다." << *ptr << endl;
	cout << "a의 주소값은 바뀌지 않습니다." << ptr << endl;

	return 0;
}