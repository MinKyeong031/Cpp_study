#include <iostream>
using namespace std;

int DecreaseNumber(int n) {
	if (n < 0) {
		throw n;
	}
	else if(n == 0){
		throw "0은 입력할 수 없습니다.";
	}
	return --n;
}

int main() {
	int num;
	cout << "양의 정수를 하나 입력하세요.";
	while (cin >> num) {
		try {
			cout << "입력한 정수에서 1을 감소시킨 값 : " << DecreaseNumber(num) << endl;
		}
		catch (int input) {
			cout << input << "은 정수가 아닙니다." << endl;
			cout << "양의 정수를 다시 입력하세요.";
			continue;
		}
		catch (const char* st) {
			cout << st << endl;
			cout << "양의 정수를 다시 입력하세요.";
			continue;
		}
		break;
	}
}