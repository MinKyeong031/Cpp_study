//#include <iostream>
//#include <string>
//using namespace std;
//
//class Credits;//Credits는 클래스라고 선언한다.
//class Student {
//private:
//	string name;//이름
//	string major;//전공(학과)
//	string hakbun;//학번
//public:
//	Student(string name, string major, string hakbun) {
//		this->name = name;
//		this->major = major;
//		this->hakbun = hakbun;
//	}
//	//Student 클래스 안에서 printGrade(Student, Credits)함수에게 친구관계를 맺음
//	friend void printGrade(Student, Credits);
//};
//
//class Credits {
//	double grade;
//public:
//	Credits(double grade) {
//		this->grade = grade;
//	}
//	//Credits 클래스 안에서 printGrade(Student, Credits)함수에게 친구관계를 맺음
//	friend void printGrade(Student, Credits);
//};
//
//void printGrade(Student &a, Credits &b) {
//	//main()함수에 있는 h와 g객체가 원본이고, printGrade()에 있는 a와 b 객체는 별명
//	cout << "이름 : " << a.name << endl;
//	cout << "학과 : " << a.major << endl;
//	cout << "학번 : " << a.hakbun << endl;
//	cout << "학점 : " << b.grade << endl;
//}
//
//int main() {
//	Student h("HongGilDong", "컴퓨터과학부", "20201234");
//	Credits g(4.4);
//	printGrade(h, g);
//	return 0;
//}