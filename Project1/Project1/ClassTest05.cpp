#include <iostream>
#include <string>
using namespace std;

class Person {
	char* name = nullptr;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << ", ";
		cout << "���� : " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor !!" << endl;
	}
};
int main()
{
	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		// �Ű����� 2���� ���� ������ ȣ��
		parr[i] = new Person(namestr, age); // heap������ �޸� �Ҵ�
	}
	for (int i = 0; i < 3; i++)
		parr[i]->ShowPersonInfo();
	    // parr[]�� Person ��ü�� ����Ű�� ������ �����̱� ������ ->����
	    // ��������� ����Լ��� �����Ѵ�.

	return 0;
}
