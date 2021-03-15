//1-100사이의 숫자에서 3의 배수를 제외한 나머지의 숫자의 합과 평균을 구하시오.
//합은 hap, 평균은 avg로 한다.
#include <iostream>
using namespace std;

int main()
{
	int hap = 0;
	int cnt = 0;

	for (int i = 0; i <= 100; i++) {
		if (i % 3 != 0) {
			hap += i;
			//cout << i << "  ";
			cnt++;
		}
		else {
			continue;//반복문의 증감문을 실행
		}
	}
	cout << endl;//줄바꿈
	cout << "1-100사이의 숫자에서 3의 배수를 제외한 나머지의 숫자의 합 : " << hap << endl;
	cout << "1-100사이의 숫자에서 3의 배수를 제외한 나머지의 숫자의 평균 : " << (double)hap/cnt << endl;
	cnt++;
}