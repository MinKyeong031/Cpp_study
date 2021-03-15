#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		//name = myname; -> �����߻�,
		//���ڿ��� �����Ҷ��� �ݵ�� strcpy_s() �Լ��� ����ϳ�.
		int len = strlen(myname) + 1;
		//strlen(myname), �� ���忡�� strlent(String Length)�� myname�� ���ڿ��� ���� +1��
		//���ڿ� �������� null���� �����ϱ� ����
		name = new char[len];//heap������ �޷θ� �Ҵ�
		strcpy_s(name, len, myname);//�Ű����� myname�� �ִ� ���ڿ��� ������� name����
		//len ���� ��ŭ �����Ѵ�.
		age = myage;
	}
	void ShowPerson() const
	{
		cout << "�̸� : " << this->name << "\t";
		cout << "���� : " << this->age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!!" << endl;
	}
};

int main()
{
	Person man1("Lee Mee Rim", 27);
	//��ü ������ �Ű����� 2���� ���� ������ ȣ��
	Person man2(man1);
	//Person man2 = man1; or Person man2{man1};
	//��������ڸ� ȣ���� �ϴµ�, ���� �����ڰ� ������ ����Ʈ ���� �����ڸ� ȣ��
	man1.ShowPerson();
	man2.ShowPerson();
	//���α׷� ����� �Ҹ��ڰ� ȣ��ȴ�.
	//man2, man1������ ��ü�� �Ҹ�Ǵµ�, �Ҹ��ڰ� heap�� �ִ�
	//name�� ����Ű�� ���ڿ� ��ü�� man2 ��ü�� �Ҹ�� �� �����ȴ�.
	//���� man1 ��ü������ �����ϰ� ������ �ؾ� �Ǳ� ������ heap�� �ִ�
	//name ��ü�� 2�� ���� �ؾ� �ϱ� ������ ������ �߻��Ѵ�.
	return 0;
}