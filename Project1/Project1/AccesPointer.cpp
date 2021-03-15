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
	// setter, getter 함수들 정의
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char* getName() { return (char*)name; }
	void setName(const char* name) {
		this->name = name;
	}
};
int main()
{
	Cat* pCat = new Cat;

	// 객체를 가리키는 포인터 변수는 멤버변수나 멤버함수에 접근할떄
	// ->를 이용해서 접근한다.
/*	cout << "고양이의 나이 : " << pCat->getAge() <<
		", 고양이의 이름 : " << pCat->getName() << endl;
*/
	cout << "고양이의 나이 : " << (*pCat).getAge() <<
		", 고양이의 이름 : " << (*pCat).getName() << endl;


	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << pCat->getAge() <<
		", 고양이의 이름 : " << pCat->getName() << endl;

	delete pCat;

	return 0;
}