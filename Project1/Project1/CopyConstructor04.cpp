#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson(int)" << endl;
	}
	
	// 복사생성자를 정의하지 않겠다.
	MyPerson(const MyPerson& rhs) = delete; 

	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
void TestFunc(MyPerson& param) //p1객체가 원본이고, param은 별명이다. 따라서 
// 객체가 생성된 것이 아니기 때문에 복사생성자가 호출되지 않는다.
{
	cout << "TestFunc()" << endl;
	param.setData(50);
}
int main()
{
	cout << "******Begin*******" << endl;
	MyPerson p1(30);
	TestFunc(p1); // 함수호출시 p1객체가 전달

	cout << "p1: " << p1.getData() << endl;
	cout << "******End*******" << endl;

	return 0;
}
