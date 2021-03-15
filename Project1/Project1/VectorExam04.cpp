#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	vector<string> v1;	 // 벡터를 생성한다.
	//v1벡터에 저장할 데이터는 문자열이다.

	v1.push_back("Mirim");	 // 벡터의 끝에 자료를 저장한다., v1[9] = "Mirim";
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	for (auto e : v1) {//e는 v1의 데이터 타입에 따라서 자료형이 결정된다.
		//e는 v1객체를 가지고 만들어진 객체변수이다.
		//그래서 메모리 낭비가 있다.
		cout << e << endl;
	}
	cout << endl;

	for (auto& e1 : v1) {
		//e1은 v1객체를 참조하는 객체변수이다.
		//따라서 e1은 v1객체에 저장되어 있는 데이터를 순차적으로 출력한다.	
		cout << e1 << endl;
	}
	cout << endl;
	return 0;
}