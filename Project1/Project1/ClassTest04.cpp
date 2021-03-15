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
		cout << "�̸� : " << name << ", ���� : " << age << endl;
	}
	~Person() {
		cout << "called destructor!" << endl;
		delete[] name;
	}
};

int main(void) {
	Person *parr[3];//Person ��ü�� ����Ű�� ������ �迭
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		parr[i] = new Person(namestr, age);//heap ������ �޸� �Ҵ�
	}
	for (int i = 0; i < 3; i++) {
		parr[i]->ShowPersonInfo();
	}

	//������ �迭���� new �����ڸ� �̿��� heap �޸𸱸� �Ҵ��� ��쿡
	//�ݵ�� ��ü�� ������ ��ŭ delete���־�� �Ѵ�.
	for (int i = 0; i < 3; i++) {
		delete parr[i];
	}
	//delete[] parr; -> �����߻�

	return 0;
}