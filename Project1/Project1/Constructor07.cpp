#include <iostream>
using namespace std;

class CTest
{
private:
	int m_nData;
public:
	CTest(int nParam) : m_nData(nParam)
		// : m_nData(nParam)�� ������ ��������� �ʱ�ȭ �ϴ� ���̴�.
		//�Ϲ��Լ������� ����� �Ұ��ϰ� �����ڸ޼��忡���� ��밡�ɤ��٤�.
		//��������� ������ �־ ,�� ����Ͽ� �ʱ�ȭ�� �����ϴ�.
	{
		//m_nData = nParam; ���Թ��� �ʱ�ȭ�� �ƴϴ�
		cout << "CTest::CTest(int)" << endl;
	}
	~CTest()
	{
		cout << "CTest::~CTest()" << m_nData << endl;

	}
};

int main()
{
	//CTest aa; �����ڰ� �����ϸ� �⺻�����ڸ� �����Ϸ��� ������ �ʴ´�. ���� ������ �߻���
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;

	return 0;
	//��ü ������ a, b������ �Ǿ��µ� ��ü�� �Ҹ�� ���� �������� �ȴ�.
}