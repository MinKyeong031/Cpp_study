#include <iostream>
#include <string>
using namespace std;

class Animal {
	int weight, height;
public:
	Animal() {
		cout << "Animal 持失切()" << endl;
	}
	Animal(int weight2, int height2) : weight(weight2), height(height2){
		cout << "Animal 持失切(int weight2, int height2)" << endl;
	}
	~Animal() {
		cout << "~Animal 社瑚切()" << endl;
	}
};

class Dog :public Animal {
	int price, volume;
public:
	Dog(int we1, int he1, int pr1, int vo1) :Animal(we1, he1){
		price = pr1;
		volume = vo1;
		cout << "Dog 持失切(int we1, int he1, int pr1, int vo1)" << endl;
	}
	~Dog() {
		cout << "~Dog 社瑚切()" << endl;
	}
};

int main() {
	Dog dog(30, 40, 90, 2000);

	return 0;
}