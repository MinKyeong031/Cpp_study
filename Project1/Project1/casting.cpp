#include <iostream>
using namespace std;

int main()
{
	int val1 = 3;
	double val2 = 3.14;

	//���� + �Ǽ� = �Ǽ�
	cout << val1 + val2 << endl;

	//���� + ���� = ����
	//(�ڷ���)���� =>��������ȯ
	cout << val1 + int(val2) << endl;
	cout << "val1 = " << val1 << ", vla2 = " << val2 << endl;

	return 0;
}