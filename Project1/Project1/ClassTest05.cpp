#include <iostream>
#include <string>
using namespace std;

class Person {
	char* name = nullptr;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor !!" << endl;
	}
};
int main()
{
	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		// 매개변수 2개를 갖는 생성자 호출
		parr[i] = new Person(namestr, age); // heap영역에 메모리 할당
	}
	for (int i = 0; i < 3; i++)
		parr[i]->ShowPersonInfo();
	    // parr[]이 Person 객체를 가리키는 포인터 변수이기 때문에 ->으로
	    // 멤버변수나 멤버함수에 접근한다.

	return 0;
}
