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
	int iNumber;//학번
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

		cout << "1. 학생 등록" << endl;
		cout << "2. 학생 삭제" << endl;
		cout << "3. 학생 탐색" << endl;
		cout << "4. 학생 출력" << endl;
		cout << "5. 종료" << endl;
		cout << "메뉴를 선택하세요 : ";
		
		int iMenu;
		cin >> iMenu;
		//cin은 만약에 오른쪽 int변수가 오면 정수를 입력해야 한다.
		//오른쪽에 변수 타입에 맞워서 값을 입력해야 하는데 실수로 정수가 아닌 문자를 입력했을경우 에러가 발생한다.
		//그렇기 때문에 예회처리로 에러가 발생했는지를 여기서 체크하여 에러가 발생하면 cin 내부의 에러버퍼를 비워두고
		//cin 내부에 입력버퍼가 있는데 입력버퍼는 입력한 값을 저장해 놓고 그 값을 변수에 넣어주는 역할을 한다.
		//이 입력버퍼에 저장된 \n이 남아 있으므로 버퍼를 순회하여 \n을 지워준다.
		//버퍼는 임시저장(기억)공간이다.
		//먼저 에러를 체크한다. cin.fail()을 했을 때 입력에러가 발생하면 true를 반환한다.


		if (cin.fail())
		{
			//버퍼를 비운다.
			cin.clear();

			//입역버퍼에 \n이 남아 있으므로 검색하여 \n을 지워준다.
			//첫 번째에는 검색하고자 하는 버퍼크기를 지정한다.
			//넉넉하게 1024바이트 정도 지정해주었다.
			//두 번째에는 찾고자하는 문자를 넣어준다.
			//그래서 입력 버퍼 처름부터 \n이 있는 곳까지 찾아서 그 부분을 모두
			//지워주어서 다시 입력받을 수 있도록 한다.
			cin.ignore(1024, '\n');
			continue;
		}

		if (iMenu == MENU_EXIT) { break; }

		switch (iMenu)
		{
		case MENU_INSERT:
			system("cls");
			cout << "=============학생 추가=============" << endl;
			
			if (iStudentCount == STUDENT_MAX) { break; }

			cout << "이름 : ";
			cin.getline >> tStudentArr[iStudentCount].strName;
			cin.ignore(1024, '\n');

			cout << "주소 : ";
			cin.getline(tStudentArr[iStudentCount].strAddress, ADDRESS_SIZE);
			cin.ignore(1024, '\n');

			cout << "전화번호 : ";
			cin.getline(tStudentArr[iStudentCount].strPhoneNumber, PHONE_SIZE);

			cout << "국어 점수 : ";
			cin.getline >> tStudentArr[iStudentCount].iKor;

			cout << "영어 점수 : ";
			cin.getline >> tStudentArr[iStudentCount].iEng;

			cin.getline >> tStudentArr[iStudentCount].iMath;

			tStudentArr[iStudentCount].iTotal = tStudentArr[iStudentCount].iKor + tStudentArr[iStudentCount].iEng + tStudentArr[iStudentCount].iMath;
			tStudentArr[iStudentCount].fAvg = tStudentArr[iStudentCount].iTotal / 3.f;

			tStudentArr[iStudentCount].iNumber = iStdNumber;
			iStdNumber++;
			iStudentCount++;
			cout << "학생추가완료" << endl;
			break;

		case MENU_DELETE:
			break;

		case MENU_SEARCH:
			system("cls");
			cout << "=============학생 탐색=============" << endl;
			
			cin.ignore(1024, '\n');
			cout << "탐색할 이름을 입력 : ";
			cin.getline(strName, NAME_SIZE);

			for (int i = 0; i < iStudentCount; i++)
			{
				if (strcmp(tStudentArr[i].strName, strName) == 0) {
					cout << "학생을 찾았습니다." << endl;
					cout << "이름 : " << tStudentArr[i].strName << endl;
					cout << "전화번호 : " << tStudentArr[i].strPhoneNumber << endl;
					cout << "주소 : " << tStudentArr[i].strAddress << endl;
					cout << "학번 : " << tStudentArr[i].iNumber << endl;
					cout << "국어 점수 : " << tStudentArr[i].iKor << endl;
					cout << "영어 점수 : " << tStudentArr[i].iEng << endl;
					cout << "수학 점수 : " << tStudentArr[i].iMath << endl;
					cout << "총점 : " << tStudentArr[i].iTotal << endl;
					cout << "평균 : " << tStudentArr[i].fAvg << endl;
					break;
				}
				else {
					cout << "찾는 학생이 없습니다." << endl;
				}
			}





			break;

		case MENU_OUTPUT:
			system("cls");
			cout << "=============학생 출력=============" << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				cout << "이름 : " << tStudentArr[i].strName << endl;
				cout << "전화번호 : " << tStudentArr[i].strPhoneNumber << endl;
				cout << "주소 : " << tStudentArr[i].strAddress << endl;
				cout << "학번 : " << tStudentArr[i].iNumber << endl;
				cout << "국어 점수 : " << tStudentArr[i].iKor << endl;
				cout << "영어 점수 : " << tStudentArr[i].iEng << endl;
				cout << "수학 점수 : " << tStudentArr[i].iMath << endl;
				cout << "총점 : " << tStudentArr[i].iTotal << endl;
				cout << "평균 : " << tStudentArr[i].fAvg << endl;
			}
			break;

		default:
			cout << "메뉴를 잘못 선택했습니다." << endl;
		}
		system("pause");
	}
	return 0;
}