#include <iostream>
using namespace std;

template <typename T>

T GreatValue(T a, T b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

//템플릿 함수에 적용되지 않는 함수를 정의
template <>
char* GreatValue(char* a, char* b) {
	cout << "GreatValue(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

//템플릿 함수에 적용되지 않는 함수를 정의
template <>
const char* GreatValue(const char* a, const char* b) {
	cout << "GreatValue(const char* a, const char* b)" << endl;
	return strcmp(a,b) > 0 ? a : b;
}

int main() {
	cout << GreatValue(100, 200) << endl;//템플릿 함수 호출
	cout << GreatValue('A', 'B') << endl;//템플릿 함수 호출
	cout << GreatValue(12.34, 56.78) << endl;//템플릿 함수 호출
	cout << GreatValue("Computer", "Science") << endl;
	//GreatValue("Computer", "Science") 호출될 때
	//const char* GreatValue(const char* a, const char* b)함수가 실행
	char str1[] = "Meister";
	char str2[] = "Mirim";
	cout << GreatValue(str1, str2) << endl;
	//GreatValue(str1, str2)가 호출될 때
	//char* GreatValue(char* a, char* b) 함수가 실행
	return 0;
}