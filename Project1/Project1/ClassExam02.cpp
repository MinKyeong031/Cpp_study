#include <iostream>
using namespace std;

class Student {
	private:
		int nHakbun;
		const char* sName;//const : ���, * : �ּ� ����ϱ� ���� ������ ��� => �ּҸ� ����
	public:
		Student();
		void show();
};

//Student Ŭ������ ������(����Լ�) ����
Student::Student()
{
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

//Student Ŭ���� ��� �Լ� ����
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main()
{
	Student student1;//Ŭ���� ���� ����(��ü ����)
	student1.show();
	return 0;
}