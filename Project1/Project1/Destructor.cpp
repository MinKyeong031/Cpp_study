#include <iostream>
using namespace std;

class Student {
private:
	char* name;
	int age;

public:
	Student(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowStudentInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl << endl;
	}

	~Student() {
		delete[]name;//name이 가리키는 모든 배열 공간을 삭제한다.
		//delete name; -> name이 가리키는 첫번째 공간만 삭제
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Student student1("lee mee rim", 33);
	Student student2("hong gil dong", 34);

	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0;
}