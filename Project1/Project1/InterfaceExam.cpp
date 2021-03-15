#include <iostream>
using namespace std;

class CplUSB {
public:
	CplUSB() {}
	virtual ~CplUSB(){}
	//객체 소멸 시 하위, 상위 순으로 소멸 되어야 하는데 virtual 붙이지 않으면 상위만
	//소멸된다. 

	//순수 가상 함수 선언
	virtual int GetSerial() = 0;
protected:
	int Serial_ID;
};

void GetPrint(CplUSB* ptr) {
	//CplUSB* ptr = &cm 와 같은 문장이 된다. 이 문장은 형변환이 발생
	//CplUSB* ptr = &cp 와 같은 문장이 된다. 이 문장은 형변환이 발생
	cout << "장치 ID : " << ptr->GetSerial() << endl;
}

class CplMouse :public CplUSB {
public:
	CplMouse(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "Mouse 클래스";
		return Serial_ID;
	}
};

class CellPhone :public CplUSB {
public:
	CellPhone(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "스마트폰 클래스";
		return Serial_ID;
	}
};

int main() {
	CplMouse cm(1234);
	CellPhone cp(5678);

	::GetPrint(&cm);
	GetPrint(&cp);

	return 0;
}