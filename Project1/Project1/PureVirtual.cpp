#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}
	//순수 가상 함수의 선언
	virtual void SoundApeak() = 0;
	virtual void EatDiets(const char* eat) const = 0;
};

class Dog :public Animal {
public:
	//기초(상위)클래스에서 선언된 순수 가상 함수는 반드시 파생(하위)클래스에서
	//반드시 구현해야 한다.
	virtual void SoundApeak() {
		cout << "개소리 멍멍" << "   ";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}
};

class Cat :public Animal {
public:
	//Cat과 Animal 클래스는 상속관계이기 때문에 반드시 재정의해야 한다.
	virtual void SoundApeak() {
		cout << "고양이 야옹" << "   ";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}
};

int main() {
	Dog dog;
	dog.SoundApeak();
	dog.EatDiets("개 사료");

	Cat cat;
	cat.SoundApeak();
	cat.EatDiets("고양이 사료");

	return 0;
}