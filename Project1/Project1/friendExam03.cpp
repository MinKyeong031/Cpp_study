//#include <iostream>
//#include <string>
//using namespace std;
//
//class Credits;//Credits�� Ŭ������� �����Ѵ�.
//class Student {
//private:
//	string name;//�̸�
//	string major;//����(�а�)
//	string hakbun;//�й�
//public:
//	Student(string name, string major, string hakbun) {
//		this->name = name;
//		this->major = major;
//		this->hakbun = hakbun;
//	}
//	//Student Ŭ���� �ȿ��� printGrade(Student, Credits)�Լ����� ģ�����踦 ����
//	friend void printGrade(Student, Credits);
//};
//
//class Credits {
//	double grade;
//public:
//	Credits(double grade) {
//		this->grade = grade;
//	}
//	//Credits Ŭ���� �ȿ��� printGrade(Student, Credits)�Լ����� ģ�����踦 ����
//	friend void printGrade(Student, Credits);
//};
//
//void printGrade(Student &a, Credits &b) {
//	//main()�Լ��� �ִ� h�� g��ü�� �����̰�, printGrade()�� �ִ� a�� b ��ü�� ����
//	cout << "�̸� : " << a.name << endl;
//	cout << "�а� : " << a.major << endl;
//	cout << "�й� : " << a.hakbun << endl;
//	cout << "���� : " << b.grade << endl;
//}
//
//int main() {
//	Student h("HongGilDong", "��ǻ�Ͱ��к�", "20201234");
//	Credits g(4.4);
//	printGrade(h, g);
//	return 0;
//}