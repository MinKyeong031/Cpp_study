#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson() {
		cout << "MyPerson()" << endl;
	}

	//���� ������ ����
	MyPerson(const MyPerson& rhs) {//rhs�� p1�� �����̰� rhs�� ����
		this->nAge = rhs.nAge;//this->nAge�� p2�� �ִ� nAge
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void) const {//�Լ� �ڿ� const�� ���̸� �� �Լ� �ȿ��� ��������� �������� ���ϰ� �Ѵ�.
		return nAge;
	}
	void setData(int nData) {
		nAge = nData;
	}
private:
	int nAge;
};


int main()
{
	MyPerson p1;//p1 ��ü ����
	p1.setData(20);//p1�� ������� nAge�� 20�� ����

	MyPerson p2(p1);//���� �����ڰ� ȣ��ȴ�.
	cout << "Person�� ���� : " << p2.getData() << endl;

	return 0;
}