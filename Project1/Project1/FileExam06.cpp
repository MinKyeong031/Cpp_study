#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	int num1 = 2018;
	double num2 = -100.0;
	double num3 = 123.456;
	cout << "�Ҽ��� �������� ����" << endl;
	cout.setf(ios::showpoint);
	cout << "�Ҽ��� �������� �ʴ� num1 = " << num1 << endl;
	cout << "�Ҽ��� �������� �ʴ� num2 = " << num2 << endl;
	cout << "�Ҽ��� �������� �ʴ� num3 = " << num3 << endl;
	cout << "��ȣ ǥ��" << endl;
	cout.setf(ios::showpos);
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "���ξ� ǥ��" << endl;
	cout.setf(ios::showbase);
	cout << "���ξ� ǥ�� 10���� num1 = " << dec << num1 << endl;
	cout << "���ξ� ǥ�� 16���� num1 = " << hex << num1 << endl;
	cout << "���ξ� ǥ�� 8���� num1 = " << oct << num1 << endl;
}