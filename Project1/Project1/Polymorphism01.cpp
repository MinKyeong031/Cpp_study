#include <iostream>
using namespace std;

class Ride {
public:
	void rideFunc() {
		cout << "타다" << endl;
	}
};

class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

class AirRide :public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main() {
	Ride* r1 = new BusRide();//r1은 Ride클래스를 가리키는 객체 포인터 변수
	//파생(자식)클래스인 BusRide로 형변환
	r1->rideFunc();//r1은 하위(파생)클래스인 BusRide의 rideFunc()함수에 접근할 수 있다.
	//그러나 여기에는 기초(부모)클래스인 Ride의 rideFunc()함수를 호출한다.
	r1->age = 100;//객체간의 형변환의 목적은 상위클래스를 가리키는 객체변수가
	//하위클래스에서 재정의 된 함수에만 접근하는 것이다.
	Ride* r2 = new AirRide();
	r2->rideFunc();
	

	return 0;
}