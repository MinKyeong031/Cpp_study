#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	//벡터 객체 v를 생성하고, 그 데이터는 <int>정수로 한다.

	//데이터 입력
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// vector<int>::iterator iter = v.begin(); -> iter(반복자 변수)
	// 초기 버전
	vector<int>::iterator ptr1;//ptr1은 벡터클래스 안에 있는 iterator
	//인터페이스를 가지고 변수(반복자) 선언
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		cout << *ptr1 << "  ";
	//ptr1 = v.begin();은 v벡터의  저장되어 있는 첫번째 데이터의 주소값을 ptr1에 저장, 
	//v.end()는 v벡터의 저장되어 있는 마지막 데이터의 다음 위치를 가리킨다.
	cout << endl;

	// C++14 버전 1
	//auto에 의해 ptr2는 v벡터의 주소값을 받으므로 자동으로 자료형이 v벡터를 따라간다.
	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++)
		cout << *ptr2 << "  ";
	cout << endl;

	// C++14 버전 2
	//이 방식을 선호한다. 무조건 순차적으로 처음부터 데이터를 출력한다.
	for (auto& ptr3 : v)
		cout << ptr3 << "  ";
	cout << endl;

	return 0;
}