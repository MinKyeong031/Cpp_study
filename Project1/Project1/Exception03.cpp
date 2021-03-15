#include <iostream>
using namespace std;

int main() {
	int nData1, nData2;

	cout << "두 개의 정수 입력 : ";
	cin >> nData1 >> nData2;

	try {
		if (nData2 <= 0) {
			throw nData2;
		}
		else {
			cout << nData1 << "를 " << nData2 << "로 나눈 몫은 " << nData1 / nData2 << "입니다." << endl;
			cout << nData1 << "를 " << nData2 << "로 나눈 나머지는 " << nData1 % nData2 << "입니다." << endl;
		}

	}
	catch (int exception) {
		cout << "예외 발생, 나누는 수는 " << exception << "가 될 수 없다." << endl;
	}

	return 0;
}