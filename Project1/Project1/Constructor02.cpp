#include <iostream>
using namespace std;
// Student 클래스 정의
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
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int nHakbun, const char* sName)
{
	this->nHakbun = nHakbun; // this는 현재 객체를 가리키는 포인터이다.  
	// Student student2(5678, "마리아"); 이문장에서 student2객체를 생성하는 것이기 떄문에
	// this는 현재개체인 student2를 의미한다.

	this->sName = sName;
}

void Student::show()
{
	cout << "학번은 " << this->nHakbun << "입니다." << endl;
	cout << "이름은 " << this->sName << "입니다." << endl;
}
int main()
{
	Student student1; 
	Student student2(5678,"마리아");

	student1.show();
	student2.show();

	return 0;
}