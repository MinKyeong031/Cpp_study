#include <iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "SelfRef(int n) 객체 생성" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;
		return *this;
		//this는 현재(obj) 객체를 가리키는 포인터이다.
		//따라서 *this는 현재 객체가 된다.(*this는 main()에 있는
		//obj 자신의 객체가 되기 때문에 라수의 리턴 타입은 참조형(&)으로 해야한다.)
	}
	SelfRef& ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber();
	ref.Adder(2).ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}