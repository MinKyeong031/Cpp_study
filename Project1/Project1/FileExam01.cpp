#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void main() {
	char empNum[20];
	char empName[20];
	char position[20];

	ofstream fout("info.txt");
	//ofstream fout{ "info.txt" }; ->"info.txt"������ ����ϰڴٰ� ����
	//ofstream fout; fout.open("info.txt");
	//ofstream�� Ŭ���� �̸��̰�, fout�� "info.txt"������ ����Ű�� ��ü �����̴�.

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° ����� ����� �Է��ϼ��� => ";
		cin >> empNum;
		cout << i + 1 << "�̸��� �Է��ϼ��� => ";
		cin >> empName;
		cout << i + 1 << "������ �Է��ϼ��� => ";
		cin >> position;

		//fout�� info.txt������ ����Ű�� ��ü �����̱� ������
		//empNum << setw(10) << empName << setw(22) << position << endl;
		//�� ������ ���� info.txt ���Ͽ� ����Ѵ�. setw()�� ������ �ִ� �Լ��̴�.
		fout << empNum << setw(10) << empName << setw(22) << position << endl;
		cout << empNum << setw(10) << empName << setw(22) << position << endl;
		cout << endl;
	}
	fout.close();
}