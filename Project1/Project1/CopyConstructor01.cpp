#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson() { cout << "MyPerson()" << endl; }

	// 복사 생성자 선언 및 정의
	
	MyPerson(const MyPerson& rhs)
		// : nAge(rhs.nAge)
	{
		this->nAge = rhs.nAge;
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
int main() {
	// 디폴트 생성자가 호출되는 경우
	MyPerson p1, p2;
	p1.setData(20);

	// 복사 생성자가 정의되어 있지 않을 경우에는 디폴트 복사생성자가 호출된다.
	//MyPerson p2(p1); --- 복사생성자 호출
	// MyPerson p2=p1;--- 복사생성자 호출
	p2 = p1; // 복사생성자가 호출되지 않고 생성자가 호출되는데....
	// 멤버변수에 따라 연산자 중복정의라는 함수를 구현해야 하는 경우가 있다.
	cout << "Person의 나이 :" << p2.getData() << endl;
	return 0;
}
