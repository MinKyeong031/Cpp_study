#include <iostream>
using namespace std;

int main()
{
	int menu_select;
	cout << "1. ����" << endl;
	cout << "2. ġŲ" << endl;
	cout << "3. ����" << endl;

	while (true)//���� �ݺ�
	{
		cout << "�޴��� �����ϼ���." << endl;
		cin >> menu_select;
		//�ַܼκ��� �����͸� �Է¹޾� ���� menu_select�� ����
		switch (menu_select)
		{
		case 1:
			cout << "1�� ���ڰ� �ֹ� �Ǿ����ϴ�. " << endl;
			break;
		case 2:
			cout << "2�� ġŲ�� �ֹ� �Ǿ����ϴ�. " << endl;
			break;
		case 3:
			cout << "2�� ������ �ֹ� �Ǿ����ϴ�. " << endl;
			break;
		default:
			cout << "�߸��� �ֹ��Դϴ�.  �ٽ� �ֹ��ϼ���." << endl;
			cout << "�ֹ� ���� : 0, �ֹ� ��� : 1" << endl;
			cin >> menu_select;
			break;
		}
		if (menu_select == 0)
		{
			break;
		}
	}
	return 0;
}