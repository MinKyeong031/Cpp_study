#include <iostream>
#include <cstdlib>

void print(int a, int b)
{
	std::cout << a + b << std::endl;
}

int main()
{
	char str[] = "100";
	int a = 200;
	int b = atoi(str);//atoi() : ������ ���ڿ��� ������ ��ȯ

	print(a, b);
	
	return 0;
}