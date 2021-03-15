#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	//벡터 객체 v를 생성하고, 그 데이터는 <int>정수로 한다.

	//데이터 입력
	v.push_back(21);
	v.push_back(32);
	v.push_back(53);
	v.push_back(64);
	v.push_back(15);

	cout << "v = ";
	for (auto& e : v) {
		cout << e << "  ";
	}
	cout << endl;

	//반복자 iterator 객체를 이용한 반복
	//vector 클래스 안에 iterator 인터페이스인 iter객체 생성
	//객체를 반복적으로 접근할 때 사용하는 객체이다.
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "  ";
	}
	//iter = v.begin()는 v객체의 시작주소값을 iter에게 넘김
	//v.end()는 데이터가 저장되어 있는 마지막 요소의 다음 위치의 주소
	cout << endl << endl;

	return 0;
}