#include <iostream>
using namespace std;

class CRefTest
{
public:
	CRefTest(int& rParam) : m_nData(rParam) {};
	//CRefTest(int& rParam)에서 int& rParam = a와 같은 표현
	//m_nData(rParam)은 멤버변수를 초기화하는 문장이기 때문에
	//m_nData에 rParam값을 저장한다. 즉 main()함수에 있는 a변수와 생성자에 있는
	//rParam와 m_nData는 같은 기억공간을 참조한다.
	//그래서 메모리 절감 효과가 있다.

	int GetData(void) {
		return m_nData;
	}
private:
	int& m_nData;
};

int main()
{
	int a = 10;
	CRefTest t(a);//객체를 생성하고, 매개변수 a를 전달한다.

	cout << t.GetData << endl;

	a = 20;

	cout << t.GetData << endl;

	return 0;
}