#include <iostream>
using namespace std;

class Cat {
private:
	//��������� �޸𸮸� �������� �Ҵ�
	int* pAge = new int;
	const char* pName = new char;

public:
	Cat() {
		*pAge = 18;
		pName = "�߿���";
	}
	~Cat() {
		//�Ҹ��ڿ� ��������� �����ϴ� ������ ����Ѵ�.
		delete pAge;
		delete pName;
	}

	int getAge() {
		return *pAge;
	}
	void setAge(int age) {
		*pAge = age;
	}

	char* getName() {
		return (char*)pName;
	}
	void setName(const char* name) {
		pName = name;
	}
};


int main()
{
	//pCat�� heap������ CatŬ���� ũ���� ��ü�� ����Ű�� �����ͺ����̴�.
	Cat* pCat = new Cat;

	//(*pCat).getAge()���� (*pCat)�� CatŬ������ ��ü����ó�� ����� �� �ִ�.
	cout << "������� ���� : " << (*pCat).getAge() << ", ������� �̸� : " << pCat->getName() << endl;

	pCat->setAge(20);
	pCat->setName("�����");
	cout << "������� ���� : " << (*pCat).getAge() << ", ������� �̸� : " << pCat->getName() << endl;

	return 0;
}