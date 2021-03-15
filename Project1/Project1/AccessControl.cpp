#include <iostream>
using namespace std;

class AccessTest {
public: // 함수들은 public 으로 선언 하면 외부에서 접근 가능
	void ShowJumsu();
	void setJumsu(const int data);
	void getJumsu();
private: // 멤버변수는 private으로 선언
	int jumsu;
};
void AccessTest::ShowJumsu() {
	cout << "점수 : " << jumsu << endl;
}

void AccessTest::setJumsu(const int data) {
	jumsu = data;
}

void AccessTest::getJumsu()
{
	AccessTest::ShowJumsu();
	// return jumsu;
}

int main()
{
	AccessTest access;
	access.setJumsu(99);
	access.getJumsu();
	// cout << "점수 : " << access.getJumsu() << endl;

	return 0;
}
