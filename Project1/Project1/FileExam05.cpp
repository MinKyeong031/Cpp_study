#include <iostream>
using namespace std;

void main() {
	char addr[80];
	cout << "���ڿ� �Է� : ";
	while (cin.getline(addr, 80)) {
	//���ڿ��� 80����Ʈ���� �Է��� �� true, false�� üũ�ϴµ� �����Ͱ� ������(�Է�) true�� �ν��Ѵ�.
		if (strcmp(addr, "exit") == 0) break;
		//strcmp�� string compare�� ���(���ڿ��� ���ϴ� �Լ�)
		//addr�� �Էµ� ���ڿ��� "exit"���ڿ��� ������ 0 ���� �����ؼ� == 0�� �� true�̸� while���� ����������.
		cout << "���ڿ� ��� : " << addr << endl;
		cout << "���ڿ� �Է� : ";
	}
}