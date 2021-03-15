#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	void ShowPerson() {
		cout << name << "�� ���̴� " << age << "�Դϴ�." << endl;
	}
};

class Student :public Person {
private:
	int id;
public:
	Student(int id, const string& name, int age) :Person(name, age) {
	//Person(name,age)�� ����Ŭ������ Person �� �Ű����� 2���� ������ �ִ� �����ڸ� ȣ���Ѵ�.
		this->id = id;
	}
};

int main() {
	Student student(1234, "ȫ�浿", 33);//student ��ü ������ �����ڸ� ȣ���ϴ� ��
	//Student Ŭ������ Person Ŭ������ ��Ӱ����̱� ������ ���� Ŭ������(�θ� Ŭ����)
	//Person Ŭ������ �����ڸ� ���� ������ �Ŀ� ���� Ŭ������(�Ļ� Ŭ����)�� �����ڸ� �����Ѵ�.
	//���� Ŭ�������� �����ڰ� ���� ��� �����Ϸ��� �⺻ �����ڸ� �ڵ����� ������ְ�, 
	//�⺻ �����ڸ� ���� ������ �Ŀ� �Ļ�
	student.ShowPerson();
	//ShowPerson()�Լ��� ���� Ŭ������ ���������� ����� �޾ұ� ������ �� �Լ��� ȣ���� �� �ִ�.

	return 0;
}