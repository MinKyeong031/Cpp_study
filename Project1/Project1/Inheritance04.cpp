#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;
public:
	Animal() {
		cout << "Animal 생성자()" << endl;
	}
	~Animal() {
		cout << "~Animal 소멸자()" << endl;
	}
};

class Dog :public Animal {
	int height;
public:
	Dog() {
		cout << "Dog 생성자()" << endl;
	}
	~Dog() {
		cout << "~Dog 소멸자()" << endl;
	}
};

int main() {
	Dog dog;//dog객체가 생성될 때 생성자를 실행할 때 기초 클래스의 생성자를
	//먼저 실행하고 파생 클래스의 생성자를 나중에 실행한다.

	return 0;
	//프로그램이 종료될 때 상속관계에 있는 클래스인 경우에는 파생 클래스의 
	//소멸자가 먼저 호출되고, 기초 클래스의 소멸자가 나중에 호출된다.
}