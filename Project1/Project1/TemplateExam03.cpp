#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>//T1�� T2�� �ڷ����� �ٸ� ���

void PrintShow(T1 a, T2 b) {
	cout << "T1 : " << a;
	cout << ", T2 : " << b << endl;
}

int main() {
	string s1 = "Computer", s2 = "Science";
	int num1 = 100, num2 = 200;
	double d1 = 12.34, d2 = 56.78;

	PrintShow(s1, s2); //s1�� s2�� PrintShow(T1 a, T2 b)�Լ��� a, b���� ���� �ѱ�� �� s1�� s2�� �ڷ�����
	//string�̱� ������ T1, T2�� ��� string���� �ٲ��.
	PrintShow(s1, num1);//s1�� num1�� PrintShow(T1 a, T2 b)�Լ��� a, b���� ���� �ѱ�� ��
	//s1�� string, num1�� int�̱� ������ T1�� string, T2�� int���� �ٲ��.
	PrintShow(num1, num2);
	PrintShow(num1, d1);
	PrintShow(d1, d2);
	PrintShow(d1, s1);

	return 0;
}