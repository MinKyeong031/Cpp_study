#include <iostream>
using namespace std;

int main()
{
	unique_ptr<int[]> pArray(new int[10]);
	// heap 영역에 4바이트가 10개 생성된다.
	// pArray라는 이름으로 배열로 접근가능하다
	// 포인터로 접근이 불가능한데..

	for (int i = 0; i < 10; i++)
		pArray[i] = 20 + i;

	for (int i = 0; i < 10; i++)
		cout << pArray[i] << "   ";
	cout << endl;

	return 0;
}