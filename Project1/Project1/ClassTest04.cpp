#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	char* name = nullptr;
	int age;
public:
	Person(char* myname, int myage) {
		int len;
		len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void SetPersonInfo(char* myname, int myage) {
		int len;
		len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowPersonInfo() {
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
	~Person() {
		cout << "called destructor!" << endl;
		delete[] name;
	}
};

int main(void) {
	Person *parr[3];//Person 객체를 가리키는 포인터 배열
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		parr[i] = new Person(namestr, age);//heap 영역에 메모리 할당
	}
	for (int i = 0; i < 3; i++) {
		parr[i]->ShowPersonInfo();
	}

	//포인터 배열에서 new 연산자를 이용해 heap 메모릴를 할당한 경우에
	//반드시 객체가 생성된 만큼 delete해주어야 한다.
	for (int i = 0; i < 3; i++) {
		delete parr[i];
	}
	//delete[] parr; -> 오류발생

	return 0;
}