#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<int[]> pArray(new int[10]);
	//heap 영역에 정수 4바이트가 10개 생성된다.
	//템플릿 기능을 이용해서 delete기능을 포함시킨다.
	
	for (int i = 0; i < 10; i++)
	{
		pArray[i] = 20 + i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << pArray[i] << "\t";
	}
	cout << endl;

	return 0;
}