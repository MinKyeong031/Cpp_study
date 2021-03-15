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

//���ø� �Լ��� ������� �ʴ� �Լ��� ����
template <>
char* GreatValue(char* a, char* b) {
	cout << "GreatValue(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

//���ø� �Լ��� ������� �ʴ� �Լ��� ����
template <>
const char* GreatValue(const char* a, const char* b) {
	cout << "GreatValue(const char* a, const char* b)" << endl;
	return strcmp(a,b) > 0 ? a : b;
}

int main() {
	cout << GreatValue(100, 200) << endl;//���ø� �Լ� ȣ��
	cout << GreatValue('A', 'B') << endl;//���ø� �Լ� ȣ��
	cout << GreatValue(12.34, 56.78) << endl;//���ø� �Լ� ȣ��
	cout << GreatValue("Computer", "Science") << endl;
	//GreatValue("Computer", "Science") ȣ��� ��
	//const char* GreatValue(const char* a, const char* b)�Լ��� ����
	char str1[] = "Meister";
	char str2[] = "Mirim";
	cout << GreatValue(str1, str2) << endl;
	//GreatValue(str1, str2)�� ȣ��� ��
	//char* GreatValue(char* a, char* b) �Լ��� ����
	return 0;
}