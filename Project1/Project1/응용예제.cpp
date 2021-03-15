#include <iostream>
using namespace std;

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
	nHakbun = 2104;
	sName = "김민경";
	cout << "학번이 등록되었습니다." << endl << endl;
}

Student::Student(int nHakbun, const char* sName)
{
	this->nHakbun = nHakbun;
	this->sName = sName;
	cout << "학번은 " << nHakbun << "입니다. ";
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다. ";
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

int main()
{
	Student students[3] = {
		Student(),
		Student(4567, "하와"),
		Student(9876, "아담")
	};

	for (int i = 0; i < 3; i++) {
		students[i].show();
	}

	return 0;
}