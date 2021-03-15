#include <iostream>
using namespace std;

class CRefTest
{
public:
	//CRefTest(int& rParam) {m_nData = rParam}; 은 오류발생 : 멤버변수 초기화 X
	CRefTest(int rParam) : m_nData(rParam) {}
	//CRefTest(int rParam)에서 rParam은 정수형이고 4바이트 기억공간을 만들어서 10을 저장
	// : m_nData(rParam)은 int& m_nData = rParam;와 같은 표현이기 때문에 m_nData멤버변수는
	//rParam의 별명이 된다. 그러나 rParam이 원본이기 때문에 원본이 삭제되면 자동으로
	//m_nData 멤버변수에 값이 사라진다.
	int GetData(void) {
		return m_nData;
	}
private:
	int& m_nData;
};

int main()
{
	int a = 10;
	CRefTest t(a);//객체 생성하고, 매개변수 a를 전달한다.

	cout << t.GetData << endl;
	//여기서 m_nData에는 garbage(쓰레기 값)이 출력된다.

	a = 20;

	cout << t.GetData << endl;

	return 0;
}