#include <iostream>
using namespace std;

class AccessTest {
public:
	//�Լ��� public���� ���������ڷ� ǥ���Ѵ�.
	void ShowJumsu();
	void setJumsu(const int data);
	int getJumsu();
private:
	//��������� private���� ���������ڷ� ǥ���Ѵ�.
	int jumsu;
};

void AccessTest::ShowJumsu()
{
	cout << "���� : " << endl;
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
	cout << "���� : " << access.getJumsu() << endl;

	return 0;
}
