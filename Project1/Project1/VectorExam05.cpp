#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	//���� ��ü v�� �����ϰ�, �� �����ʹ� <int>������ �Ѵ�.

	//������ �Է�
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// vector<int>::iterator iter = v.begin(); -> iter(�ݺ��� ����)
	// �ʱ� ����
	vector<int>::iterator ptr1;//ptr1�� ����Ŭ���� �ȿ� �ִ� iterator
	//�������̽��� ������ ����(�ݺ���) ����
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		cout << *ptr1 << "  ";
	//ptr1 = v.begin();�� v������  ����Ǿ� �ִ� ù��° �������� �ּҰ��� ptr1�� ����, 
	//v.end()�� v������ ����Ǿ� �ִ� ������ �������� ���� ��ġ�� ����Ų��.
	cout << endl;

	// C++14 ���� 1
	//auto�� ���� ptr2�� v������ �ּҰ��� �����Ƿ� �ڵ����� �ڷ����� v���͸� ���󰣴�.
	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++)
		cout << *ptr2 << "  ";
	cout << endl;

	// C++14 ���� 2
	//�� ����� ��ȣ�Ѵ�. ������ ���������� ó������ �����͸� ����Ѵ�.
	for (auto& ptr3 : v)
		cout << ptr3 << "  ";
	cout << endl;

	return 0;
}