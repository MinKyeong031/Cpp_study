#include <iostream>
using namespace std;

class MyData {
private:
	int* m_pnData = nullptr;
	//멤버변수인데 초기값을 널 포인터
public:
	MyData(int nParam) {//생성자 정의
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData& rhs) {//복사 생성자 정의(rhs는 main()함수에 있는 a 객체를 참조)
		cout << "MyData(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	~MyData() {
		cout << *m_pnData << endl;
		delete m_pnData;
	}
	int GetData() {
		if (m_pnData != NULL) {
			return *m_pnData;
		}
	}
};

int main()
{
	MyData a(10);//생성자 호출
	MyData b(a);//복사생성자 호출

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	//프로그램이 종료될때 객체 생성의 역순으로 소멸이 이루어진다.
	return 0;
}