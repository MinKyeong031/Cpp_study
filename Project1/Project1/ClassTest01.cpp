#include <iostream>
using namespace std;

// 과일(사과) 판매자 클래스 
class FruitSeller {
private:
	int APPLE_PRICE; // 사과 가격
	int numOfApples; // 사과의 개수
	int myMoney; // 수입
public:
	FruitSeller(int price, int num, int money) :APPLE_PRICE(price), numOfApples(num), myMoney(money) {}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;//사과 개수는 감소
		numOfApples -= num;//수익은 증가
		myMoney += money;
		return num;
	}
	void ShowSalesResult() {
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
	}
};

// 과일(사과)  구매자 클래스 
class FruitBuyer {
private:
	int myMoney; // 잔액
	int numOfApples = 0; // 사과 개수
public:
	FruitBuyer(int money) : myMoney(money) {}
	void BuyApples(FruitSeller& seller, int money) { // main()에 있는
		// seller객체와 BuyApples()함수에 있는 seller객체는 같다.
		numOfApples += seller.SaleApples(money);//사과 개수 증가
		myMoney -= money;//잔액은 감소
	}
	void ShowBuyResult() {
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl;
	}
};


int main(void)
{
	FruitSeller seller(1000, 20, 0); // 사과 가격, 현재 보유하고 있는 사과 개수, 현재 수입
	FruitBuyer buyer(5000); // 구매자의 잔액

	buyer.BuyApples(seller, 2000); // 사과 구매

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}