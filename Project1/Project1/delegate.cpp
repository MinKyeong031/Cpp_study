#include <iostream>
using namespace std;

class CDelegration {
public:
	int a, b, c, d;
	CDelegration(int a) {
		cout << "CDelegration 1\n" << endl;
		this->a = a;
	}
	// : CDelegration(a)�Ű����� 1���� ������ �ִ� ������ ȣ��
	CDelegration(int a, int b) : CDelegration(a){
		cout << "CDelegration 2\n" << endl;
		this->b = b;
	}
	// : CDelegration(a, b)�Ű����� 2���� ������ �ִ� ������ ȣ��
	CDelegration(int a, int b, int c) : CDelegration(a,b) {
		cout << "CDelegration 3\n" << endl;
		this->c = c;
	}
	// : CDelegration(a, b, c)�Ű����� 3���� ������ �ִ� ������ ȣ��
	CDelegration(int a, int b, int c, int d) : CDelegration(a, b, c) {
		cout << "CDelegration 4\n" << endl;
		this->d = d;
	}
};

int main() {
	CDelegration c(1, 2, 3, 4);

	return 0;
}