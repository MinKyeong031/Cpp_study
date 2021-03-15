#include <iostream>
using namespace std;

template <typename T1, typename T2>

class Box {
	T1 data1;
	T2 data2;
public:
	Box() {}
	T1 getFirst();
	T2 getSecond();
	void setFirst(T1 value) {
		data1 = value;
	}
	void setSecond(T2 value) {
		data2 = value;
	}
};

//������ ���� �ٸ� 2������ ���ø����� ǥ���� �� Ŭ���� �ܺο��� �Լ�����
template <typename T1, typename T2>
T1 Box<T1, T2>::getFirst() {
	return data1;
}

template <typename T1, typename T2>
T2 Box<T1, T2>::getSecond() {
	return data2;
}


void main() {
	Box <int, double> b;
	b.setFirst(100);
	b.setSecond(5.57);
	cout << "(" << b.getFirst() << ", " << b.getSecond() << ")";
}