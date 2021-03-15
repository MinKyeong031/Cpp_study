#include <iostream>
using namespace std;

class BoxNum {
private:
	int num1, num2;
public:
	// : num1(num1), num2(num2)�� �Ű��������� ���� �����͸� ��������� �����Ѵ�.
	BoxNum(int num1, int num2) : num1(num1), num2(num2) {}
	void ShowNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	BoxNum operator+(BoxNum& ref) {//nb2��ü�� �����̰�, ref�� nb2�� �����ϴ� ��ü�����̴�.
		//this->num1���� this�� nb1.operator + (nb2)���� ȣ���߱� ������ ���� ��ü�� nb1�� �ȴ�.
		return BoxNum(this->num1 + ref.num1, this->num2 + ref.num2);
	}
};

int main()
{
	BoxNum nb1(10, 20);//��ü ������ ������ ȣ���Ѵ�.
	BoxNum nb2(3, 4);
	BoxNum result = nb1 + nb2;//�� ������  �����Ͻ� �����Ϸ��� �Ʒ� �ּ��������� �ٲپ��ش�. 
	//BoxNum result = nb1.operator + (nb2);

	nb1.ShowNum();
	nb2.ShowNum();
	result.ShowNum();
	
	return 0;
}
