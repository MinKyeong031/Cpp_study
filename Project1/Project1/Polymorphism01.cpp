#include <iostream>
using namespace std;

class Ride {
public:
	void rideFunc() {
		cout << "Ÿ��" << endl;
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
	Ride* r1 = new BusRide();//r1�� RideŬ������ ����Ű�� ��ü ������ ����
	//�Ļ�(�ڽ�)Ŭ������ BusRide�� ����ȯ
	r1->rideFunc();//r1�� ����(�Ļ�)Ŭ������ BusRide�� rideFunc()�Լ��� ������ �� �ִ�.
	//�׷��� ���⿡�� ����(�θ�)Ŭ������ Ride�� rideFunc()�Լ��� ȣ���Ѵ�.
	r1->age = 100;//��ü���� ����ȯ�� ������ ����Ŭ������ ����Ű�� ��ü������
	//����Ŭ�������� ������ �� �Լ����� �����ϴ� ���̴�.
	Ride* r2 = new AirRide();
	r2->rideFunc();
	

	return 0;
}