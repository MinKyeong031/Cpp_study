#include <iostream>
using namespace std;

class Car {
private:
	int ton;
	int price;
public:
	static int count;//���������� �����ϰ�, �� ������ �ʱⰪ�� Ŭ���� �ܺο��� ����
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
	~Car() {
		cout << "count : " << count << endl;
		count--;
	}
};

int Car::count = 0;//���������� �ʱⰪ ����

int main()
{
	Car car1;
	//cout << "������ �ڵ����� �� : " << Car::count << endl;//���������� Ŭ���� �̸����� ���� ����
	cout << "������ �ڵ����� �� : " << car1.count << endl;//��ü�̸����� ���� ����
	Car car2(10, 3000);
	//cout << "������ �ڵ����� �� : " << Car::count << endl;
	cout << "������ �ڵ����� �� : " << car2.count << endl;

	return 0;

}