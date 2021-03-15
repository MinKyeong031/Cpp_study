#include <iostream>
using namespace std;

class Student {
	private:
		int nHakbun;
		const char* sName;//const : 상수, * : 주소 사용하기 위해 포인터 사용 => 주소를 고정
	public:
		Student();
		void show();
};

//Student 클래스의 생성자(멤버함수) 정의
Student::Student()
{
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

//Student 클래스 멤버 함수 정의
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}

int main()
{
	Student student1;//클래스 변수 선언(객체 선언)
	student1.show();
	return 0;
}