#include <iostream>
using namespace std;

class Cat {
private:
	//멤버변수에 메모리를 동적으로 할당
	int* pAge = new int;
	const char* pName = new char;

public:
	Cat() {
		*pAge = 18;
		pName = "야옹이";
	}
	~Cat() {
		//소멸자에 멤버변수를 삭제하는 문장을 기술한다.
		delete pAge;
		delete pName;
	}

	int getAge() {
		return *pAge;
	}
	void setAge(int age) {
		*pAge = age;
	}

	char* getName() {
		return (char*)pName;
	}
	void setName(const char* name) {
		pName = name;
	}
};


int main()
{
	//pCat은 heap영역에 Cat클래스 크기의 객체를 가리키는 포인터변수이다.
	Cat* pCat = new Cat;

	//(*pCat).getAge()에서 (*pCat)는 Cat클래스의 객체변수처럼 사용할 수 있다.
	cout << "고양이의 나이 : " << (*pCat).getAge() << ", 고양이의 이름 : " << pCat->getName() << endl;

	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << (*pCat).getAge() << ", 고양이의 이름 : " << pCat->getName() << endl;

	return 0;
}