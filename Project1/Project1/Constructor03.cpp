#include <iostream>
using namespace std;
// Student Ŭ���� ����
class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student();
	Student(int, const char*);
	void show();
};

Student::Student()
{
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int nHakbun, const char* sName)
{
	this->nHakbun = nHakbun; // this�� ���� ��ü�� ����Ű�� �������̴�.  
	// Student student2(5678, "������"); �̹��忡�� student2��ü�� �����ϴ� ���̱� ������
	// this�� ���簳ü�� student2�� �ǹ��Ѵ�.

	this->sName = sName;
}

void Student::show()
{
	cout << "�й��� " << this->nHakbun << "�Դϴ�.  ";
	cout << "�̸��� " << this->sName << "�Դϴ�." << endl;
}
int main()
{
	Student students[3] = {
		Student(),
		Student(4567,"�Ͽ�"),
		Student(9876,"�ƴ�")
	};

	for (int i = 0; i < 3; i++)
		students[i].show();

	return 0;
}