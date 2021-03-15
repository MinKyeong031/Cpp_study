#include <iostream>
using namespace std;

int main()
{
	int* ptr2 = new int[4]; 
	// heao영역에 정수형 4바이트가 4개 배열로 만들어진다.
	// 따라서 ptr2 는 배열로 접근이 가능하다.

	for(int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << "\t";
	}

	// delete ptr2;---heap영역에 있는 ptr2가 가리키는 배열 요소의 첫번째만 삭제
	delete [] ptr2; //heap영역에 있는 ptr2가 가리키는 배열 요소의 전부를 삭제

	return 0; 
}