#include <iostream>
using namespace std;

class Car {
private:
	int ton;
	int price;

public:
	static int count;// 전역변수 개념이고, 모든 각체에서 사용가능 하다.
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
		// price = price + ton;--- 멤버변수는 정적함수안에서 사용불가
		return count; // 정적변수
	}
};

int Car::count = 0;
int main()
{
	Car car1;

	// 정적멤버 함수에 접근할때도 클래스 이름이나 객체이름으로 접근이 가능하다.
	cout << " 생성된 자동차의 수 : " << car1.getCount() << endl;
	cout << " 생성된 자동차의 수 : " << Car::getCount() << endl;

	Car car2(10, 3000);

	cout << " 생성된 자동차의 수 : " << car2.getCount() << endl;
	cout << " 생성된 자동차의 수 : " << Car::getCount() << endl;


	return 0;
}




