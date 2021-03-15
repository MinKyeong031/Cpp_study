#include <iostream>
using namespace std;

int main()
{
	//int* ptr1 = new int;
	//*ptr1 = 20;
	//cout << *ptr1 << endl;

	//delete ptr1;//ptr1이 가리키는 heap영역에 메모리 삭제

	//return 0;//ptr1은 stack에 heap영역의 주소값을 가지고 있음.
	////그러나 statck영역의 모든 변수는 프로그램 종료 시 자동으로 삭제됨
	
	int* ptr2 = new int[4];//heap 영역에 정수데이터 배열 4개가 생성된다.
	for (int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << "\t";
	}
	cout << endl;//줄바꿈

	//delete ptr2;//-> heap영역에 있는
	//배열 4개의 요소 중에서 첫번째 요소만 삭제

	delete[]ptr2;//-> heap영역에 있는
	//배열 4개의 요소 모두 삭제

	return 0;
}