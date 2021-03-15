//  *   2   3   4  5
//  6  *   8   9  10
// 11 12 * 14 15
// 16 17 18 * 20
// 21 22 23 24 *
// 빙고 게임을 만드는데 5줄 이상이 되면 종료한다.
#include <iostream>
#include <time.h>
#include <conio.h> // 콘솔창에 입출력해주는 헤더파일이다.

using namespace std;

int main()
{
    srand((unsigned int)time(0));

    int iNumber[25] = {}; // 0으로 초기화 된다.

    // 1~25 숫자를 넣어준다.
    for (int i = 0; i < 25; i++)
    {
        iNumber[i] = i + 1; // iNumber[0]=1, iNumber[1]=2,...iNumber[24]=25
    }

    // Shuffle (카드를 섞는다.)
    int iTemp, idx1, idx2;

    // 100번 정도 골고루 섞어준다.
    for (int i = 0; i < 100; i++)
    {
        idx1 = rand() % 25; // idx1와 idx2는 배열의 인덱스
        idx2 = rand() % 25; // 인덱스의 범위는 0~24이의 값
        iTemp = iNumber[idx1];
        iNumber[idx1] = iNumber[idx2];
        iNumber[idx2] = iTemp;
    }

    int iBingo = 0; // 빙고 갯수를 카운트

    while (true) // 조건식이 true이면 무한 반복
    {
        system("cls"); // 화면을 지운다.

        // 숫자를 5 X 5로 출력한다.
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (iNumber[i * 5 + j] == INT_MAX)
                    cout << "*\t"; // 화면에 *을 출력하기 위한 문장이다
                else
                    cout << iNumber[i * 5 + j] << "\t";
            }
            cout << endl; // 5개의 숫자를 출력한 후 줄바꿈 하기위함
        }

        cout << "Bingo Line : " << iBingo << endl;

        // 줄수가 5 이상일 경우 게임을 종료한다.
        if (iBingo >= 5)
            break;

        cout << "숫자를 입력하세요.(0: 종료) : ";
        int iInput;
        cin >> iInput; // 콘솔(모니터)로 부터 정수값을 입력 받는다.

        if (iInput == 0)
            break; // while문을 탈출한다.
        else if (iInput < 1 || iInput > 25)
            continue; // while문장으로 실행 포인터를 옮긴다.

        // 숫자를 입력할때 중복될 경우 처리하기 위한 것이다.
        bool bAcc = true;
        // 모든 숫자를 검사해서 입력한 숫자와 같은 숫자가 있는지를 찾아낸다.
        for (int i = 0; i < 25; i++)
        {
            // 같은 숫자가 있을 경우
            if (iInput == iNumber[i])
            {
                // 숫자를 찾았을 경우 중복된 숫자가 아니므로
                // bAcc 변수를  false로 만든다.
                bAcc = false;

                // 숫자를 *을 출력하기 위해서 특수한 값인 INT_MAX로 변경한다.
                iNumber[i] = INT_MAX;

                // 더 이상 다른 숫자를 찾아볼 필요가 없기 때문에 for문을 빠져나간다.
                break;
            }
        }

        // bAcc 변수가 true일 경우 중복된 숫자를 입력해서 숫자를 *로 바꾸지
        // 못했으므로 다시 입력받게 해준다.
        if (bAcc) // true이면 
            continue;

        // 빙고 줄수를 체크하는 것은 매번 숫자를 입력할때마다 처음부터 카운트를 해야한다.
        // 그러므로 iBingo 변수를 0으로 초기화하고 새롭게 줄 수를 구해 주도록 한다.
        iBingo = 0;

        // 가로, 세로 줄수를 구해준다.
        int iStar1 = 0, iStar2 = 0;
        for (int i = 0; i < 5; i++)
        {
            // 한줄을 체크하기 전에 0으로 별 개수를 초기화 한다.
            iStar1 = iStar2 = 0;
            for (int j = 0; j < 5; j++)
            {
                // 가로 별의 개수를 구해준다.
                if (iNumber[i * 5 + j] == INT_MAX)
                    iStar1++;

                // 세로 별의 개수를 구해준다.
                if (iNumber[j * 5 + i] == INT_MAX)
                    iStar2++;
            }

            // j for문을 빠져나오고 나면 현재줄의 개수가 몇개인지 
            // iStar1 변수에 저장된다. iStar1이 5이면 한줄이 모두 *이므로
            // 빙고 줄 카운트를 추가해 준다. 가로 줄의 *개수를 체크
            if (iStar1 == 5)
                iBingo++;

            // 세로줄의 *개수를 체크
            if (iStar2 == 5)
                iBingo++;
        }

        // 왼쪽 상단 -> 오른쪽 하단 대각선 체크
        iStar1 = 0;
        for (int i = 0; i < 25; i += 6)
        {
            if (iNumber[i] == INT_MAX)
                iStar1++;
        }

        if (iStar1 == 5)
            iBingo++;

        // 오른족 상단 -> 왼쪽 하단 대각선 체크
        iStar2 = 0;
        for (int i = 4; i <= 20; i += 4)
        {
            if (iNumber[i] == INT_MAX)
                iStar2++;
        }
        if (iStar2 == 5)
            iBingo++;

    }
    return 0;
}