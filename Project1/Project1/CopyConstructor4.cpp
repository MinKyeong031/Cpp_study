#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson(int)" << endl;
	}

	//복사 생정자 정의하지 않겠다.
	MyPerson(const MyPerson& rhs) = delete;
	int getData(void) const {//함수 뒤에 const를 붙이면 그 함수 안에서 멤버변수를 변경하지 못하게 한다.
		return nAge;
	}
	void setData(int nData) {
		nAge = nData;
	}
private:
	int nAge = 0;
};

void TestFunc(MyPerson& param) {//p1 객체가 원본이고, param은 별명이다. 따라서, 객체가 생성된 것이 아니기 때문에 복사 생성자가 호출되지 않는다.
	cout << "TestFunc()" << endl;
	param.setData(50);
}


int main()
{
	cout << "**********Begin**********" << endl;
	MyPerson p1(30);//p1 객체 생성
	TestFunc(p1);//함수 호출 시 p1 객체가 전달
	cout << "p1 : " << p1.getData() << endl;
	cout << "**********End**********" << endl;

	return 0;
}