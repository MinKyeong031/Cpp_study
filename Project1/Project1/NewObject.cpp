#include <iostream>
using namespace std;

int main()
{
	//int* ptr1 = new int;
	//*ptr1 = 20;
	//cout << *ptr1 << endl;

	//delete ptr1;//ptr1�� ����Ű�� heap������ �޸� ����

	//return 0;//ptr1�� stack�� heap������ �ּҰ��� ������ ����.
	////�׷��� statck������ ��� ������ ���α׷� ���� �� �ڵ����� ������
	
	int* ptr2 = new int[4];//heap ������ ���������� �迭 4���� �����ȴ�.
	for (int i = 0; i < 4; i++)
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << "\t";
	}
	cout << endl;//�ٹٲ�

	//delete ptr2;//-> heap������ �ִ�
	//�迭 4���� ��� �߿��� ù��° ��Ҹ� ����

	delete[]ptr2;//-> heap������ �ִ�
	//�迭 4���� ��� ��� ����

	return 0;
}