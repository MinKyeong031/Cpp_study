#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; 	 // ������ ���� ������ ���� ����

	//v[0] = 1234; -> �����߻�
	
	v.push_back(100);//������ ���� v[0] = 100
	v.push_back(200);//������ ���� v[0] = 200
	v.push_back(300);//������ ���� v[0] = 300

	//v.size()�� v���Ϳ� ��� �ִ� �������� ����
	for (int i = 0; i < v.size(); i++) 		 // ������ ��� ���� ���
		cout << v[i] << "  "; 	 	 // v[i]�� ������ i ��° ����
	cout << endl;

	v[0] = 123; 	 // ������ ù ��° ���Ҹ� 10���� ����
	int n = v[2]; 	 // n�� 300�� ����
	v.at(2) = 500; 	 // ������ 3��° ���Ҹ� 500���� ����, v[2] = 500;�� ����.

	for (int i = 0; i < v.size(); i++) // ������ ��� ���� ���
		cout << v[i] << "  "; // v[i]�� ������ i ��° ����
	cout << endl;
}