#include <iostream>
using namespace std;

int main()
{
	int arr[4] = { 1, 2, 3, 4 };
	cout << arr << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << &arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	return 0;
}