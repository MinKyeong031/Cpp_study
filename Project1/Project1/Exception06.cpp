#include <iostream>
using namespace std;

int DecreaseNumber(int n) {
	if (n < 0) {
		throw n;
	}
	else if(n == 0){
		throw "0�� �Է��� �� �����ϴ�.";
	}
	return --n;
}

int main() {
	int num;
	cout << "���� ������ �ϳ� �Է��ϼ���.";
	while (cin >> num) {
		try {
			cout << "�Է��� �������� 1�� ���ҽ�Ų �� : " << DecreaseNumber(num) << endl;
		}
		catch (int input) {
			cout << input << "�� ������ �ƴմϴ�." << endl;
			cout << "���� ������ �ٽ� �Է��ϼ���.";
			continue;
		}
		catch (const char* st) {
			cout << st << endl;
			cout << "���� ������ �ٽ� �Է��ϼ���.";
			continue;
		}
		break;
	}
}