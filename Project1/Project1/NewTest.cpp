#include <iostream>
using namespace std;

int main()
{
	int* ptr1 = new int; // ptr1������ stack������ �����ͺ����� ���������
	// �������� �޸𸮴� heap������ ���� 4����Ʈ�� �����ȴ�.

	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1; // heap������ �ִ� �޸𸮸� �����Ѵ�

	return 0; // stack�� �ִ� ptr1 ������ ������ main()�Լ��� ����� ��
	// �ڵ����� �����ȴ�.
}