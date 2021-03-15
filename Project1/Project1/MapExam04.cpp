#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> fruit;
	//map컨테이너(형식) 객체변수 dic 선언
	string efruit;
	string kfruit;

	fruit.insert(make_pair("apple", "사과"));//key : "apple", value : "사과"
	fruit.insert(make_pair("melon", "멜런"));//key : "melon", value : "멜런"
	fruit.insert(make_pair("cherry", "체리"));//key : "cherry", value : "체리"
	fruit.insert(make_pair("banana", "바나나"));//key : "banana", value : "바나나"

	while (true) {
		cout << " << 찾고 싶은 단어 >> " << endl;
		getline(cin, efruit);
		//콘솔로부터 데이터를 입력받는 함수. efruit에 입력값 저장한다.
		if (efruit == "exit") {
			break;
			//while문을 빠져나간다.
		}
		if (fruit.find(efruit) == fruit.end()) {
			//fruit 객체 변수의 데이터에서 입력한 efruit키 값을 처음부터 끝까지 찾는데 없는 경우
			cout << "없음" << endl;
		}
		else {
			cout << fruit[efruit] << endl;
		}
	}
	cout << "종료합니다." << endl;
}