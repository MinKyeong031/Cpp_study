#include <iostream>
using namespace std;

int main()
{
	int* ptr2 = new int[4]; 
	// heao������ ������ 4����Ʈ�� 4�� �迭�� ���������.
	// ���� ptr2 �� �迭�� ������ �����ϴ�.

	for(int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << "\t";
	}

	// delete ptr2;---heap������ �ִ� ptr2�� ����Ű�� �迭 ����� ù��°�� ����
	delete [] ptr2; //heap������ �ִ� ptr2�� ����Ű�� �迭 ����� ���θ� ����

	return 0; 
}