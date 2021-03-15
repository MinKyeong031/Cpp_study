#include <iostream>
using namespace std;

class Car {
private:
	int ton;
	int price;
public:
	static int count;
	Car()
	{
		ton = 0;
		price = 1000;
		count++;
	}
	Car(int ton, int price) {
		this->ton = ton;
		this->price = price;
		count++;
	}
	static int getCount() {
		//ton = 1000; -> ���� �Լ��� ���� ��� ������ ��� ����
		return count;
	}
};

int Car::count = 0;

int main()
{
	Car car1;
	cout << "������ �ڵ����� �� : " << Car::getCount() << endl;//�����Լ��� Ŭ���� �̸����� ���� ����
	cout << "������ �ڵ����� �� : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << Car::getCount() << endl;
	cout << "������ �ڵ����� �� : " << car2.getCount() << endl;

	return 0;

}