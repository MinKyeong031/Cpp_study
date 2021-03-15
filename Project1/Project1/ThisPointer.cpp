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

	//여기서 this의 의미는 student 객체를 가리키는 포인터이다.
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
	Student student;//객체 생성, 생성자 호출 되면서 멤버변수 초기화
	cout << "학년 : " << student.getGrade() << ", 반 : " << student.getBan();
	student.setGrade(2);//멤버변수(grade)의 값을 변경
	student.setBan(7);//멤버변수(ban)의 값을 변경
	cout << endl;
	cout << "학년 : " << student.getGrade() << ", 반 : " << student.getBan();

	return 0;
}