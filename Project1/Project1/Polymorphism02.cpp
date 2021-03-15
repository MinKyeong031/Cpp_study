#include <iostream>
using namespace std;

class Ride {
public:
	//가상함수로 정의함
	virtual void rideFunc() {
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
	Ride* r1 = new BusRide();//r1이 Ride클래스 객체 포인터 변수이지만
	//하위(파생)클래스 BusRide()로 형변환(포인팅)했다. 그리고 기초 클래스의 멤버함수인
	//rideFunc()함수 앞에 virtual을 붙이면 가상함수가 된다.
	r1->rideFunc();//BusRide클래스의 rideFunc()함수를 호출한다.
	r1->age = 100;
	//r1->age = 100; -> age는 멤버변수이기 때문에 여기에 적용되지 않는다.
	Ride* r2 = new AirRide();//r2이 Ride클래스 객체 포인터 변수이지만
	//하위(파생)클래스 AirRide()로 형변환(포인팅)했다. 그리고 기초 클래스의 멤버함수인
	//rideFunc()함수 앞에 virtual을 붙이면 가상함수가 된다.
	r2->rideFunc();//AirRide클래스의 rideFunc()함수를 호출한다.


	return 0;
}