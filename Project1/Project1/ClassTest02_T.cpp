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
	NameCard(const char* name, const char* company, const char* phone, int pos) :position(pos) {
		//this->name = name -> 오류발생
		//문자열을 복사할 때는 strcpy_s() 함수를 사용할 것
		this->name = new char[strlen(name) + 1];//heap 영역에 메모리 할당
		this->company = new char[strlen(company) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->company, strlen(company) + 1, company);
		strcpy_s(this->phone, strlen(phone) + 1, phone);
		//phone은 매개변수이고 그 내용을 this->phone는 멤버변수에게 strlen(phone) + 1의 길이 만큼 출력
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