#include <iostream>
using namespace std;

class CRefTest
{
public:
	CRefTest(int& rParam) : m_nData(rParam) {};
	//CRefTest(int& rParam)���� int& rParam = a�� ���� ǥ��
	//m_nData(rParam)�� ��������� �ʱ�ȭ�ϴ� �����̱� ������
	//m_nData�� rParam���� �����Ѵ�. �� main()�Լ��� �ִ� a������ �����ڿ� �ִ�
	//rParam�� m_nData�� ���� �������� �����Ѵ�.
	//�׷��� �޸� ���� ȿ���� �ִ�.

	int GetData(void) {
		return m_nData;
	}
private:
	int& m_nData;
};

int main()
{
	int a = 10;
	CRefTest t(a);//��ü�� �����ϰ�, �Ű����� a�� �����Ѵ�.

	cout << t.GetData << endl;

	a = 20;

	cout << t.GetData << endl;

	return 0;
}