#include <iostream>
#include <string>
using namespace std;

void person(int age = 20, int weight = 70, string name = "미림인") {
	cout << name << " 나이는 " << age << "세이며 몸무게는 " << weight << "Kg이다." << endl;
}

void main() {
	person();
	person(15);
	person(15, 80);
	person(15, 80, "마이스터");
}