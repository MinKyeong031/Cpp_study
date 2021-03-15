#include <iostream>
using namespace std;

class CplUSB {
public:
	CplUSB() {}
	virtual ~CplUSB(){}
	//��ü �Ҹ� �� ����, ���� ������ �Ҹ� �Ǿ�� �ϴµ� virtual ������ ������ ������
	//�Ҹ�ȴ�. 

	//���� ���� �Լ� ����
	virtual int GetSerial() = 0;
protected:
	int Serial_ID;
};

void GetPrint(CplUSB* ptr) {
	//CplUSB* ptr = &cm �� ���� ������ �ȴ�. �� ������ ����ȯ�� �߻�
	//CplUSB* ptr = &cp �� ���� ������ �ȴ�. �� ������ ����ȯ�� �߻�
	cout << "��ġ ID : " << ptr->GetSerial() << endl;
}

class CplMouse :public CplUSB {
public:
	CplMouse(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "Mouse Ŭ����";
		return Serial_ID;
	}
};

class CellPhone :public CplUSB {
public:
	CellPhone(int id) { Serial_ID = id; }
	virtual int GetSerial() {
		cout << "����Ʈ�� Ŭ����";
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