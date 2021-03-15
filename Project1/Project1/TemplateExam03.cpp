#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>//T1과 T2의 자료형이 다를 경우

void PrintShow(T1 a, T2 b) {
	cout << "T1 : " << a;
	cout << ", T2 : " << b << endl;
}

int main() {
	string s1 = "Computer", s2 = "Science";
	int num1 = 100, num2 = 200;
	double d1 = 12.34, d2 = 56.78;

	PrintShow(s1, s2); //s1과 s2는 PrintShow(T1 a, T2 b)함수의 a, b에게 값을 넘기는 데 s1과 s2의 자료형은
	//string이기 때문에 T1, T2는 모두 string으로 바뀐다.
	PrintShow(s1, num1);//s1과 num1은 PrintShow(T1 a, T2 b)함수의 a, b에게 값을 넘기는 데
	//s1은 string, num1은 int이기 때문에 T1은 string, T2는 int으로 바뀐다.
	PrintShow(num1, num2);
	PrintShow(num1, d1);
	PrintShow(d1, d2);
	PrintShow(d1, s1);

	return 0;
}