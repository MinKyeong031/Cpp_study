#include <iostream>
#include <exception>
using namespace std;

int main() {
	int* p[101];

	try {
		for (int i = 0; i < 100; i++) {
			p[i] = new int[10000000];
			//heap 영역에 메모리가 계속해서 생성이 진행이 되지만 메모리가 가득차게 되면 더 이상 생성을 할 수 없기 때문에 예외를
			//내부적으로 던지게 된다.
			cout << i << "번째 배열 생성" << endl;
		}
	}
	catch (bad_alloc& e) {//메모리 생성할 수 없을 때 받는 문장
		//try에서 던진 객체를 e 객체가 사용함
		//what()는 메모리 오류 메시지 출력
		cout << "Exception : " << e.what() << endl;
	}
}