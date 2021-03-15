#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; 	 // 정수만 삽입 가능한 벡터 생성

	//v[0] = 1234; -> 오류발생
	
	v.push_back(100);//데이터 삽입 v[0] = 100
	v.push_back(200);//데이터 삽입 v[0] = 200
	v.push_back(300);//데이터 삽입 v[0] = 300

	//v.size()는 v벡터에 들어 있는 데이터의 갯수
	for (int i = 0; i < v.size(); i++) 		 // 벡터의 모든 원소 출력
		cout << v[i] << "  "; 	 	 // v[i]는 벡터의 i 번째 원소
	cout << endl;

	v[0] = 123; 	 // 벡터의 첫 번째 원소를 10으로 변경
	int n = v[2]; 	 // n에 300이 저장
	v.at(2) = 500; 	 // 벡터의 3번째 원소를 500으로 변경, v[2] = 500;과 같다.

	for (int i = 0; i < v.size(); i++) // 벡터의 모든 원소 출력
		cout << v[i] << "  "; // v[i]는 벡터의 i 번째 원소
	cout << endl;
}