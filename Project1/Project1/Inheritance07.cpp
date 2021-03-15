#include <iostream>
using namespace std;

class Person {
public:
	void PrintMethod() {
		cout << "Person's Function" << endl;
	}
};

class Student :public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();//Person 클래스에 있는 PrintMethod() 함수를 호출한다.
		cout << "Child Function" << endl;
	}
};

int main() {
	Student student;//객체 생성 시 생성자를 호출해야 하는데 생성자가 없으면
	//컴파일러가 기본 생성자를 자동으로 만들어준다.

	student.PrintMethod();//

	return 0;
}