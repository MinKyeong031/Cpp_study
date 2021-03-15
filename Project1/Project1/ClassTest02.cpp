#include <iostream>
#include <string>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	//함수 구현
	//사원, 주임, 대리, 과장을 출력하는 함수
	void ShowPosition(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
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
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << phone << endl;
		cout << "직급 : ";
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