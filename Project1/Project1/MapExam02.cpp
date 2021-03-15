#include <iostream>
#include <map>
#include <string>
using namespace std;

void print(map<int, string> Target_Map) {
	//main() �Լ��� Map ��ü�� print()�Լ� Target_Map �̸����� ����
	for (auto i : Target_Map) {
		//auto i�� Target_Map ��ü ������ �ڷ����� ���󰣴�.
		//����� ���� ���������� ó������ ������ ����� �ȴ�.
		cout << "Key -> " << i.first << ", Value -> " << i.second << endl;
	}
	cout << endl;
}

void main() {
	map<int, string> Map;
	//map ������ �����͸� ��� ��ü ���� Map�� <key, value>�������� �Ǿ� �ִ�.

	Map[1] = "First";//key : 1, value : "First"
	Map[2] = "Second";//key : 2,  value : "Second"
	Map[4] = "Fourth";//key : 4, value : "Fourth"
	Map[3] = "Third";//key : 3, value : "Third"
	//���� �����Ͱ� ���� �ɶ��� key������ ��������

	print(Map);
	for (int i = 0; i <= Map.size(); i++) {//Map.size()�� �����Ͱ���
		cout << Map.count(i) << endl;//�ش� ��ġ�� �����Ͱ� �ִ� �� Ȯ�� ������ 1 ������ 0
		//Map.count(i)���� count(i)�Լ��� iŰ ���� ������ 0, ������ 1�� �����Ѵ�.
		//���� ���, count(0)���� 0�� Ű�̱� ������ �����Ͱ� value�� ����. �׷��� count(0)�Լ��� 0�� ���
		//count(1)���� Ű�� 1�̰� value�� "First" ���� �����ϱ� ������ 1�� ����Ѵ�.
	}
}
