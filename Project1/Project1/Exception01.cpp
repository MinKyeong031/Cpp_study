#include <iostream>
using namespace std;

int main() {
	int nData1, nData2;

	cout << "�� ���� ���� �Է� : ";
	cin >> nData1 >> nData2;
	
	cout << nData1 << "�� " << nData2 << "�� ���� ���� " << nData1 / nData2 << "�Դϴ�." << endl;
	cout << nData1 << "�� " << nData2 << "�� ���� �������� " << nData1 % nData2 << "�Դϴ�." << endl;

	return 0;
}