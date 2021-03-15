#include <iostream>
using namespace std;

class MyData {
private:
	int* m_pnData = nullptr;
	//��������ε� �ʱⰪ�� �� ������
public:
	MyData(int nParam) {//������ ����
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData& rhs) {//���� ������ ����(rhs�� main()�Լ��� �ִ� a ��ü�� ����)
		cout << "MyData(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	~MyData() {
		cout << *m_pnData << endl;
		delete m_pnData;
	}
	int GetData() {
		if (m_pnData != NULL) {
			return *m_pnData;
		}
	}
};

int main()
{
	MyData a(10);//������ ȣ��
	MyData b(a);//��������� ȣ��

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	//���α׷��� ����ɶ� ��ü ������ �������� �Ҹ��� �̷������.
	return 0;
}