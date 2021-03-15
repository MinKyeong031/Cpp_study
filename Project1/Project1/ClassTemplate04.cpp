#include <iostream>
using namespace std;

//<char*>를 제외한 나머지 타입은 아래의 클래스를 참조한다.
template <typename T>
class MyData {
	T ndata;
public:
	MyData(T t) : ndata(t){}
	void print() {
		cout << ndata << endl;
	}
};

//템플릿의 클래스의 특수화
//MyData<char*> mydata2(str1); mydata2객체 생성시 아래의 클래스를 사용한다.
template <>
class MyData<char*> {
	char* ndata;
public:
	MyData(char* t): ndata(t){}
	void print() {
		cout << "string value : " << ndata << endl;
	}
};

void main() {
	int i = 3456;
	double d = 56.78;
	MyData<int> mydata1(i);
	MyData<double> mydata3(d);
	char str[20] = "IT Meister";
	char* str1 = str;
	MyData<char*> mydata2(str1);
	mydata1.print();
	mydata2.print();
	mydata3.print();
}