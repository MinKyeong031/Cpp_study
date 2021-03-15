#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;

public:
	Cat() {
		age = 18;
		name = "야옹이";
	}
	~Cat() {}
	
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	
	char* getName() {
		return (char*)name;
	}
	void setName(const char* name) {
		this->name = name;
	}
};


int main()
{
	//pCat은 heap영역에 Cat클래스 크기의 객체를 가리키는 포인터변수이다.
	Cat* pCat = new Cat;
	
	//pCat은 Cat객체의 멤버에 접근할 때는 "->" 기호를 사용한다.
	cout << "고양이의 나이 : " << pCat->getAge() << ", 고양이의 이름 : " << pCat->getName() << endl;
	
	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << pCat->getAge() << ", 고양이의 이름 : " << pCat->getName() << endl;

	delete pCat;

	return 0;
}