#include <iostream>
using namespace std;

class Person {
public:
	void PrintMethod() {
		cout << "Person's Function" << endl;
	}
};

class Student :public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();//Person Ŭ������ �ִ� PrintMethod() �Լ��� ȣ���Ѵ�.
		cout << "Child Function" << endl;
	}
};

int main() {
	Student student;//��ü ���� �� �����ڸ� ȣ���ؾ� �ϴµ� �����ڰ� ������
	//�����Ϸ��� �⺻ �����ڸ� �ڵ����� ������ش�.

	student.PrintMethod();//

	return 0;
}