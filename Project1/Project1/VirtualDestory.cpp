#include <iostream>
using namespace std;

class SuperClass {
private:
	char* str;
public:
	SuperClass(const char* str) {
		this->str = new char[strlen(str) + 1];//heap ������ �޸� ����
	}
	~SuperClass() {
		cout << "~SuperClass() �Ҹ���" << endl;
		delete[] str;
	}
};

class SubClass :public SuperClass {
private:
	char* str;
public:
	SubClass(const char* str1, const char* str2) :SuperClass(str1) {
		this->str = new char[strlen(str2) + 1];//heap ������ �޸� ����
	}
	~SubClass() {
		cout << "~SubClass() �Ҹ���" << endl;
		delete[] str;
	}
};

int main() {
	SuperClass* ptr = new SubClass("SuperClass", "SubClass");
	delete ptr;//ptr ��ü�� �Ҹ�� �� �Ҹ��ڸ� ȣ���ϴµ�
	//��ü ������ �������� �Ҹ��ڰ� ȣ��ȴ�.
	//���� SubClass�� �Ҹ��� ȣ��, �� ������ SuperClass�� �Ҹ��� ȣ��
	//�Ǵ� ���� ��Ģ������ ����ȯ�� ���� ��쿡�� ���� Ŭ������ �Ҹ��� �տ�
	//virtual Ű���带 ����ؾ��Ѵ�.

	return 0;
}