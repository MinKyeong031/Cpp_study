#include <iostream>
using namespace std;

int main()
{
	int menu_select;
	cout << "1. 피자" << endl;
	cout << "2. 치킨" << endl;
	cout << "3. 족발" << endl;

	while (true)//무한 반복
	{
		cout << "메뉴를 선택하세요." << endl;
		cin >> menu_select;
		//콘솔로부터 데이터를 입력받아 변수 menu_select에 저장
		switch (menu_select)
		{
		case 1:
			cout << "1번 피자가 주문 되었습니다. " << endl;
			break;
		case 2:
			cout << "2번 치킨이 주문 되었습니다. " << endl;
			break;
		case 3:
			cout << "2번 족발이 주문 되었습니다. " << endl;
			break;
		default:
			cout << "잘못된 주문입니다.  다시 주문하세요." << endl;
			cout << "주문 종료 : 0, 주문 계속 : 1" << endl;
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