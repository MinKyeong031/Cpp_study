#include <iostream>
#include <map>
using namespace std;
int main() {
	map<int, int> m;//map객체인 m 객체 생선

	m.insert(pair<int, int>(8, 123)); //데이터 삽입. key:8, value:123
	m.insert(pair<int, int>(9, 345));//데이터 삽입. key:9, value:345
	m.insert(pair<int, int>(7, 234));//데이터 삽입. key:7, value:234

	//데이터 삽입
	pair<int, int> p(6, 321);
	m.insert(p); // pair 객체 생성 insert()
	//m.insert(pair<int,int>(6,321));와 같다.

	m[2] = 300; //데이터 삽입. key:2, value:300
	m[4] = 400;
	m[3] = 500;

	// iterator 반복자 이용
	map<int, int>::iterator iter;
	//iter변수는 map 클래스 안에 있는 iterator 인터페이스의 반복자이다.
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << ", " << (*iter).second << ")" << " ";
	//m.begin();는  map객체(key,value)의 첫번째 데이터의 주소값이다.
	//m.end()는 map객체(key,value)의 마지막 데이터의 다음 위치의 주소값이다.
	//(*iter).first는 iter가 가리키는 첫번째 데이터의 key값이다.
	//(*iter).second는 iter가 가리키는 첫번째 데이터의 value값이다.
	cout << endl;

	// 참조 변수 이용
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	//map1.first : key값, map1.second : value값
	//key값의 오름차순으로 출력된다.
	cout << endl;

	m[4] = 432; // value 값 변경
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;


	pair<map<int, int>::iterator, bool > pa;
	//pa.first를 map<int, int>::iterator의 반복자 변수이다.
	//bool를 pa.second라 한다.

	pa = m.insert(pair<int, int>(10, 30));
	//pa.second는 m객체에 정상적으로 데이터가 저장되면 true값이 저장된다.
	
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " 저장 완료!" << endl;
	else
		cout << "key 10가 이미 m에 있습니다." << endl;

	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;

	// insert 결과 실패 (중복 key 삽입)
	pa = m.insert(pair<int, int>(10, 40));
	if (pa.second)//key 10에 이미 데이터가 존재하면 데이터 삽입을 할 수 없다.
		//따라서 pa.second에는 false값이 저장된다.
		cout << "key : " << pa.first->first << ", value : " <<
		pa.first->second << " 저장 완료!" << endl;
	else
		cout << "key 10가 이미 m에 있습니다." << endl;

	return 0;
}