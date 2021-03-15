#include <iostream>
using namespace std;

class Ride {
public:
	//�����Լ��� ������
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
	//�Ϲ��Լ�
	void rideFunc2() {
		cout << "����" << endl;
	}
};

class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};

class AirRide :public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};

int main() {
	BusRide br1;//br1�� BusRide�� ����Ű�� ��ü����
	Ride& r1 = br1;//r1�� RideŬ������ �����ϴ� ��ü�����̴�.
	//����(�Ļ�)Ŭ������ br1��ü�� �� ��ȯ
	r1.rideFunc();//����(�Ļ�)Ŭ������ BusRide�� rideFunc()�Լ��� ȣ��ȴ�.

	AirRide ar2;//ar2�� AirRide�� ����Ű�� ��ü����
	Ride& r2 = ar2;//r2�� RideŬ������ �����ϴ� ��ü�����̴�.
	//����(�Ļ�)Ŭ������ ar2��ü�� �� ��ȯ
	r2.rideFunc();//����(�Ļ�)Ŭ������ AirRide�� rideFunc()�Լ��� ȣ��ȴ�.


	return 0;
}