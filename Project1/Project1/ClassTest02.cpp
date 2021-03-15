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
	NameCard(const char* myname, const char* mycompany, const char* myphone, int myposition) {
		int lenn = strlen(myname) + 1;
		name = new char[lenn];
		strcpy_s(name, lenn, myname);

		int lenc = strlen(mycompany) + 1;
		company = new char[lenc];
		strcpy_s(company, lenc, mycompany);

		int lenp = strlen(myphone) + 1;
		phone = new char[lenp];
		strcpy_s(phone, lenp, myphone);

		position = myposition;
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