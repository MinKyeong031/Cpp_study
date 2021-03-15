#include <iostream>
using namespace std;
// Student 클래스 정의
class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student() 
	{
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;
	}

	void show() 
	{
		cout << "학번은 " << nHakbun << "입니다." << endl;
		cout << "이름은 " << sName << "입니다." << endl;
	}
};

int main() 
{
	Student student1; //클래스 변수 선언(객체 선언)
	student1.show();
	return 0;
}