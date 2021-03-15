#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<int, string> dic;
	//map컨테이너(형식) 객체변수 dic 선언
	int nNum;
	string kfruit;

	dic.insert(make_pair(1, "사랑"));//key : 1, value : "사랑"
	dic.insert(make_pair(2, "사과"));//key : 2, value : "사과"
	dic[3] = "체리";//key : 3, value : "체리"

	cout << "저장된 단어의 갯수 " << dic.size() << endl;
	//dic.size()의 데이터 갯수

	while (true) {
		cout << " << 찾고 싶은 단어 >> " << endl;
		cin >> nNum; // 찾고싶은 key값 입력
		if (cin.fail()) {
			//문자열이 아닌 숫자 정수가 입력되면 false(0)을 리턴한다.
			//정수대신 문자열이 입력되면 cin.fail()는 1값이 리턴
			//if 조건식은 참(true)이 된다.
			cin.clear();
			//문자열을 비워(삭제)주는 함수
			cin.ignore(100, '\n');
			//문자열을 입력하고 엔터키('\n')를 제거한다.
			cout << "입력 오류" << endl;
			continue;
		}
		if (nNum == 0) {
			//입력 값이 0이면 while문을 빠져나간다.
			break;
			//while문을 빠져나간다.
		}
		if (dic.find(nNum) == dic.end()) {//dic 객체 변수의 데이터에서 입력한 nNum키 값을 처음부터 끝까지 찾는데 없는 경우
			cout << "없음" << endl;
		}
		else {
			cout << dic[nNum] << endl;
		}
	}
	cout << "종료합니다." << endl;
}