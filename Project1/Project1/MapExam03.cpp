#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<int, string> dic;
	//map�����̳�(����) ��ü���� dic ����
	int nNum;
	string kfruit;

	dic.insert(make_pair(1, "���"));//key : 1, value : "���"
	dic.insert(make_pair(2, "���"));//key : 2, value : "���"
	dic[3] = "ü��";//key : 3, value : "ü��"

	cout << "����� �ܾ��� ���� " << dic.size() << endl;
	//dic.size()�� ������ ����

	while (true) {
		cout << " << ã�� ���� �ܾ� >> " << endl;
		cin >> nNum; // ã����� key�� �Է�
		if (cin.fail()) {
			//���ڿ��� �ƴ� ���� ������ �ԷµǸ� false(0)�� �����Ѵ�.
			//������� ���ڿ��� �ԷµǸ� cin.fail()�� 1���� ����
			//if ���ǽ��� ��(true)�� �ȴ�.
			cin.clear();
			//���ڿ��� ���(����)�ִ� �Լ�
			cin.ignore(100, '\n');
			//���ڿ��� �Է��ϰ� ����Ű('\n')�� �����Ѵ�.
			cout << "�Է� ����" << endl;
			continue;
		}
		if (nNum == 0) {
			//�Է� ���� 0�̸� while���� ����������.
			break;
			//while���� ����������.
		}
		if (dic.find(nNum) == dic.end()) {//dic ��ü ������ �����Ϳ��� �Է��� nNumŰ ���� ó������ ������ ã�µ� ���� ���
			cout << "����" << endl;
		}
		else {
			cout << dic[nNum] << endl;
		}
	}
	cout << "�����մϴ�." << endl;
}