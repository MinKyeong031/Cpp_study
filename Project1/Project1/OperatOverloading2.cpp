#include <iostream>
using namespace std;
class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	// 연산자 중복정의
	Point& operator-(Point& p) {
		xpos = xpos - p.xpos;
		ypos = ypos - p.ypos;
		return *this;
	}
	Point& operator+=(Point& p) {
		xpos += p.xpos;
		ypos += p.ypos;
		return *this;
	}
	Point& operator-=(Point& p) {
		xpos -= p.xpos;
		ypos -= p.ypos;
		return *this;
	}
	bool operator==(Point& p) {
		return ((xpos == p.xpos) && (ypos == p.ypos));
	}
};
int main() {
	Point pos1(20, 30);
	Point pos2(5, 7);
	Point pos3(5, 7);

	(pos1 - pos2).ShowPosition();//15,23
	(pos2 += pos3).ShowPosition();//10,14
	(pos2 -= pos3).ShowPosition();//5,7
	if (pos2 == pos3)
		cout << "equal" << endl;//
	else
		cout << "not equal" << endl;
	return 0;
}