#include <iostream>
#include <string>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	//�Լ� ����
	//���, ����, �븮, ������ ����ϴ� �Լ�
	void ShowPosition(int pos) {
		switch (pos) {
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
			break;
		}
	}
}

class NameCard {
private:
	char* name;
	char* company;
	char* phone;
	int position;
public:
	NameCard(const char* name, const char* company, const char* phone, int pos) :position(pos) {
		//this->name = name -> �����߻�
		//���ڿ��� ������ ���� strcpy_s() �Լ��� ����� ��
		this->name = new char[strlen(name) + 1];//heap ������ �޸� �Ҵ�
		this->company = new char[strlen(company) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->company, strlen(company) + 1, company);
		strcpy_s(this->phone, strlen(phone) + 1, phone);
		//phone�� �Ű������̰� �� ������ this->phone�� ����������� strlen(phone) + 1�� ���� ��ŭ ���
	}
	void ShowNameCardInfo() {
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		cout << "���� : ";
		COMP_POS::ShowPosition(position);
		cout << endl;
	}
	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};


int main() {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "mirimSW", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "meisterComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}