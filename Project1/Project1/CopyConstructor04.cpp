#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson(int)" << endl;
	}
	
	// ��������ڸ� �������� �ʰڴ�.
	MyPerson(const MyPerson& rhs) = delete; 

	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
void TestFunc(MyPerson& param) //p1��ü�� �����̰�, param�� �����̴�. ���� 
// ��ü�� ������ ���� �ƴϱ� ������ ��������ڰ� ȣ����� �ʴ´�.
{
	cout << "TestFunc()" << endl;
	param.setData(50);
}
int main()
{
	cout << "******Begin*******" << endl;
	MyPerson p1(30);
	TestFunc(p1); // �Լ�ȣ��� p1��ü�� ����

	cout << "p1: " << p1.getData() << endl;
	cout << "******End*******" << endl;

	return 0;
}
