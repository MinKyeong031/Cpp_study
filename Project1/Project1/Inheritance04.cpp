#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;
public:
	Animal() {
		cout << "Animal ������()" << endl;
	}
	~Animal() {
		cout << "~Animal �Ҹ���()" << endl;
	}
};

class Dog :public Animal {
	int height;
public:
	Dog() {
		cout << "Dog ������()" << endl;
	}
	~Dog() {
		cout << "~Dog �Ҹ���()" << endl;
	}
};

int main() {
	Dog dog;//dog��ü�� ������ �� �����ڸ� ������ �� ���� Ŭ������ �����ڸ�
	//���� �����ϰ� �Ļ� Ŭ������ �����ڸ� ���߿� �����Ѵ�.

	return 0;
	//���α׷��� ����� �� ��Ӱ��迡 �ִ� Ŭ������ ��쿡�� �Ļ� Ŭ������ 
	//�Ҹ��ڰ� ���� ȣ��ǰ�, ���� Ŭ������ �Ҹ��ڰ� ���߿� ȣ��ȴ�.
}