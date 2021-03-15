#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson(int)" << endl;
	}
	// 복사생성자 정의
	MyPerson(const MyPerson& rhs) : nAge(rhs.nAge)
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void) const 	{		return nAge;  	}
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
void TestFunc(MyPerson param) // MyPerson param=p1 이런 문장이
// 되기 때문에 복사생성자가 호출된다. p1객체에 있는 내용을 param객체에 저장한다.
// p1과 param객체는 별개의 객체로 존재한다. 그래서 메모리 낭비가 심할 수 있다.
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
