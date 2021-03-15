#include <iostream>
#include <string>
using namespace std;

class BaseData {
private:
	int m_nData;
public:
	BaseData() {
		cout << "BaseData" << endl;
	}
	int GetData() {
		return m_nData;
	}
	void SetData(int nParam) {
		m_nData = nParam;
	}
protected:
	void PrintData() {
		cout << "BaseData::PrintData()" << endl;
	}
};

class DerivedData :public BaseData {
public:
	DerivedData() {
		//상위 클래스의 생성자를 실행하는 명령문이 없습니다.
		//그러나 컴파일러가 상위 클래스의 기본 생성자를 먼저 실행한 후에
		//하위 클래스의 기본 생성자를 자동으로 실행한다.
		cout << "DerivedData()" << endl;
	}
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << "BaseData::GetData()" << endl;
	}
};

int main() {
	DerivedData data;
	//data 객체 생성시 생성자를 호출하는데
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}