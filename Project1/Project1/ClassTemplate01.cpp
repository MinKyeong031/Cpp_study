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
	//mtdata1��ü�� ������ �� MyDataŬ������ ��� ����� T�� int�� ����ȴ�.
	MyData<double> mydata2;
	//mtdata2��ü�� ������ �� MyDataŬ������ ��� ����� T�� double�� ����ȴ�.

	mydata1.SetData(5);
	cout << mydata1.GetData() << endl;

	mydata2.SetData(5.234);
	cout << mydata2.GetData() << endl;
}