//����, ����, �� ���� ���α׷��� �ۼ��Ͻÿ�.
//   1,    2,    3 ���� �����Ѵ�.
#include <iostream>
#include <time.h>

using namespace std;

enum SRP//������, ����ü -> ���α׷��� �������� ���̱� ���� ���
{
	//SRP_S ,//SRP_S�� ���� 0�� �ڵ����� ����ȴ�.(�ʱ�ȭ���� ���� ��)
	//SRP_S = 10 ,//SRP_R = 11, SRP_P = 12, SRP_END = 13
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END = 0// ��� ����ü ����鿡�� ���� ������ �� �ִ�.
};

int main()
{
	//ȭ���� �����ϰ� �����.
	system("cls");

	//���� ���̺�(�߻�) ����
	srand((unsigned)time(0));
	
	//int iRand;
	//iRand = rand() % 3 + 1;// iRand���� 1~3 ������ ���ڸ� �߻�

	int iPlayer;//�����ϴ� ���
	int iAI;//�ΰ�����

	//4�� �ԷµǸ� ���� �ݺ��� ����
	while (true) {
		cout << "1. ����" << endl;
		cout << "2. ����" << endl;
		cout << "3. ��" << endl;
		cout << "4. ����" << endl;
		
		//iPlayer�� ���� �Է¹޴´�.
		cin >> iPlayer;//�ܼ� â���� ���� �������� �Է¹޴´�.

		if (iPlayer < SRP_S || iPlayer < SRP_END) 
		{
			cout << "�߸��� ���� �Է��߽��ϴ�." << endl;
			//�Ͻ�����
			system("pause");
			continue; //�ݺ����� ���������� �̵������ִ� ����̴�.
		}
		else if (iPlayer == SRP_END)
		{
			break;//while���� ����������. �����Ѵ�.
		}

		//1~3 ������ ���� �Է��� ���
		//�ΰ������� ���� �߻���Ų��.
		iAI = rand() % 3 + 1;//1~3 ������ ���� �߻�
		
		
		switch (iAI)
		{
		case SRP_S:
			cout << "AI : ����" << endl;
			break;
		case SRP_R:
			cout << "AI : ����" << endl;
			break;
		case SRP_P:
			cout << "AI : ��" << endl;
			break;
		}

		int iWin = iPlayer - iAI;
		/*if (iWin == 1 || iWin == -2) {
			cout << "Player �¸�" << endl;
		}
		else if (iWin == 0) {
			cout << "���" << endl;
		}
		else {
			cout << "AI �¸�" << endl;
		}*/

		switch (iWin) {
		case 1: case -2:
			cout << "Player �¸�" << endl;
			break;
		case 0:
			cout << "���" << endl;
			break;
		default:
			cout << "AI �¸�" << endl;
			break;
		}

		system("pause");	
	}
	return 0;
}