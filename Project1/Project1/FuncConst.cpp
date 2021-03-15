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

void Student::PrintStudent() const//-> ��������� ���� �������� ���ÿ�.
{
	//m_Score = 100; -> ��� ��� ������ ������ �� ����.
	//���α׷����� �Ǽ��� ��� ������ ���� ������ ��쿡 ������ ���߽�Ű�� ����
	cout << "�л� ��ȣ : " << m_Number << endl;
	cout << "�л� �̸� : " << m_Number << endl;
	cout << "�л� ���� : " << m_Number << endl;
}

void Student::SetName(const char* name)
{
	m_Name = name;
}
