#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
	int getBalance() const;
	void setBalance(int balance);
	const string& getNumber() const;
	void setNumber(const string& number);
};

void BankAccount::init(string number, int balance) {
	this->number = number;
	this->balance = balance;
}

void BankAccount::deposit(int amount) {
	this->balance += amount;
}

void BankAccount::withdraw(int amount) {
	if ((this->balance - amount) < 0) {
		cout << "잔액이 부족함" << endl;
	}
	else {
		this->balance -= amount;
	}
}

int BankAccount::getBalance() const {
	return this->balance;
}

void BankAccount::setBalance(int balance) {
	this->balance = balance;
}

const string& BankAccount::getNumber() const {
	return this->number;
}

void BankAccount::setNumber(const string& number) {
	this->number = number;
}

int main() {
	BankAccount obj;
	obj.init("010-1111-2222", 1000000);
	cout << "현재 잔액: " << obj.getBalance() << endl;
	obj.deposit(3000000);
	cout << "3000000원 입금 후 현재 잔액: " << obj.getBalance() << endl;
	obj.withdraw(2000000);
	cout << "2000000원 출금 후 현재 잔액: " << obj.getBalance() << endl;
	obj.withdraw(5000000);
	return 0;
}