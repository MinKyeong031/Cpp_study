#include <iostream>
using namespace std;

// ����Ʈ �Ű������� �ִ� �Լ��� ������ ��� TestFunc()�� TresFunc(10)�� 
// ���������� �ٸ� �Լ��� ȣ��� ���� �ִ�. �׷��� �������� �� ��쿡 �����߻� 
int TestFunc(int = 10); //������ ��쿡 ����

int main() {
	// ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ(nParam = 10)���� �����Ѵ�
	cout << TestFunc() << endl;
	// ȣ���ڰ� ���μ��� 20���� ���߱� ������ (nParam = 20)���� �����Ѵ�
	cout << TestFunc(20) << endl;
}

int TestFunc(int nParam = 10) {
	return nParam;
}