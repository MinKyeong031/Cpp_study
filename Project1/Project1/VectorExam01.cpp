#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	//벡터 객체 v를 생성하고, 그 데이터는 <int>정수로 한다.

	//데이터 입력
	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);

	cout << "v = ";
	for (auto& e : v) {
		cout << e << "  ";
	}
	cout << endl;

	//데이터 삭제
	v.pop_back();//배열의 마지막 데이터 삭제

	cout << "v = ";

	//v객체를 참조하는 변수 e는 v객체 배열의 데이터를 처음부터 순차적으로 읽어서 출력한다
	//auto는 v객체의 내용의 자료형에 관계없이 사용할 수 있다.
	//따라서 v객체의 내용이 int이면 auto는 int로 변경해준다
	for (auto& e : v) {//v객체와 같은 크기의 객체를 e 이름으로 생성
		cout << e << "  ";
	}
	cout << endl;

	return 0;
}