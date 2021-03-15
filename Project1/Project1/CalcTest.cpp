#include <iostream>
using namespace std;

#define MYTYPE_A 100


int CalcLayout(int nWidth, int nHeight, int nType = MYTYPE_A)
{
	return nWidth * nHeight * nType;
}

int main()
{
	cout << CalcLayout(10, 5) << endl;
	CalcLayout(10, 5, MYTYPE_A);

	return 0;
}