#include <iostream>
using namespace std;

#define NAME_SIZE 32
#define ADDRESS_SIZE 128
#define PHONE_SIZE 14
#define STUDENT_MAX 10
#define NAME_SIZE 32

struct _tagStudent
{
	char strName[NAME_SIZE];
	char strAddress[ADDRESS_SIZE];
	char strPhoneNumber[PHONE_SIZE];
	int iNumber;//�й�
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAvg;
};


enum MENU
{
	MENU_NONE,
	MENU_INSERT,
	MENU_DELETE,
	MENU_SEARCH,
	MENU_OUTPUT,
	MENU_EXIT
};

int main()
{
	_tagStudent tStudentArr[STUDENT_MAX] = {};
	int iStudentCount = 0;
	int iStdNumber = 1;
	char strName[NAME_SIZE];

	while (true)
	{
		system("cls");

		cout << "1. �л� ���" << endl;
		cout << "2. �л� ����" << endl;
		cout << "3. �л� Ž��" << endl;
		cout << "4. �л� ���" << endl;
		cout << "5. ����" << endl;
		cout << "�޴��� �����ϼ��� : ";
		
		int iMenu;
		cin >> iMenu;
		//cin�� ���࿡ ������ int������ ���� ������ �Է��ؾ� �Ѵ�.
		//�����ʿ� ���� Ÿ�Կ� �¿��� ���� �Է��ؾ� �ϴµ� �Ǽ��� ������ �ƴ� ���ڸ� �Է�������� ������ �߻��Ѵ�.
		//�׷��� ������ ��ȸó���� ������ �߻��ߴ����� ���⼭ üũ�Ͽ� ������ �߻��ϸ� cin ������ �������۸� ����ΰ�
		//cin ���ο� �Է¹��۰� �ִµ� �Է¹��۴� �Է��� ���� ������ ���� �� ���� ������ �־��ִ� ������ �Ѵ�.
		//�� �Է¹��ۿ� ����� \n�� ���� �����Ƿ� ���۸� ��ȸ�Ͽ� \n�� �����ش�.
		//���۴� �ӽ�����(���)�����̴�.
		//���� ������ üũ�Ѵ�. cin.fail()�� ���� �� �Է¿����� �߻��ϸ� true�� ��ȯ�Ѵ�.


		if (cin.fail())
		{
			//���۸� ����.
			cin.clear();

			//�Կ����ۿ� \n�� ���� �����Ƿ� �˻��Ͽ� \n�� �����ش�.
			//ù ��°���� �˻��ϰ��� �ϴ� ����ũ�⸦ �����Ѵ�.
			//�˳��ϰ� 1024����Ʈ ���� �������־���.
			//�� ��°���� ã�����ϴ� ���ڸ� �־��ش�.
			//�׷��� �Է� ���� ó������ \n�� �ִ� ������ ã�Ƽ� �� �κ��� ���
			//�����־ �ٽ� �Է¹��� �� �ֵ��� �Ѵ�.
			cin.ignore(1024, '\n');
			continue;
		}

		if (iMenu == MENU_EXIT) { break; }

		switch (iMenu)
		{
		case MENU_INSERT:
			system("cls");
			cout << "=============�л� �߰�=============" << endl;
			
			if (iStudentCount == STUDENT_MAX) { break; }

			cout << "�̸� : ";
			cin.getline >> tStudentArr[iStudentCount].strName;
			cin.ignore(1024, '\n');

			cout << "�ּ� : ";
			cin.getline(tStudentArr[iStudentCount].strAddress, ADDRESS_SIZE);
			cin.ignore(1024, '\n');

			cout << "��ȭ��ȣ : ";
			cin.getline(tStudentArr[iStudentCount].strPhoneNumber, PHONE_SIZE);

			cout << "���� ���� : ";
			cin.getline >> tStudentArr[iStudentCount].iKor;

			cout << "���� ���� : ";
			cin.getline >> tStudentArr[iStudentCount].iEng;

			cin.getline >> tStudentArr[iStudentCount].iMath;

			tStudentArr[iStudentCount].iTotal = tStudentArr[iStudentCount].iKor + tStudentArr[iStudentCount].iEng + tStudentArr[iStudentCount].iMath;
			tStudentArr[iStudentCount].fAvg = tStudentArr[iStudentCount].iTotal / 3.f;

			tStudentArr[iStudentCount].iNumber = iStdNumber;
			iStdNumber++;
			iStudentCount++;
			cout << "�л��߰��Ϸ�" << endl;
			break;

		case MENU_DELETE:
			break;

		case MENU_SEARCH:
			system("cls");
			cout << "=============�л� Ž��=============" << endl;
			
			cin.ignore(1024, '\n');
			cout << "Ž���� �̸��� �Է� : ";
			cin.getline(strName, NAME_SIZE);

			for (int i = 0; i < iStudentCount; i++)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0) {
					cout << "�л��� ã�ҽ��ϴ�." << endl;
					cout << "�̸� : " << tStudentArr[i].strName << endl;
					cout << "��ȭ��ȣ : " << tStudentArr[i].strPhoneNumber << endl;
					cout << "�ּ� : " << tStudentArr[i].strAddress << endl;
					cout << "�й� : " << tStudentArr[i].iNumber << endl;
					cout << "���� ���� : " << tStudentArr[i].iKor << endl;
					cout << "���� ���� : " << tStudentArr[i].iEng << endl;
					cout << "���� ���� : " << tStudentArr[i].iMath << endl;
					cout << "���� : " << tStudentArr[i].iTotal << endl;
					cout << "��� : " << tStudentArr[i].fAvg << endl;
					break;
				}
				else {
					cout << "ã�� �л��� �����ϴ�." << endl;
				}
			}





			break;

		case MENU_OUTPUT:
			system("cls");
			cout << "=============�л� ���=============" << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				cout << "�̸� : " << tStudentArr[i].strName << endl;
				cout << "��ȭ��ȣ : " << tStudentArr[i].strPhoneNumber << endl;
				cout << "�ּ� : " << tStudentArr[i].strAddress << endl;
				cout << "�й� : " << tStudentArr[i].iNumber << endl;
				cout << "���� ���� : " << tStudentArr[i].iKor << endl;
				cout << "���� ���� : " << tStudentArr[i].iEng << endl;
				cout << "���� ���� : " << tStudentArr[i].iMath << endl;
				cout << "���� : " << tStudentArr[i].iTotal << endl;
				cout << "��� : " << tStudentArr[i].fAvg << endl;
			}
			break;

		default:
			cout << "�޴��� �߸� �����߽��ϴ�." << endl;
		}
		system("pause");
	}
	return 0;
}