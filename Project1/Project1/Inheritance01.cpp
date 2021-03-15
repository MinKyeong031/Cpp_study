#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다." << endl;
	}
};

class Student :public Person {
private:
	int id;
public:
	Student(int id, const string& name, int age) :Person(name, age) {
	//Person(name,age)은 기초클래스인 Person 의 매개변수 2개를 가지고 있는 생성자를 호출한다.
		this->id = id;
	}
};

int main() {
	Student student(1234, "홍길동", 33);//student 객체 생성시 생성자를 호출하는 데
	//Student 클래스와 Person 클래스는 상속관계이기 때문에 기초 클래스인(부모 클래스)
	//Person 클래스의 생성자를 먼저 실행한 후에 하위 클래스인(파생 클래스)의 생성자를 실행한다.
	//기초 클래스에서 생성자가 없을 경우 컴파일러가 기본 생성자를 자동으로 만들어주고, 
	//기본 생성자를 먼저 실행한 후에 파생
	student.ShowPerson();
	//ShowPerson()함수는 상위 클래스에 존재하지만 상속을 받았기 때문에 이 함수를 호출할 수 있다.

	return 0;
}