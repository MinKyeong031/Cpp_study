#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson() { cout << "MyPerson()" << endl; }
	
	// ��������ڸ� ������� ������ �����Ϸ��� ����Ʈ ��������ڸ� 
	// �ڵ����� ������ش�.
	// ��������� ������ ������ �ƴϴ�.

	// �Լ��ڿ� const�� ���̸� �� �Լ��ȿ��� ��������� �������� ����
	int getData(void) const
	{
		return nAge;
	}
	void setData(int nData) { nAge = nData; }
private:
	int nAge;
};
int main()
{
	MyPerson p1; // p1��ü����
	p1.setData(20); // p1�� ������� nAge�� 20�� ����

	MyPerson p2(p1); // ���� �����ڰ� ȣ��ȴ�.
	cout << "Person�� ���� : " << p2.getData() << endl;

	return 0;
}
