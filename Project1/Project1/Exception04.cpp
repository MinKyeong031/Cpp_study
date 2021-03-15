#include <iostream>
using namespace std;

void divideFunc(int d1, int d2) {
	if (d2 <= 0) {
		//조건 만족 시 main()함수에 있는 catch문장에서 데이터를 받아서 출력해준다.
		throw d2;
	}
	else {
		cout << d1 << "를 " << d2 << "로 나눈 몫은 " << d1 / d2 << "입니다." << endl;
		cout << d1 << "를 " << d2 << "로 나눈 나머지는 " << d1 % d2 << "입니다." << endl;
	}
}

int main() {
	int nData1, nData2;

	cout << "두 개의 정수 입력 : ";
	cin >> nData1 >> nData2;

	try {
		divideFunc(nData1, nData2);
	}
	catch (int exec) {
		cout << "예외 발생, 나누는 수는 " << exec << "가 될 수 없다." << endl;
	}

	return 0;
}