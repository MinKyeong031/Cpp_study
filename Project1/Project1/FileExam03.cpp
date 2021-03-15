#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void main() {
	ofstream fout{ "sample.txt", ios::app };
	//ios::app 은 "sample.txt" 파일에 계속해서 내용을 추가하게 한다.
	//app는 append의 약어
	if (!fout) {//sample.txt파일이 예기치 못한 경우
		//파일이 생성되지 못하는 경우가 발생될 때
		cerr << "파일오픈 실패" << endl;
		//cerr 객체는 버퍼를 사용하지 않고 바로 화면 출력
		exit(1);//종료
	}
	fout << "append Line 1" << endl;
}