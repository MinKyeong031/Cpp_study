#include <iostream>
#include <string>
using namespace std;

void person(int age = 20, int weight = 70, string name = "�̸���") {
	cout << name << " ���̴� " << age << "���̸� �����Դ� " << weight << "Kg�̴�." << endl;
}

void main() {
	person();
	person(15);
	person(15, 80);
	person(15, 80, "���̽���");
}