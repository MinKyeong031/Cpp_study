#include <iostream>
using namespace std;

//template <typename T>
template <class T>

class MyData {
private:
	T mydata;
public:
	void SetData(T pdata) {
		mydata = pdata;
	}
	T GetData() {
		return mydata;
	}
};

void main() {
	MyData<int> mydata1;
	//mtdata1객체를 생성할 때 MyData클래스의 모든 멤버의 T는 int로 변경된다.
	MyData<double> mydata2;
	//mtdata2객체를 생성할 때 MyData클래스의 모든 멤버의 T는 double로 변경된다.

	mydata1.SetData(5);
	cout << mydata1.GetData() << endl;

	mydata2.SetData(5.234);
	cout << mydata2.GetData() << endl;
}