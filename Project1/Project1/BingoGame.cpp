//  *   2   3   4  5
//  6  *   8   9  10
// 11 12 * 14 15
// 16 17 18 * 20
// 21 22 23 24 *
// ���� ������ ����µ� 5�� �̻��� �Ǹ� �����Ѵ�.
#include <iostream>
#include <time.h>
#include <conio.h> // �ܼ�â�� ��������ִ� ��������̴�.

using namespace std;

int main()
{
    srand((unsigned int)time(0));

    int iNumber[25] = {}; // 0���� �ʱ�ȭ �ȴ�.

    // 1~25 ���ڸ� �־��ش�.
    for (int i = 0; i < 25; i++)
    {
        iNumber[i] = i + 1; // iNumber[0]=1, iNumber[1]=2,...iNumber[24]=25
    }

    // Shuffle (ī�带 ���´�.)
    int iTemp, idx1, idx2;

    // 100�� ���� ���� �����ش�.
    for (int i = 0; i < 100; i++)
    {
        idx1 = rand() % 25; // idx1�� idx2�� �迭�� �ε���
        idx2 = rand() % 25; // �ε����� ������ 0~24���� ��
        iTemp = iNumber[idx1];
        iNumber[idx1] = iNumber[idx2];
        iNumber[idx2] = iTemp;
    }

    int iBingo = 0; // ���� ������ ī��Ʈ

    while (true) // ���ǽ��� true�̸� ���� �ݺ�
    {
        system("cls"); // ȭ���� �����.

        // ���ڸ� 5 X 5�� ����Ѵ�.
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (iNumber[i * 5 + j] == INT_MAX)
                    cout << "*\t"; // ȭ�鿡 *�� ����ϱ� ���� �����̴�
                else
                    cout << iNumber[i * 5 + j] << "\t";
            }
            cout << endl; // 5���� ���ڸ� ����� �� �ٹٲ� �ϱ�����
        }

        cout << "Bingo Line : " << iBingo << endl;

        // �ټ��� 5 �̻��� ��� ������ �����Ѵ�.
        if (iBingo >= 5)
            break;

        cout << "���ڸ� �Է��ϼ���.(0: ����) : ";
        int iInput;
        cin >> iInput; // �ܼ�(�����)�� ���� �������� �Է� �޴´�.

        if (iInput == 0)
            break; // while���� Ż���Ѵ�.
        else if (iInput < 1 || iInput > 25)
            continue; // while�������� ���� �����͸� �ű��.

        // ���ڸ� �Է��Ҷ� �ߺ��� ��� ó���ϱ� ���� ���̴�.
        bool bAcc = true;
        // ��� ���ڸ� �˻��ؼ� �Է��� ���ڿ� ���� ���ڰ� �ִ����� ã�Ƴ���.
        for (int i = 0; i < 25; i++)
        {
            // ���� ���ڰ� ���� ���
            if (iInput == iNumber[i])
            {
                // ���ڸ� ã���� ��� �ߺ��� ���ڰ� �ƴϹǷ�
                // bAcc ������  false�� �����.
                bAcc = false;

                // ���ڸ� *�� ����ϱ� ���ؼ� Ư���� ���� INT_MAX�� �����Ѵ�.
                iNumber[i] = INT_MAX;

                // �� �̻� �ٸ� ���ڸ� ã�ƺ� �ʿ䰡 ���� ������ for���� ����������.
                break;
            }
        }

        // bAcc ������ true�� ��� �ߺ��� ���ڸ� �Է��ؼ� ���ڸ� *�� �ٲ���
        // �������Ƿ� �ٽ� �Է¹ް� ���ش�.
        if (bAcc) // true�̸� 
            continue;

        // ���� �ټ��� üũ�ϴ� ���� �Ź� ���ڸ� �Է��Ҷ����� ó������ ī��Ʈ�� �ؾ��Ѵ�.
        // �׷��Ƿ� iBingo ������ 0���� �ʱ�ȭ�ϰ� ���Ӱ� �� ���� ���� �ֵ��� �Ѵ�.
        iBingo = 0;

        // ����, ���� �ټ��� �����ش�.
        int iStar1 = 0, iStar2 = 0;
        for (int i = 0; i < 5; i++)
        {
            // ������ üũ�ϱ� ���� 0���� �� ������ �ʱ�ȭ �Ѵ�.
            iStar1 = iStar2 = 0;
            for (int j = 0; j < 5; j++)
            {
                // ���� ���� ������ �����ش�.
                if (iNumber[i * 5 + j] == INT_MAX)
                    iStar1++;

                // ���� ���� ������ �����ش�.
                if (iNumber[j * 5 + i] == INT_MAX)
                    iStar2++;
            }

            // j for���� ���������� ���� �������� ������ ����� 
            // iStar1 ������ ����ȴ�. iStar1�� 5�̸� ������ ��� *�̹Ƿ�
            // ���� �� ī��Ʈ�� �߰��� �ش�. ���� ���� *������ üũ
            if (iStar1 == 5)
                iBingo++;

            // �������� *������ üũ
            if (iStar2 == 5)
                iBingo++;
        }

        // ���� ��� -> ������ �ϴ� �밢�� üũ
        iStar1 = 0;
        for (int i = 0; i < 25; i += 6)
        {
            if (iNumber[i] == INT_MAX)
                iStar1++;
        }

        if (iStar1 == 5)
            iBingo++;

        // ������ ��� -> ���� �ϴ� �밢�� üũ
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