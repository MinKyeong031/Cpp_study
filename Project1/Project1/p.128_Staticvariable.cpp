#include <iostream>
using namespace std;

class Car {
private:
	int ton;
	int price;
public:
	static int count;//정적변수로 선언하고, 이 변수의 초기값은 클래스 외부에서 설정
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

int Car::count = 0;//정적변수의 초기값 설정

int main()
{
	Car car1;
	//cout << "생성된 자동차의 수 : " << Car::count << endl;//정적변수는 클래스 이름으로 접근 가능
	cout << "생성된 자동차의 수 : " << car1.count << endl;//객체이름으로 접근 가능
	Car car2(10, 3000);
	//cout << "생성된 자동차의 수 : " << Car::count << endl;
	cout << "생성된 자동차의 수 : " << car2.count << endl;

	return 0;

}