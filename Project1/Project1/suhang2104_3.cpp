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
		title = "타이타닉";
		director = "제임스 카메론";
		rating = "9.5";
	}
	Movie(string title, string director, string rating) {
		this->title = title;
		this->director = director;
		this->rating = rating;
	}
	void ShowMovieInfo(int cnt){
		cout << "영화 #" << cnt << endl;
		cout << "영화 제목: " << this->title << endl;
		cout << "영화 감독: " << this->director << endl;
		cout << "영화 평점: " << this->rating << endl << endl;
	}
};

int main(void) {
	Movie m1;
	Movie m2("지오스톰", "딘 데블린", "8.34");
	int cnt = 1;
	m1.ShowMovieInfo(cnt);
	cnt += 1;
	m2.ShowMovieInfo(cnt);

	return 0;
}