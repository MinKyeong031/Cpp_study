#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void main() {
	ofstream fout{ "sample.txt", ios::app };
	//ios::app �� "sample.txt" ���Ͽ� ����ؼ� ������ �߰��ϰ� �Ѵ�.
	//app�� append�� ���
	if (!fout) {//sample.txt������ ����ġ ���� ���
		//������ �������� ���ϴ� ��찡 �߻��� ��
		cerr << "���Ͽ��� ����" << endl;
		//cerr ��ü�� ���۸� ������� �ʰ� �ٷ� ȭ�� ���
		exit(1);//����
	}
	fout << "append Line 1" << endl;
}