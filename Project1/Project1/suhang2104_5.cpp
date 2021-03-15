#include <iostream>
using namespace std;

class Book {
	char* title;//제목 문자열
	int price;//가격
public:
	Book(const char* title, int price);
	Book(Book& rhs);
	void set(const char* title, int price);
	~Book();
	void show();
};

Book::Book(const char* title, int price) {
	int len;
	len = strlen(title) + 1;
	this->title = new char[len];
	strcpy_s(this->title, len, title);
	this->price = price;
}

Book::Book(Book& rhs) {
	int len = strlen(rhs.title) + 1;
	this->title = new char[len];
	strcpy_s(this->title, len, rhs.title);
	this->price = rhs.price;
}

void Book::set(const char* title, int price) {
	int len;
	len = strlen(title) + 1;
	this->title = new char[len];
	strcpy_s(this->title, len, title);
	this->price = price;
}

Book::~Book() {
	delete [] title;
}

void Book::show() {
	cout << this->title << this->price << "원" << endl;
}

int main() {
	Book cpp("C++은 재미있다.", 35000);
	Book java = cpp;
	java.set("JAVA는 재미없다.", 25000);
	cpp.show();
	java.show();
}