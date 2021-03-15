#include <iostream>
using namespace std;

void divideFunc(int d1, int d2) {
	if (d2 <= 0) {
		//���� ���� �� main()�Լ��� �ִ� catch���忡�� �����͸� �޾Ƽ� ������ش�.
		throw d2;
	}
	else {
		cout << d1 << "�� " << d2 << "�� ���� ���� " << d1 / d2 << "�Դϴ�." << endl;
		cout << d1 << "�� " << d2 << "�� ���� �������� " << d1 % d2 << "�Դϴ�." << endl;
	}
}

int main() {
	int nData1, nData2;

	cout << "�� ���� ���� �Է� : ";
	cin >> nData1 >> nData2;

	try {
		divideFunc(nData1, nData2);
	}
	catch (int exec) {
		cout << "���� �߻�, ������ ���� " << exec << "�� �� �� ����." << endl;
	}

	return 0;
}