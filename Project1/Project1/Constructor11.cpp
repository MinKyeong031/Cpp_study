#include <iostream>
using namespace std;

class CRefTest
{
public:
	//CRefTest(int& rParam) {m_nData = rParam}; �� �����߻� : ������� �ʱ�ȭ X
	CRefTest(int rParam) : m_nData(rParam) {}
	//CRefTest(int rParam)���� rParam�� �������̰� 4����Ʈ �������� ���� 10�� ����
	// : m_nData(rParam)�� int& m_nData = rParam;�� ���� ǥ���̱� ������ m_nData���������
	//rParam�� ������ �ȴ�. �׷��� rParam�� �����̱� ������ ������ �����Ǹ� �ڵ�����
	//m_nData ��������� ���� �������.
	int GetData(void) {
		return m_nData;
	}
private:
	int& m_nData;
};

int main()
{
	int a = 10;
	CRefTest t(a);//��ü �����ϰ�, �Ű����� a�� �����Ѵ�.

	cout << t.GetData << endl;
	//���⼭ m_nData���� garbage(������ ��)�� ��µȴ�.

	a = 20;

	cout << t.GetData << endl;

	return 0;
}