#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "sample.txt";
	ifstream fin(file);
	if (!fin) {
		cout << file << "열기 오류" << endl;
		return 0;
	}
	fin.seekg(0, ios::end);//파일 포인터를 파일의 맨 끝으로 이동
	cout << file << "의 크기는 " << fin.tellg() << endl;
	//fin.tellg()-->fin이 가리키는 파일의 크기를 구하는 함수
	fin.close();//파일을 닫아준다.

	return 0;
}