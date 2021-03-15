#include <iostream>
using namespace std;

template <typename T>

void SwapTest(T& x, T& y) {
	T temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {
	int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;
	cout << "x = " << x << ", y = " << y << endl;

	SwapTest(x, y);
	//x, y 변수가 정수형 (int)이기 때문에 
	//SwapTest<int>(x, y)에서 <int>를 사용하지 않아도 된다.
	cout << "x = " << x << ", y = " << y << endl << endl;

	cout << "x1 = " << x << ", y1 = " << y << endl;

	SwapTest(x1, y1);
	//x1, y1 변수가 실수형 (couble)이기 때문에 
	//SwapTest<double>(x, y)에서 <double>를 사용하지 않아도 된다.
	cout << "x1 = " << x << ", y1 = " << y << endl;
}