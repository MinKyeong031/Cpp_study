#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	//���� ��ü v�� �����ϰ�, �� �����ʹ� <int>������ �Ѵ�.

	//������ �Է�
	v.push_back(21);
	v.push_back(32);
	v.push_back(53);
	v.push_back(64);
	v.push_back(15);

	cout << "v = ";
	for (auto& e : v) {
		cout << e << "  ";
	}
	cout << endl;

	//�ݺ��� iterator ��ü�� �̿��� �ݺ�
	//vector Ŭ���� �ȿ� iterator �������̽��� iter��ü ����
	//��ü�� �ݺ������� ������ �� ����ϴ� ��ü�̴�.
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "  ";
	}
	//iter = v.begin()�� v��ü�� �����ּҰ��� iter���� �ѱ�
	//v.end()�� �����Ͱ� ����Ǿ� �ִ� ������ ����� ���� ��ġ�� �ּ�
	cout << endl << endl;

	return 0;
}