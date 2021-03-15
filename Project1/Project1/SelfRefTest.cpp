#include <iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "SelfRef(int n) ��ü ����" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;
		return *this;
		//this�� ����(obj) ��ü�� ����Ű�� �������̴�.
		//���� *this�� ���� ��ü�� �ȴ�.(*this�� main()�� �ִ�
		//obj �ڽ��� ��ü�� �Ǳ� ������ ����� ���� Ÿ���� ������(&)���� �ؾ��Ѵ�.)
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