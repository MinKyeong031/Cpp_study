#include <iostream>
using namespace  std;

int main()
{
	int* ptr2 = new int[4]; // heap������ ���������� �迭 4���� �����ȴ�.
	for (int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << "\t";
	}
	cout << endl; // �ٹٲ�

	// delete ptr2; ---heap������ �ִ� 
	// �迭 4���� ��� �߿��� ù��° ��Ҹ����� 
	delete [] ptr2; // heap������ �ִ� �迭 4�� ��� ��� ���� 

	return 0;
}