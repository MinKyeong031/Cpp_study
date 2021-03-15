#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<int> ptr(new int);
	//heap 영역에 정수 4바이트가 생성된다.
	//템플릿 기능을 이용해서 delete기능을 포함시킨다.

	*ptr = 100;
	cout << *ptr << "  ";

	//delete 연산자를 생략한다.

	return 0;
}