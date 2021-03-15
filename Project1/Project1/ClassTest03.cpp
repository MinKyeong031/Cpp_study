#include <iostream>
#include <string>
using namespace std;


class Person {
private:
	char* name = nullptr;
	int age;
public:
	Person() {
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(const char* name, int age) {
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		this->age = age;
	}
	void ShowPersonInfo() {
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Person parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		parr[i].SetPersonInfo(namestr, age);
	}
	for (int i = 0; i < 3; i++) {
		parr[i].ShowPersonInfo();
	}

	return 0;
}