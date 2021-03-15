#include <iostream>
using namespace std;

#define multiple_define(A) ((A)*(A))
int multiple_Inline(int A);


int main()
{
	int a = 3;
	cout << "Inline 함수의 값은 " << multiple_Inline(++a) << endl;
	a = 3;
	cout << "define 매크로의 값은 " << multiple_define(++a) << endl;

	return 0;
}

inline int multiple_Inline(int A)
{
	return A * A;
}