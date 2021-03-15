#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream fi_bin("data.bin", ofstream::binary);
	//data.bin������ �����ϴµ� 2�� ���� ���(2����)�� �Ѵ�.
	//�ؽ�Ʈ ������ �ƴ�
	//fo_bin ��ü ������ "data.bin"������ ����Ų��.
	int nArray[] = { 100, 200, 300, 400, 500 };

	if (!fi_bin) {//���� ������ ������ �� �����ϴ� ����
		cout << "data.bin ���� ���� ����" << endl;
		exit(1);
	}
	cout << "data.bin ���� ������ ȭ�鿡 ���" << endl;
	fi_bin.read((char*)&nArray, sizeof(nArray));
	for (auto& e : nArray) {// = for (int i = 0; i < sizeof(nArray)/4; i++)
		cout << e << "      ";
	}
	//sizeof(nArray)�� nArray �迭�� ���̸�ŭ ������ "data.bin"���Ͽ� ����Ͻÿ�.
}