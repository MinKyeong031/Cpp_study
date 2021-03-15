#include <iostream>
using namespace std;

class BoxNum {
private:
	int num1, num2;
public:
	// : num1(num1), num2(num2)은 매개변수에서 받은 데이터를 멤버변수에 저장한다.
	BoxNum(int num1, int num2) : num1(num1), num2(num2) {}
	void ShowNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	BoxNum operator+(BoxNum& ref) {//nb2객체가 원본이고, ref는 nb2를 참조하는 객체변수이다.
		//this->num1에서 this는 nb1.operator + (nb2)에서 호출했기 때문에 현재 객체는 nb1이 된다.
		return BoxNum(this->num1 + ref.num1, this->num2 + ref.num2);
	}
};

int main()
{
	BoxNum nb1(10, 20);//객체 생성시 생성자 호출한다.
	BoxNum nb2(3, 4);
	BoxNum result = nb1 + nb2;//이 문장은  컴파일시 컴파일러가 아래 주석문장으로 바꾸어준다. 
	//BoxNum result = nb1.operator + (nb2);

	nb1.ShowNum();
	nb2.ShowNum();
	result.ShowNum();
	
	return 0;
}
