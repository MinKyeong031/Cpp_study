#include <iostream>
using namespace std;

class Ride {
public:
	//�����Լ��� ������
	virtual void rideFunc() {
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
	Ride* r1 = new BusRide();//r1�� RideŬ���� ��ü ������ ����������
	//����(�Ļ�)Ŭ���� BusRide()�� ����ȯ(������)�ߴ�. �׸��� ���� Ŭ������ ����Լ���
	//rideFunc()�Լ� �տ� virtual�� ���̸� �����Լ��� �ȴ�.
	r1->rideFunc();//BusRideŬ������ rideFunc()�Լ��� ȣ���Ѵ�.
	r1->age = 100;
	//r1->age = 100; -> age�� ��������̱� ������ ���⿡ ������� �ʴ´�.
	Ride* r2 = new AirRide();//r2�� RideŬ���� ��ü ������ ����������
	//����(�Ļ�)Ŭ���� AirRide()�� ����ȯ(������)�ߴ�. �׸��� ���� Ŭ������ ����Լ���
	//rideFunc()�Լ� �տ� virtual�� ���̸� �����Լ��� �ȴ�.
	r2->rideFunc();//AirRideŬ������ rideFunc()�Լ��� ȣ���Ѵ�.


	return 0;
}