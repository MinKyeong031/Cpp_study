#include <iostream>
using namespace std;

int square_sum(int& num)//함수 호출이 발생하면 'int& num = a' 와 같다
{
	num = num * num;
	return num + num;
}

int main()
{
	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a 값이 바뀌었다면 9가 출력됩니다." << a << endl;
}