#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ofstream fo_bin("data.bin", ofstream::binary);
	//data.bin������ �����ϴµ� 2�� ���� ���(2����)�� �Ѵ�.
	//�ؽ�Ʈ ������ �ƴ�
	//fo_bin ��ü ������ "data.bin"������ ����Ų��.
	int nArray[] = { 100, 200, 300, 400, 500 };

	if (!fo_bin) {//���� ������ ������ �� �����ϴ� ����
		cout << "data.bin ���� ���� ����" << endl;
		exit(1);
	}
	fo_bin.write((char*)&nArray, sizeof(nArray));
	//sizeof(nArray)�� nArray �迭�� ���̸�ŭ ������ "data.bin"���Ͽ� ����Ͻÿ�.
}