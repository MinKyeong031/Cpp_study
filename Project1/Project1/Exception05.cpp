#include <iostream>
#include <exception>
using namespace std;

int main() {
	int* p[101];

	try {
		for (int i = 0; i < 100; i++) {
			p[i] = new int[10000000];
			//heap ������ �޸𸮰� ����ؼ� ������ ������ ������ �޸𸮰� �������� �Ǹ� �� �̻� ������ �� �� ���� ������ ���ܸ�
			//���������� ������ �ȴ�.
			cout << i << "��° �迭 ����" << endl;
		}
	}
	catch (bad_alloc& e) {//�޸� ������ �� ���� �� �޴� ����
		//try���� ���� ��ü�� e ��ü�� �����
		//what()�� �޸� ���� �޽��� ���
		cout << "Exception : " << e.what() << endl;
	}
}