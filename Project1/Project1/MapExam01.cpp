#include <iostream>
#include <map>
using namespace std;
int main() {
	map<int, int> m;//map��ü�� m ��ü ����

	m.insert(pair<int, int>(8, 123)); //������ ����. key:8, value:123
	m.insert(pair<int, int>(9, 345));//������ ����. key:9, value:345
	m.insert(pair<int, int>(7, 234));//������ ����. key:7, value:234

	//������ ����
	pair<int, int> p(6, 321);
	m.insert(p); // pair ��ü ���� insert()
	//m.insert(pair<int,int>(6,321));�� ����.

	m[2] = 300; //������ ����. key:2, value:300
	m[4] = 400;
	m[3] = 500;

	// iterator �ݺ��� �̿�
	map<int, int>::iterator iter;
	//iter������ map Ŭ���� �ȿ� �ִ� iterator �������̽��� �ݺ����̴�.
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << ", " << (*iter).second << ")" << " ";
	//m.begin();��  map��ü(key,value)�� ù��° �������� �ּҰ��̴�.
	//m.end()�� map��ü(key,value)�� ������ �������� ���� ��ġ�� �ּҰ��̴�.
	//(*iter).first�� iter�� ����Ű�� ù��° �������� key���̴�.
	//(*iter).second�� iter�� ����Ű�� ù��° �������� value���̴�.
	cout << endl;

	// ���� ���� �̿�
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	//map1.first : key��, map1.second : value��
	//key���� ������������ ��µȴ�.
	cout << endl;

	m[4] = 432; // value �� ����
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;


	pair<map<int, int>::iterator, bool > pa;
	//pa.first�� map<int, int>::iterator�� �ݺ��� �����̴�.
	//bool�� pa.second�� �Ѵ�.

	pa = m.insert(pair<int, int>(10, 30));
	//pa.second�� m��ü�� ���������� �����Ͱ� ����Ǹ� true���� ����ȴ�.
	
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " ���� �Ϸ�!" << endl;
	else
		cout << "key 10�� �̹� m�� �ֽ��ϴ�." << endl;

	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;

	// insert ��� ���� (�ߺ� key ����)
	pa = m.insert(pair<int, int>(10, 40));
	if (pa.second)//key 10�� �̹� �����Ͱ� �����ϸ� ������ ������ �� �� ����.
		//���� pa.second���� false���� ����ȴ�.
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " ���� �Ϸ�!" << endl;
	else
		cout << "key 10�� �̹� m�� �ֽ��ϴ�." << endl;

	return 0;
}