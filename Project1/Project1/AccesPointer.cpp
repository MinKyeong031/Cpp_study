#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;
public:
	Cat() {
		age = 18;
		name = "�߿���";
	}
	~Cat() {}
	// setter, getter �Լ��� ����
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char* getName() { return (char*)name; }
	void setName(const char* name) {
		this->name = name;
	}
};
int main()
{
	Cat* pCat = new Cat;

	// ��ü�� ����Ű�� ������ ������ ��������� ����Լ��� �����ҋ�
	// ->�� �̿��ؼ� �����Ѵ�.
/*	cout << "������� ���� : " << pCat->getAge() <<
		", ������� �̸� : " << pCat->getName() << endl;
*/
	cout << "������� ���� : " << (*pCat).getAge() <<
		", ������� �̸� : " << (*pCat).getName() << endl;


	pCat->setAge(20);
	pCat->setName("�����");
	cout << "������� ���� : " << pCat->getAge() <<
		", ������� �̸� : " << pCat->getName() << endl;

	delete pCat;

	return 0;
}