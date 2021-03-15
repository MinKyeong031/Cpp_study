#include <iostream>
using namespace std;

int main()
{
	int* ptr1 = new int; // ptr1변수는 stack영역에 포인터변수로 만들어지고
	// 실제적인 메모리는 heap영역에 정수 4바이트로 생성된다.

	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1; // heap영역에 있는 메모리를 삭제한다

	return 0; // stack에 있는 ptr1 포인터 변수는 main()함수가 종료될 때
	// 자동으로 삭제된다.
}