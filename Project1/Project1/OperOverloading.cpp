// ++a, --b -- 전위(pre fix)연산자
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
	// 후위(post fix) 연산자가 올 경우
	// pos++  --> Point& operator++(int)
	// 연산자 중복정의 작성
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	Point& operator--()
	{
		xpos -= 1;
		ypos -= 1;
		return *this;
	}
};
int main()
{
	Point pos(1, 2);
	++pos; // pos.operator++();
	pos.ShowPosition();
	--pos; // pos.operator--();
	pos.ShowPosition();

	++(++pos); // ++(pos.operator++());
	pos.ShowPosition();
	--(--pos);// --(pos.operator--());
	pos.ShowPosition();

	return 0;
}


