#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void main() {
	char empNum[20];
	char empName[20];
	char position[20];

	ifstream fin;
	fin.open("info.txt");
	//fin�� ����Ű�� info.txt������ ���(open)�� �� �ִ�.


	//fin�� ������ ����Ű��, ù��° ������ ���� �о ����� empNum, �̸��� empName,
	// ������ position�� �����ϰ� while���� ���� �����ϸ� true�� �ν��Ѵ�.
	//ù��° ������ �а� ���� �ڵ������� 2��° ������ �����͸� �д´�.
	//������ ���α��� �о���̰� �� ���� ���ο� �����Ͱ� ������ ������ ���� �ǹ��Ѵ�.
	//������ ���� while������ false�� ó���Ѵ�.
	while (fin >> empNum >> empName >> position) {
		cout << empNum << setw(10) << empName << setw(22) << position << endl;
	}

	fin.close();
	//fin�� ����Ű�� info.txt������ �ݴ´�.
}