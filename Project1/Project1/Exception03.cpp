#include <iostream>
using namespace std;

int main() {
	int nData1, nData2;

	cout << "�� ���� ���� �Է� : ";
	cin >> nData1 >> nData2;

	try {
		if (nData2 <= 0) {
			throw nData2;
		}
		else {
			cout << nData1 << "�� " << nData2 << "�� ���� ���� " << nData1 / nData2 << "�Դϴ�." << endl;
			cout << nData1 << "�� " << nData2 << "�� ���� �������� " << nData1 % nData2 << "�Դϴ�." << endl;
		}

	}
	catch (int exception) {
		cout << "���� �߻�, ������ ���� " << exception << "�� �� �� ����." << endl;
	}

	return 0;
}