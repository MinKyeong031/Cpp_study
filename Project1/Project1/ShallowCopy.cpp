#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		//name = myname; -> 오류발생,
		//문자열을 복사할때는 반드시 strcpy_s() 함수를 사용하낟.
		int len = strlen(myname) + 1;
		//strlen(myname), 이 문장에서 strlent(String Length)은 myname의 문자열의 길이 +1은
		//문자열 마지막에 null값을 삽입하기 위함
		name = new char[len];//heap영역에 메로리 할당
		strcpy_s(name, len, myname);//매개변수 myname에 있는 문자열을 멤버변수 name에게
		//len 길이 만큼 복사한다.
		age = myage;
	}
	void ShowPerson() const
	{
		cout << "이름 : " << this->name << "\t";
		cout << "나이 : " << this->age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!!" << endl;
	}
};

int main()
{
	Person man1("Lee Mee Rim", 27);
	//객체 생성시 매개변수 2개를 갖는 생성자 호출
	Person man2(man1);
	//Person man2 = man1; or Person man2{man1};
	//복사생성자를 호출행 하는데, 복사 생성자가 없으면 디폴트 복사 생성자를 호출
	man1.ShowPerson();
	man2.ShowPerson();
	//프로그램 종료시 소멸자가 호출된다.
	//man2, man1순으로 객체가 소멸되는데, 소멸자가 heap에 있는
	//name가 가리키는 문자열 객체가 man2 객체가 소멸될 때 삭제된다.
	//따라서 man1 객체에서도 동일하게 삭제를 해야 되기 때문에 heap에 있는
	//name 객체를 2번 삭제 해야 하기 때문에 오류가 발생한다.
	return 0;
}