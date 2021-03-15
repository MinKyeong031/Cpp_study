#include <iostream>
using namespace std;

class Ride {
public:
	//가상함수로 정의함
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
	//일반함수
	void rideFunc2() {
		cout << "날다" << endl;
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
	BusRide br1;//br1은 BusRide를 가리키는 개체변수
	Ride& r1 = br1;//r1은 Ride클래스를 참조하는 객체변수이다.
	//하위(파생)클래스인 br1객체로 형 변환
	r1.rideFunc();//하위(파생)클래스인 BusRide의 rideFunc()함수가 호출된다.

	AirRide ar2;//ar2은 AirRide를 가리키는 개체변수
	Ride& r2 = ar2;//r2은 Ride클래스를 참조하는 객체변수이다.
	//하위(파생)클래스인 ar2객체로 형 변환
	r2.rideFunc();//하위(파생)클래스인 AirRide의 rideFunc()함수가 호출된다.


	return 0;
}