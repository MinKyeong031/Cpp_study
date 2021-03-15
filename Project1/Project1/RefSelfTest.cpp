#include <iostream>
using namespace std;
class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) // num=3 
	{
		cout << "SelfRef(int n) ��ü����" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this; // �ڽ��� ����Ű�� ��ü�̸� ���ϰ��� ����������
		// ��ȯ�ؾ� �Ѵ�.(SelfRef&)
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};
int main()
{
	SelfRef obj(3);// ������ ȣ��
	SelfRef& ref = obj.Adder(2); // obj�� �����̰�, ref�� �����̴�.

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber();
	ref.Adder(2).ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	obj.ShowTwoNumber();

	return 0;
}
