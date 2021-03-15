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
		//ton = 1000; -> 정적 함수는 정적 멤버 변수만 사용 가능
		return count;
	}
};

int Car::count = 0;

int main()
{
	Car car1;
	cout << "생성된 자동차의 수 : " << Car::getCount() << endl;//정적함수는 클래스 이름으로 접근 가능
	cout << "생성된 자동차의 수 : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << Car::getCount() << endl;
	cout << "생성된 자동차의 수 : " << car2.getCount() << endl;

	return 0;

}