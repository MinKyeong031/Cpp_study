#include <iostream>
using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}

int main()
{
	//ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ �Ű� ���� 10 ����
	cout << TestFunc() << endl;
	//ȣ���ڰ� ���μ��� ��������Ƿ� 20����
	cout << TestFunc(20) << endl;
}