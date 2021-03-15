#include <iostream>
using namespace std;
class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) // num=3 
	{
		cout << "SelfRef(int n) 객체생성" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this; // 자신을 가리키는 객체이면 리턴값은 참조형으로
		// 반환해야 한다.(SelfRef&)
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};
int main()
{
	SelfRef obj(3);// 생성자 호출
	SelfRef& ref = obj.Adder(2); // obj가 원본이고, ref는 별명이다.

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber();
	ref.Adder(2).ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	obj.ShowTwoNumber();

	return 0;
}
