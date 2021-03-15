#include <iostream>
using namespace  std;

int main()
{
	int* ptr2 = new int[4]; // heap영역에 정수데이터 배열 4개가 생성된다.
	for (int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << "\t";
	}
	cout << endl; // 줄바꿈

	// delete ptr2; ---heap영역에 있는 
	// 배열 4개의 요소 중에서 첫번째 요소만삭제 
	delete [] ptr2; // heap영역에 있는 배열 4개 요소 모두 삭제 

	return 0;
}