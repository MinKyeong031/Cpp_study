#include <iostream>
using namespace std;

// 디폴트 매개변수가 있는 함수를 선언할 경우 TestFunc()와 TresFunc(10)을 
// 아직까지는 다른 함수로 호출로 보고 있다. 그래서 컴파일을 할 경우에 오류발생 
int TestFunc(int = 10); //선언한 경우에 문제

int main() {
	// 호출자가 실인수를 기술하지 않았으므로 디폴트(nParam = 10)값을 적용한다
	cout << TestFunc() << endl;
	// 호출자가 실인수가 20으로 정했기 때문에 (nParam = 20)값을 적용한다
	cout << TestFunc(20) << endl;
}

int TestFunc(int nParam = 10) {
	return nParam;
}