#include <iostream>
using namespace std;

class Car {
private:
	int ton;
	int price;

public:
	static int count;// �������� �����̰�, ��� ��ü���� ��밡�� �ϴ�.
	Car() {
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
		// price = price + ton;--- ��������� �����Լ��ȿ��� ���Ұ�
		return count; // ��������
	}
};

int Car::count = 0;
int main()
{
	Car car1;

	// ������� �Լ��� �����Ҷ��� Ŭ���� �̸��̳� ��ü�̸����� ������ �����ϴ�.
	cout << " ������ �ڵ����� �� : " << car1.getCount() << endl;
	cout << " ������ �ڵ����� �� : " << Car::getCount() << endl;

	Car car2(10, 3000);

	cout << " ������ �ڵ����� �� : " << car2.getCount() << endl;
	cout << " ������ �ڵ����� �� : " << Car::getCount() << endl;


	return 0;
}




