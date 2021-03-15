#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson(int)" << endl;
	}

	//���� ������ ����
	MyPerson(const MyPerson& rhs) : nAge(rhs.nAge) {//rhs�� p1�� �����̰� rhs�� ����
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void) const {//�Լ� �ڿ� const�� ���̸� �� �Լ� �ȿ��� ��������� �������� ���ϰ� �Ѵ�.
		return nAge;
	}
	void setData(int nData) {
		nAge = nData;
	}
private:
	int nAge = 0;
};

void TestFunc(MyPerson param) {//MyPerson param = p1 �̷� ������ �Ǳ� ������ ���� �����ڰ� ȣ��ȴ�.
	//p1 ��ü�� �ִ� ������ param ��ü�� �����Ѵ�.
	//p1�� param ��ü�� ������ ��ü�� �����Ѵ�.
	//�׷��� �޸� ���� ���� �� �ִ�.
	cout << "TestFunc()" << endl;
	param.setData(50);
}


int main()
{
	cout << "**********Begin**********" << endl;
	MyPerson p1(30);//p1 ��ü ����
	TestFunc(p1);//�Լ� ȣ�� �� p1 ��ü�� ����
	cout << "p1 : " << p1.getData() << endl;
	cout << "**********End**********" << endl;

	return 0;
}