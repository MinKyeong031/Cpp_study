//1-100������ ���ڿ��� 3�� ����� ������ �������� ������ �հ� ����� ���Ͻÿ�.
//���� hap, ����� avg�� �Ѵ�.
#include <iostream>
using namespace std;

int main()
{
	int hap = 0;
	int cnt = 0;

	for (int i = 0; i <= 100; i++) {
		if (i % 3 != 0) {
			hap += i;
			//cout << i << "  ";
			cnt++;
		}
		else {
			continue;//�ݺ����� �������� ����
		}
	}
	cout << endl;//�ٹٲ�
	cout << "1-100������ ���ڿ��� 3�� ����� ������ �������� ������ �� : " << hap << endl;
	cout << "1-100������ ���ڿ��� 3�� ����� ������ �������� ������ ��� : " << (double)hap/cnt << endl;
	cnt++;
}