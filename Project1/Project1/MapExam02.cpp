#include <iostream>
#include <map>
#include <string>
using namespace std;

void print(map<int, string> Target_Map) {
	//main() 함수의 Map 객체를 print()함수 Target_Map 이름으로 받음
	for (auto i : Target_Map) {
		//auto i는 Target_Map 객체 변수의 자료형을 따라간다.
		//출력할 때는 순차적으로 처음부터 끝까지 출력이 된다.
		cout << "Key -> " << i.first << ", Value -> " << i.second << endl;
	}
	cout << endl;
}

void main() {
	map<int, string> Map;
	//map 형식의 데이터를 담는 객체 변수 Map은 <key, value>형식으로 되어 있다.

	Map[1] = "First";//key : 1, value : "First"
	Map[2] = "Second";//key : 2,  value : "Second"
	Map[4] = "Fourth";//key : 4, value : "Fourth"
	Map[3] = "Third";//key : 3, value : "Third"
	//실제 데이터가 저장 될때는 key순으로 오름차순

	print(Map);
	for (int i = 0; i <= Map.size(); i++) {//Map.size()는 데이터갯수
		cout << Map.count(i) << endl;//해당 위치에 데이터가 있는 지 확인 있으면 1 없으면 0
		//Map.count(i)에서 count(i)함수는 i키 값이 없으면 0, 있으면 1을 리턴한다.
		//예를 들면, count(0)에서 0은 키이기 때문에 데이터가 value가 없다. 그래서 count(0)함수는 0이 출력
		//count(1)에서 키는 1이고 value는 "First" 값이 존재하기 때문에 1을 출력한다.
	}
}
