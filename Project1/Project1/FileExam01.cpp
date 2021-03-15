#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void main() {
	char empNum[20];
	char empName[20];
	char position[20];

	ofstream fout("info.txt");
	//ofstream fout{ "info.txt" }; ->"info.txt"파일을 사용하겠다고 선언
	//ofstream fout; fout.open("info.txt");
	//ofstream는 클래스 이름이고, fout는 "info.txt"파일을 가리키는 객체 변수이다.

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 사람의 사번을 입력하세요 => ";
		cin >> empNum;
		cout << i + 1 << "이름을 입력하세요 => ";
		cin >> empName;
		cout << i + 1 << "직급을 입력하세요 => ";
		cin >> position;

		//fout은 info.txt파일을 가리키는 객체 변수이기 때문에
		//empNum << setw(10) << empName << setw(22) << position << endl;
		//위 문장의 값을 info.txt 파일에 출력한다. setw()는 공백을 넣는 함수이다.
		fout << empNum << setw(10) << empName << setw(22) << position << endl;
		cout << empNum << setw(10) << empName << setw(22) << position << endl;
		cout << endl;
	}
	fout.close();
}