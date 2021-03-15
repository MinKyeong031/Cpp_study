#include <iostream>
#include <time.h>
using namespace std;
/* 야구 게임 만들기
<조건> 1. 1~9사이의 랜덤한 숫자 3개를 얻어온다. 단 숫자는 중복되어서는 안됨
2. 3개의 숫자는 * * *의 형태로 출력하고 3개의 숫자를 맞추는 게임이다.
3. 사용자는 이 3개의 숫자를 맞출때까지 계속해서 3개씩 숫자를 입력한다.
4. 만약에 맞추어야할 숫자가 7 3 8인 경우 사용자는 3개의 숫자를 입력한다.
5. 입력 : 1 2 4 를 입력했을 경우 1 2 4는 맞추어야할 숫자중 아무것도 없으므로 Out을
	출력한다.
6. 입력 : 7 5 9를 입력했을 경우 7은 맞추어야할 숫자중에 있고 위치도 같으므로
	Strike이다. 5 9는 없으므로 출력은 1Strike 0Ball 을 출력한다.
7. 입력 : 7 8 6 를 입력했을 경우 7은 맞추어야할 숫자중에 있고 위치도 같으므로
	Strike이다. 8은 숫자는 위치가 다르므로 Ball이 된다. 따라서 1Strike 1Ball을 출력
8. 입력 : 7 3 8인 경우 "다 맞췄습니다."를 출력한다.
9. 만약에 입력 받은 숫자 3개 중에서 1개라도 0이 있을 경우 종료된다.
*/

int main()
{
	int iNumber[9] = {};

	srand((unsigned int)time(0));//랜덤함수를 사용하기 위함

	for (int i = 0; i < 9; i++)
	{
		iNumber[i] = i + 1;
	}

	//Shuffle_카드를 섞는다.
	int iTemp, idx1, idx2;

	//100번 정도 골고루 섞어준다.
	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 9;//idx1과 2는 배열의 인덱스
		idx2 = rand() % 9;//인덱스의 범위는 0~8사이의 값
		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	//cout << iNumber[0] << "\t" << iNumber[1] << "\t" << iNumber[2] << endl;

	int iStrike = 0, iBall = 0;
	int iInput[3];

	while (true)
	{
		cout << "1~9사이의 숫자를 입력하시오.(0 : 종료) : ";
		cin >> iInput[0] >> iInput[1] >> iInput[2];

		if (iInput[0] == 0 || iInput[1] == 0 || iInput[2] == 0)
		{
			break;
		}
		else if (iInput[0] < 0 || iInput[0] > 9 || iInput[1] < 0 || iInput[1] > 9 || iInput[2] < 0 || iInput[2] > 9)
		{
			cout << "잘못된 숫자를 입력하였습니다." << endl;
			continue;//while문의 시작점
		}
		else if (iInput[0] == iInput[1] || iInput[0] == iInput[2] || iInput[1] == iInput[2])
		{
			cout << "중복된 숫자를 입력하였습니다." << endl;
			continue;//while문의 시작점
		}

		iStrike = iBall = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				// i가 0일때 j는 0~2까지 반복하게  된다. 즉 맞춰야할 숫자의 첫번째 값과
				// 입력받은 숫자의 첫번째, 두번째, 세번째를 차례대로 비교하여 같은 값이
				// 있는지 찾아낸다.
				if (iNumber[i] == iInput[j])
				{
					// 값이 같은 것이 있을 경우 Strike아니면 Ball이므로 자리가 같은지를
				   // 체크한다. i와 j는 현재 맞춰야할 숫자의 인덱스와 입력받은 숫자의
				   // 인덱스이고 두 값이 같을 경우 자리까지 같다는 의미이므로 Strike를
				   // 증가시킨다. 그게 아니라면 자리가 다르다는 의미이므로 Ball을 증시킨다.
					if (i == j) {
						++iStrike;
					}
					else {
						++iBall;
					}
					// 입력받은 숫자와 맞춰야할 숫자를 비교할때 같은수가 있으면 이 뒤로는
					// 더 이상 같은 수가 없으므로 다음 맞춰야할 숫자로 바로 비교하면 된다.
					// 그래서 break를 사용해서 j for문을 빠져나가고 i++이 실행되어 
					// 다음 맞춰야할 숫자와 다시 비교하게 된다.
					break;
				}
			}
		}

		if (iStrike == 3)
		{
			cout << "숫자를 다 맞췄습니다." << endl;
			break;
		}
		else if (iStrike == 0 && iBall == 0) {
			cout << "Out" << endl;
		}
		else {
			cout << iStrike << " Strike\t" << iBall << " Ball" << endl;
		}
	}
	return 0;
}