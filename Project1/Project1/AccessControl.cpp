#include <iostream>
using namespace std;

class AccessTest {
public: // �Լ����� public ���� ���� �ϸ� �ܺο��� ���� ����
	void ShowJumsu();
	void setJumsu(const int data);
	void getJumsu();
private: // ��������� private���� ����
	int jumsu;
};
void AccessTest::ShowJumsu() {
	cout << "���� : " << jumsu << endl;
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
	// cout << "���� : " << access.getJumsu() << endl;

	return 0;
}
