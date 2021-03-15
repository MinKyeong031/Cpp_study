#include <iostream>
using namespace std;

void main() {
	char addr[80];
	cout << "문자열 입력 : ";
	while (cin.getline(addr, 80)) {
	//문자열을 80바이트까지 입력한 후 true, false를 체크하는데 데이터가 있으면(입력) true로 인식한다.
		if (strcmp(addr, "exit") == 0) break;
		//strcmp는 string compare의 약어(문자열을 비교하는 함수)
		//addr에 입력된 문자열과 "exit"문자열이 같으면 0 값을 리턴해서 == 0과 비교 true이면 while문을 빠져나간다.
		cout << "문자열 출력 : " << addr << endl;
		cout << "문자열 입력 : ";
	}
}