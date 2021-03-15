// ++a, --b -- ����(pre fix)������
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
	// ����(post fix) �����ڰ� �� ���
	// pos++  --> Point& operator++(int)
	// ������ �ߺ����� �ۼ�
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


