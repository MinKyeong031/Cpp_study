#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	//���� ��ü v�� �����ϰ�, �� �����ʹ� <int>������ �Ѵ�.

	//������ �Է�
	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);

	cout << "v = ";
	for (auto& e : v) {
		cout << e << "  ";
	}
	cout << endl;

	//������ ����
	v.pop_back();//�迭�� ������ ������ ����

	cout << "v = ";

	//v��ü�� �����ϴ� ���� e�� v��ü �迭�� �����͸� ó������ ���������� �о ����Ѵ�
	//auto�� v��ü�� ������ �ڷ����� ������� ����� �� �ִ�.
	//���� v��ü�� ������ int�̸� auto�� int�� �������ش�
	for (auto& e : v) {//v��ü�� ���� ũ���� ��ü�� e �̸����� ����
		cout << e << "  ";
	}
	cout << endl;

	return 0;
}