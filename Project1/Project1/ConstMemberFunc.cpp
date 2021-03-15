#include <iostream>
using namespace std;

class Student {
private :
	const int m_Number;
	const char* m_Name;
	int m_Score;
public:
	Student();
	Student(const char* name, int score);
	~Student();

	void PrintStudent() const;
	void SetName(const char* name);
};

void Student::PrintStudent() const { // const 의미는 함수안에서 멤버변수를 수정하지 마라 
	// m_Score = 100; --- 멤버변수를 수정하면 오류가 발생된다.
	// 현업에 있는 개발자들은 이렇게 많이 사용한다.

	cout << "학생번호 : " << m_Number << endl;
	cout << "학생 이름 : " << m_Name << endl;
	cout << "학생점수 : " << m_Score << endl;
}

void Student::SetName(const char* name) {
	m_Name = name;
}

