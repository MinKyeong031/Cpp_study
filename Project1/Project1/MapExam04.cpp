#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> fruit;
	//map�����̳�(����) ��ü���� dic ����
	string efruit;
	string kfruit;

	fruit.insert(make_pair("apple", "���"));//key : "apple", value : "���"
	fruit.insert(make_pair("melon", "�ᷱ"));//key : "melon", value : "�ᷱ"
	fruit.insert(make_pair("cherry", "ü��"));//key : "cherry", value : "ü��"
	fruit.insert(make_pair("banana", "�ٳ���"));//key : "banana", value : "�ٳ���"

	while (true) {
		cout << " << ã�� ���� �ܾ� >> " << endl;
		getline(cin, efruit);
		//�ַܼκ��� �����͸� �Է¹޴� �Լ�. efruit�� �Է°� �����Ѵ�.
		if (efruit == "exit") {
			break;
			//while���� ����������.
		}
		if (fruit.find(efruit) == fruit.end()) {
			//fruit ��ü ������ �����Ϳ��� �Է��� efruitŰ ���� ó������ ������ ã�µ� ���� ���
			cout << "����" << endl;
		}
		else {
			cout << fruit[efruit] << endl;
		}
	}
	cout << "�����մϴ�." << endl;
}