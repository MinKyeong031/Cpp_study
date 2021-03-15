#include <iostream>
using namespace std;

class Cat {
private:
	int* pAge = new int;
	const char* pName = new char;
public:
	Cat() {
		*pAge = 18;
		pName = "�߿���";
	}
	~Cat() { // pAge�� pName�� ����Ű�� �޸�(heap)�� 
		//�����Ѵ�
		delete pAge;
		delete pName;
	}
	// setter, getter �Լ��� ����
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char* getName() { return (char*)pName; }
	void setName(const char* name) {
		pName = name;
	}
};

int main()
{
	Cat* pCat = new Cat;

	cout << "������� ���� : " << pCat->getAge() <<
		", ������� �̸� : " << pCat->getName() << endl;

	pCat->setAge(20);
	pCat->setName("�����");
	cout << "������� ���� : " << pCat->getAge() <<
		", ������� �̸� : " << pCat->getName() << endl;

	// delete pCat; --- ��������� �������� �޸𸮸� �Ҵ�
	// ���� ���� ��� ������ ���� �޸𸮸� �����Ѵ�.
	// main() �Լ������ �Ҹ��ڰ� ȣ��ȴ�. 
	return 0;
}