#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson() {
		cout << "MyPerson()" << endl;
	}

	//복사 생성자를 기술하지 않으면 컴파일러가 디폴트 복사 생성자를 자동으로 만들어준다.
	//멤버변수가 포인터 변수는 아니다

	int getData(void) const {//함수 뒤에 const를 붙이면 그 함수 안에서 멤버변수를 변경하지 못하게 한다.
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
	MyPerson p1;//p1 객체 생성
	p1.setData(20);//p1의 멤버변수 nAge에 20을 저장

	MyPerson p2(p1);//복사 생성자가 호출된다.
	cout << "Person의 나이 : " << p2.getData() << endl;

	return 0;
}