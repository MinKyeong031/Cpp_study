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
	SwapTest<int>(x, y); 
	//함수 호출이 일어날 때 매개변수 x, y는 정수형이기 때문에
	//SwapTest(T& x, T& y)에서 T는 int로 모두 바꾸어 주고 함수 구성
	cout << "x = " << x << ", y = " << y << endl;
	cout << "===================" << endl;
	cout << "x1 = " << x << ", y1 = " << y << endl;
	SwapTest<double>(x1, y1);
	//함수 호출이 일어날 때 매개변수 x1, y1는 실수형이기 때문에
	//SwapTest(T& x, T& y)에서 T는 double로 모두 바꾸어 주고 함수 구성
	cout << "x1 = " << x << ", y1 = " << y << endl;
}