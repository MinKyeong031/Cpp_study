#include <iostream>
using namespace std;

//<char*>�� ������ ������ Ÿ���� �Ʒ��� Ŭ������ �����Ѵ�.
template <typename T>
class MyData {
	T ndata;
public:
	MyData(T t) : ndata(t){}
	void print() {
		cout << ndata << endl;
	}
};

//���ø��� Ŭ������ Ư��ȭ
//MyData<char*> mydata2(str1); mydata2��ü ������ �Ʒ��� Ŭ������ ����Ѵ�.
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