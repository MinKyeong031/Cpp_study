#include <iostream>
using namespace std;

class Student {
private:
	int grade;
	int ban;
public:
	Student() {
		grade = 3;
		ban = 8;
	}
	~Student() {}

	//���⼭ this�� �ǹ̴� student ��ü�� ����Ű�� �������̴�.
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}
	void setBan(int ban) {
		this->ban = ban;
	}
	int getBan() {
		return ban;
	}
};


int main()
{
	Student student;//��ü ����, ������ ȣ�� �Ǹ鼭 ������� �ʱ�ȭ
	cout << "�г� : " << student.getGrade() << ", �� : " << student.getBan();
	student.setGrade(2);//�������(grade)�� ���� ����
	student.setBan(7);//�������(ban)�� ���� ����
	cout << endl;
	cout << "�г� : " << student.getGrade() << ", �� : " << student.getBan();

	return 0;
}