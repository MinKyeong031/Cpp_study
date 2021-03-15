#include <iostream>
using namespace std;

class Student {
private:
	char* name;
	int age;
public:
	Student(const char* name, int age) :age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	Student& operator=(Student& ref) {
		delete[] name;//이 문장은 없어도 된다.
		name = new char[20];//heap영역에 메모리 할당
		strcpy_s(name, 20, ref.name);
		//name은 str2의 멤버를 나타내고, ref.name에서는 ref는 st1객체를 참조했기 때문에
		//여기서 name은 st1 객체의 멤버이다.

		return *this;
		//this는 현재 객체를 가리키는 포인터이다.
		//*this는 st2와 같은 객체를 나타내기 때문에 리턴 타입은 Student& 참조형으로 표현해야 한다.
	}
	~Student() {
		delete[] name;
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	Student st1("미림인", 27);
	Student st2("마이스터인", 10);
	st2 = st1;
	st1.ShowInfo();
	st2.ShowInfo();

	return 0;
}