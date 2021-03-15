//가위, 바위, 보 게임 프로그램을 작성하시오.
//   1,    2,    3 으로 설정한다.
#include <iostream>
#include <time.h>

using namespace std;

enum SRP//열거형, 열거체 -> 프로그램의 가독성을 높이기 위해 사용
{
	//SRP_S ,//SRP_S는 값이 0이 자동으로 저장된다.(초기화하지 않을 시)
	//SRP_S = 10 ,//SRP_R = 11, SRP_P = 12, SRP_END = 13
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END = 0// 모든 열거체 멤버들에게 값을 설정하 수 있다.
};

int main()
{
	//화면을 깨끗하게 지운다.
	system("cls");

	//난수 테이블(발생) 생성
	srand((unsigned)time(0));
	
	//int iRand;
	//iRand = rand() % 3 + 1;// iRand값은 1~3 사이의 숫자를 발생

	int iPlayer;//게임하는 사람
	int iAI;//인공지능

	//4가 입력되면 무한 반복을 종료
	while (true) {
		cout << "1. 가위" << endl;
		cout << "2. 바위" << endl;
		cout << "3. 보" << endl;
		cout << "4. 종료" << endl;
		
		//iPlayer가 값을 입력받는다.
		cin >> iPlayer;//콘솔 창으로 부터 정수값을 입력받는다.

		if (iPlayer < SRP_S || iPlayer < SRP_END) 
		{
			cout << "잘못된 값을 입력했습니다." << endl;
			//일시정지
			system("pause");
			continue; //반복문의 시작점으로 이동시켜주는 기능이다.
		}
		else if (iPlayer == SRP_END)
		{
			break;//while문을 빠져나간다. 종료한다.
		}

		//1~3 사이의 값을 입력한 경우
		//인공지능이 값을 발생시킨다.
		iAI = rand() % 3 + 1;//1~3 사이의 숫자 발생
		
		
		switch (iAI)
		{
		case SRP_S:
			cout << "AI : 가위" << endl;
			break;
		case SRP_R:
			cout << "AI : 바위" << endl;
			break;
		case SRP_P:
			cout << "AI : 보" << endl;
			break;
		}

		int iWin = iPlayer - iAI;
		/*if (iWin == 1 || iWin == -2) {
			cout << "Player 승리" << endl;
		}
		else if (iWin == 0) {
			cout << "비김" << endl;
		}
		else {
			cout << "AI 승리" << endl;
		}*/

		switch (iWin) {
		case 1: case -2:
			cout << "Player 승리" << endl;
			break;
		case 0:
			cout << "비김" << endl;
			break;
		default:
			cout << "AI 승리" << endl;
			break;
		}

		system("pause");	
	}
	return 0;
}