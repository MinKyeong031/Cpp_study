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
	//x, y ������ ������ (int)�̱� ������ 
	//SwapTest<int>(x, y)���� <int>�� ������� �ʾƵ� �ȴ�.
	cout << "x = " << x << ", y = " << y << endl << endl;

	cout << "x1 = " << x << ", y1 = " << y << endl;

	SwapTest(x1, y1);
	//x1, y1 ������ �Ǽ��� (couble)�̱� ������ 
	//SwapTest<double>(x, y)���� <double>�� ������� �ʾƵ� �ȴ�.
	cout << "x1 = " << x << ", y1 = " << y << endl;
}