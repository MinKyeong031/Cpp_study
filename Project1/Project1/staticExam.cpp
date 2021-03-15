#include <iostream>
using namespace std;

class Car {
private:
	int ton, price;

public:
	static int count;// 전역변수 개념이고, 모든 각체에서 사용가능 하다.
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}
	~Car() {
		cout << "count : " << count << endl;
		count--;
	}
};

int Car::count = 0;
int main()
{
	Car car1;
	//cout << " 생성된 자동차의 수 : " << Car::count << endl;
	// ---클래스 이름으로 정적 멤버 변수에 접근
	cout << " 생성된 자동차의 수 : " << car1.count << endl;
	// 객체 이름으로 정적 멤버변수(count)에 접근 

	Car car2(10, 3000);
	// cout << " 생성된 자동차의 수 : " << Car::count << endl;
	cout << " 생성된 자동차의 수 : " << car2.count << endl;


	return 0;
}




