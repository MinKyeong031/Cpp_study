#include <iostream>
using namespace std;
// Student Ŭ���� ����
class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student() 
	{
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	void show() 
	{
		cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << sName << "�Դϴ�." << endl;
	}
};

int main() 
{
	Student student1; //Ŭ���� ���� ����(��ü ����)
	student1.show();
	return 0;
}