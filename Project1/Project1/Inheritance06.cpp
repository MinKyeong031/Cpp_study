#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	int height, weight;
public:
	Animal() { cout << "Animal() 생성자" << endl; }
	Animal(int weight2, int height2) :weight(weight2), height(height2) {
		cout << "Animal(int weight2, int height2)" << endl;
	}
	~Animal() { cout << "~Animal() 소멸자" << endl; }
};

class Dog :public Animal {
private:
	int price, volume;
public:
	// :Animal(we1, he1)은 상위 클래스의 매개 변수 2개를 가지고 있는 생성자 호출
	// 상위 생성자의 샐행이 끝이 나면 하위 클래스인 Dog 생성자를 실행한다.
	//상속 관계에서 객체 생성의 순서는 상위 클래스의 객체가 먼저 생성되고 나중에
	// 하위 클래스의 객체가 생성된다.
	Dog(int we1, int he1, int pr1, int vo1) :Animal(we1, he1) {
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1, int he1, int pr1, int vo1) 생성자" << endl;
	}
	~Dog() { cout << "~Dog() 소멸자" << endl; }
};

int main() {
	Dog dog(30, 40, 90, 2000);

	return 0;
	//프로그램 종료 시 하위 클래스의 소멸자가 먼저 실행 되고
	//나중에 상위 클래스의 소멸자가 실행된다.
	//프로그램 종료 시 하위 클래스의 객체가 먼저 소멸되고 나중에 상위 클래스의 객체가 소멸된다.
}