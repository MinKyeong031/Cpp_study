#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<int> ptr(new int);
	//heap ������ ���� 4����Ʈ�� �����ȴ�.
	//���ø� ����� �̿��ؼ� delete����� ���Խ�Ų��.

	*ptr = 100;
	cout << *ptr << "  ";

	//delete �����ڸ� �����Ѵ�.

	return 0;
}