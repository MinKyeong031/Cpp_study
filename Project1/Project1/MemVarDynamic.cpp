#include <iostream>
using namespace std;

class Cat {
private:
	int* pAge = new int;
	const char* pName = new char;
public:
	Cat() {
		*pAge = 18;
		pName = "야옹이";
	}
	~Cat() { // pAge와 pName이 가리키는 메모리(heap)를 
		//삭제한다
		delete pAge;
		delete pName;
	}
	// setter, getter 함수들 정의
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char* getName() { return (char*)pName; }
	void setName(const char* name) {
		pName = name;
	}
};

int main()
{
	Cat* pCat = new Cat;

	cout << "고양이의 나이 : " << pCat->getAge() <<
		", 고양이의 이름 : " << pCat->getName() << endl;

	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << pCat->getAge() <<
		", 고양이의 이름 : " << pCat->getName() << endl;

	// delete pCat; --- 멤버변수가 동적으로 메모리를 할당
	// 받을 때는 멤버 변수로 별로 메모리를 삭제한다.
	// main() 함수종료시 소멸자가 호출된다. 
	return 0;
}