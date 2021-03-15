#include <iostream>
using namespace std;

class Student {
private:
	char* name;
	int age;
public:
	Student(const char* name, int age) :age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	Student& operator=(Student& ref) {
		delete[] name;//�� ������ ��� �ȴ�.
		name = new char[20];//heap������ �޸� �Ҵ�
		strcpy_s(name, 20, ref.name);
		//name�� str2�� ����� ��Ÿ����, ref.name������ ref�� st1��ü�� �����߱� ������
		//���⼭ name�� st1 ��ü�� ����̴�.

		return *this;
		//this�� ���� ��ü�� ����Ű�� �������̴�.
		//*this�� st2�� ���� ��ü�� ��Ÿ���� ������ ���� Ÿ���� Student& ���������� ǥ���ؾ� �Ѵ�.
	}
	~Student() {
		delete[] name;
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	Student st1("�̸���", 27);
	Student st2("���̽�����", 10);
	st2 = st1;
	st1.ShowInfo();
	st2.ShowInfo();

	return 0;
}