#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}
	//���� ���� �Լ��� ����
	virtual void SoundApeak() = 0;
	virtual void EatDiets(const char* eat) const = 0;
};

class Dog :public Animal {
public:
	//����(����)Ŭ�������� ����� ���� ���� �Լ��� �ݵ�� �Ļ�(����)Ŭ��������
	//�ݵ�� �����ؾ� �Ѵ�.
	virtual void SoundApeak() {
		cout << "���Ҹ� �۸�" << "   ";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}
};

class Cat :public Animal {
public:
	//Cat�� Animal Ŭ������ ��Ӱ����̱� ������ �ݵ�� �������ؾ� �Ѵ�.
	virtual void SoundApeak() {
		cout << "����� �߿�" << "   ";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}
};

int main() {
	Dog dog;
	dog.SoundApeak();
	dog.EatDiets("�� ���");

	Cat cat;
	cat.SoundApeak();
	cat.EatDiets("����� ���");

	return 0;
}