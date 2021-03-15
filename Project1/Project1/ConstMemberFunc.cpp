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

void Student::PrintStudent() const { // const �ǹ̴� �Լ��ȿ��� ��������� �������� ���� 
	// m_Score = 100; --- ��������� �����ϸ� ������ �߻��ȴ�.
	// ������ �ִ� �����ڵ��� �̷��� ���� ����Ѵ�.

	cout << "�л���ȣ : " << m_Number << endl;
	cout << "�л� �̸� : " << m_Name << endl;
	cout << "�л����� : " << m_Score << endl;
}

void Student::SetName(const char* name) {
	m_Name = name;
}

