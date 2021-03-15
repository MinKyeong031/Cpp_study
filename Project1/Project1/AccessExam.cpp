#include <iostream>
using namespace std;

class AccessTest {
public:
	//함수는 public으로 접근지정자로 표현한다.
	void ShowJumsu();
	void setJumsu(const int data);
	int getJumsu();
private:
	//멤버변수는 private으로 접근지정자로 표현한다.
	int jumsu;
};

void AccessTest::ShowJumsu()
{
	cout << "점수 : " << endl;
}

void AccessTest::setJumsu(const int data)
{
	jumsu = data;
}

int AccessTest::getJumsu()
{
	return jumsu;
}

int main()
{
	AccessTest access;
	access.setJumsu(99);
	cout << "점수 : " << access.getJumsu() << endl;

	return 0;
}
