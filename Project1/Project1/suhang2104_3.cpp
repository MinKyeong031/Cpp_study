#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
	string title;
	string director;
	string rating;
public:
	Movie() {
		title = "Ÿ��Ÿ��";
		director = "���ӽ� ī�޷�";
		rating = "9.5";
	}
	Movie(string title, string director, string rating) {
		this->title = title;
		this->director = director;
		this->rating = rating;
	}
	void ShowMovieInfo(int cnt){
		cout << "��ȭ #" << cnt << endl;
		cout << "��ȭ ����: " << this->title << endl;
		cout << "��ȭ ����: " << this->director << endl;
		cout << "��ȭ ����: " << this->rating << endl << endl;
	}
};

int main(void) {
	Movie m1;
	Movie m2("��������", "�� ����", "8.34");
	int cnt = 1;
	m1.ShowMovieInfo(cnt);
	cnt += 1;
	m2.ShowMovieInfo(cnt);

	return 0;
}