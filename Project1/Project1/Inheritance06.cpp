#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	int height, weight;
public:
	Animal() { cout << "Animal() ������" << endl; }
	Animal(int weight2, int height2) :weight(weight2), height(height2) {
		cout << "Animal(int weight2, int height2)" << endl;
	}
	~Animal() { cout << "~Animal() �Ҹ���" << endl; }
};

class Dog :public Animal {
private:
	int price, volume;
public:
	// :Animal(we1, he1)�� ���� Ŭ������ �Ű� ���� 2���� ������ �ִ� ������ ȣ��
	// ���� �������� ������ ���� ���� ���� Ŭ������ Dog �����ڸ� �����Ѵ�.
	//��� ���迡�� ��ü ������ ������ ���� Ŭ������ ��ü�� ���� �����ǰ� ���߿�
	// ���� Ŭ������ ��ü�� �����ȴ�.
	Dog(int we1, int he1, int pr1, int vo1) :Animal(we1, he1) {
		price = pr1;
		volume = vo1;
		cout << "Dog(int we1, int he1, int pr1, int vo1) ������" << endl;
	}
	~Dog() { cout << "~Dog() �Ҹ���" << endl; }
};

int main() {
	Dog dog(30, 40, 90, 2000);

	return 0;
	//���α׷� ���� �� ���� Ŭ������ �Ҹ��ڰ� ���� ���� �ǰ�
	//���߿� ���� Ŭ������ �Ҹ��ڰ� ����ȴ�.
	//���α׷� ���� �� ���� Ŭ������ ��ü�� ���� �Ҹ�ǰ� ���߿� ���� Ŭ������ ��ü�� �Ҹ�ȴ�.
}