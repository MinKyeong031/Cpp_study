#include <iostream>
using namespace std;

class SuperClass {
private:
	char* str;
public:
	SuperClass(const char* str) {
		this->str = new char[strlen(str) + 1];//heap 영역에 메모리 생성
	}
	~SuperClass() {
		cout << "~SuperClass() 소멸자" << endl;
		delete[] str;
	}
};

class SubClass :public SuperClass {
private:
	char* str;
public:
	SubClass(const char* str1, const char* str2) :SuperClass(str1) {
		this->str = new char[strlen(str2) + 1];//heap 영역에 메모리 생성
	}
	~SubClass() {
		cout << "~SubClass() 소멸자" << endl;
		delete[] str;
	}
};

int main() {
	SuperClass* ptr = new SubClass("SuperClass", "SubClass");
	delete ptr;//ptr 객체가 소멸될 때 소멸자를 호출하는데
	//객체 생성의 역순으로 소멸자가 호출된다.
	//따라서 SubClass의 소멸자 호출, 그 다음에 SuperClass의 소멸자 호출
	//되는 것이 원칙이지만 형변환을 했을 경우에는 상위 클래스의 소멸자 앞에
	//virtual 키워드를 사용해야한다.

	return 0;
}