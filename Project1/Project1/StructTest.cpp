#include <iostream>
using namespace std;

#define NAME_SIZE 32

struct _tagStudent
{
	char strName[NAME_SIZE];
	int iNumber;
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	double dAvg;
};

int main()
{
	_tagStudent tStudent = {};
	//_tagStudent tStudent;
	_tagStudent tStudentArr[100] = {};

	tStudent.iKor = 100;
	strcpy_s(tStudent.strName, "가나다라 asdf");
	cout << "이름 : " << tStudent.strName << endl;

	strcat_s(tStudent.strName, "문자열 붙이기");
	cout << "이름 : " << tStudent.strName << endl;

	strcpy_s(tStudent.strName, "홍길동");
	cout << "비교할 이름을 입력하세요 : ";
	char strName[NAME_SIZE] = {};
	cin >> strName;

	if (strcmp(tStudent.strName, strName) == 0) {
		cout << "학생을 찾았습니다." << endl;
	}
	else {
		cout << "찾는 학생이 없습니다." << endl;
	}

	cout << "이름 : " << tStudent.strName << endl;
	cout << "학번: " << tStudent.iNumber << endl;
	cout << "국어: " << tStudent.iKor << endl;
	cout << "영어: " << tStudent.iEng<< endl;
	cout << "수학: " << tStudent.iMath << endl;
	cout << "총점: " << tStudent.iTotal << endl;
	cout << "평균: " << tStudent.dAvg << endl;

	return 0;
}

