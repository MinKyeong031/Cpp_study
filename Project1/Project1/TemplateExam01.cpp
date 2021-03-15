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
	//�Լ� ȣ���� �Ͼ �� �Ű����� x, y�� �������̱� ������
	//SwapTest(T& x, T& y)���� T�� int�� ��� �ٲپ� �ְ� �Լ� ����
	cout << "x = " << x << ", y = " << y << endl;
	cout << "===================" << endl;
	cout << "x1 = " << x << ", y1 = " << y << endl;
	SwapTest<double>(x1, y1);
	//�Լ� ȣ���� �Ͼ �� �Ű����� x1, y1�� �Ǽ����̱� ������
	//SwapTest(T& x, T& y)���� T�� double�� ��� �ٲپ� �ְ� �Լ� ����
	cout << "x1 = " << x << ", y1 = " << y << endl;
}