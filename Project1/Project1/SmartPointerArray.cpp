#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<int[]> pArray(new int[10]);
	//heap ������ ���� 4����Ʈ�� 10�� �����ȴ�.
	//���ø� ����� �̿��ؼ� delete����� ���Խ�Ų��.
	
	for (int i = 0; i < 10; i++)
	{
		pArray[i] = 20 + i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << pArray[i] << "\t";
	}
	cout << endl;

	return 0;
}