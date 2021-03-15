#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ofstream fo_bin("data.bin", ofstream::binary);
	//data.bin파일을 오픈하는데 2진 파일 모드(2진수)로 한다.
	//텍스트 파일이 아님
	//fo_bin 객체 변수는 "data.bin"파일을 가리킨다.
	int nArray[] = { 100, 200, 300, 400, 500 };

	if (!fo_bin) {//파일 오픈이 실패할 때 실행하는 문장
		cout << "data.bin 파일 오픈 에러" << endl;
		exit(1);
	}
	fo_bin.write((char*)&nArray, sizeof(nArray));
	//sizeof(nArray)는 nArray 배열의 길이만큼 내용을 "data.bin"파일에 출력하시오.
}