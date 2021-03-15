#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void main() {
	char empNum[20];
	char empName[20];
	char position[20];

	ifstream fin;
	fin.open("info.txt");
	//fin이 가리키는 info.txt파일을 사용(open)할 수 있다.


	//fin은 파일을 가리키고, 첫번째 라인의 값을 읽어서 사번은 empNum, 이름은 empName,
	// 직급은 position에 저장하고 while문은 값이 존재하면 true로 인식한다.
	//첫번째 라인을 읽고 나면 자동적으로 2번째 라인의 데이터를 읽는다.
	//마지막 라인까지 읽어들이고 그 다음 라인에 데이터가 없으면 파일의 끝을 의미한다.
	//파일의 끝은 while문에서 false로 처리한다.
	while (fin >> empNum >> empName >> position) {
		cout << empNum << setw(10) << empName << setw(22) << position << endl;
	}

	fin.close();
	//fin이 가리키는 info.txt파일을 닫는다.
}