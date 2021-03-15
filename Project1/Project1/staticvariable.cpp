#include <iostream>
using namespace std;

void jungjuk()
{
	int temp = 10; //=> 호출할 때마다 매번 생성, 초기화 -> temp를 증가시켜도 초기화 되어서 항상 temp의 값은 10
	//지역변수는 함수를 벗어나는 순간에 메모리에서 삭제가 된다.
	//다시 함수가 호출 되면 지역변수는 새롭게 메모리를 만든다.
	static int a = 20;//=> 호출 시 초기화 시키지 않음
	//정적변수는 함수가 처음 호출될 때  1번만 만들어진다.
	//다시 함수가 호출되더라도 메모리를 새롭게 만들지 않는다.
	cout << "지역 변수 temp = " << temp << endl;
	cout << "정적 변수 a는 " << a << endl;
	temp++;
	a++;
}

int main()
{
	jungjuk();
	jungjuk();
	jungjuk();

	return 0;
}