#include <iostream>
using namespace std;

class Student {
private:
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

void Student::PrintStudent() const//-> 멤버변수의 값을 변경하지 마시오.
{
	//m_Score = 100; -> 모든 멤버 변수를 변경할 수 없다.
	//프로그래머의 실수로 멤버 변수의 값을 변경할 경우에 오류를 유발시키기 위함
	cout << "학생 번호 : " << m_Number << endl;
	cout << "학생 이름 : " << m_Number << endl;
	cout << "학생 점수 : " << m_Number << endl;
}

void Student::SetName(const char* name)
{
	m_Name = name;
}
