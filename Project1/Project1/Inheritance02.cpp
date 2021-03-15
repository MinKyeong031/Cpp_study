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
		//���� Ŭ������ �����ڸ� �����ϴ� ��ɹ��� �����ϴ�.
		//�׷��� �����Ϸ��� ���� Ŭ������ �⺻ �����ڸ� ���� ������ �Ŀ�
		//���� Ŭ������ �⺻ �����ڸ� �ڵ����� �����Ѵ�.
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
	//data ��ü ������ �����ڸ� ȣ���ϴµ�
	data.SetData(10);
	cout << data.GetData() << endl;

	return 0;
}