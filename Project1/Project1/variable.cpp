#include <iostream>
using namespace std;

int same = 2;
int global = 2;

int main()
{
	int same(3); //	=> C++ ��Ÿ��
	//int same = 3; => C��� ��Ÿ��
	cout << "�������� same = " << ::same << endl; //::same => ���������̴�.
	cout << "�������� same = " << same << endl; //same => ���������̴�.
	//���������� ���������� �̸��� ���� ��쿡�� ���������� �켱�Ѵ�.
	cout << "�������� global  = " << global << endl;

	return 0;
}