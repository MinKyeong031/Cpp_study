#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	vector<string> v1;	 // ���͸� �����Ѵ�.
	//v1���Ϳ� ������ �����ʹ� ���ڿ��̴�.

	v1.push_back("Mirim");	 // ������ ���� �ڷḦ �����Ѵ�., v1[9] = "Mirim";
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	for (auto e : v1) {//e�� v1�� ������ Ÿ�Կ� ���� �ڷ����� �����ȴ�.
		//e�� v1��ü�� ������ ������� ��ü�����̴�.
		//�׷��� �޸� ���� �ִ�.
		cout << e << endl;
	}
	cout << endl;

	for (auto& e1 : v1) {
		//e1�� v1��ü�� �����ϴ� ��ü�����̴�.
		//���� e1�� v1��ü�� ����Ǿ� �ִ� �����͸� ���������� ����Ѵ�.	
		cout << e1 << endl;
	}
	cout << endl;
	return 0;
}