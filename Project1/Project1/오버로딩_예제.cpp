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
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등 록 되 었 습 니 다." << endl << endl;
}

Student::Student(int nHakbun, const char* sName)
{
	this->nHakbun = nHakbun;
	this->sName = sName;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

int main()
{
	Student student1;
	Student student2(5678, "마리아");
	
	student1.show();
	student2.show();
	return 0;
}