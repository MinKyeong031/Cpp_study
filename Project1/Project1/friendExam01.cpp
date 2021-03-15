#include <iostream>
using namespace std;

class MyClass {
private:
	int x, y, z;
public:
	MyClass(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	friend class FriendClass;//MyClass 클래스 안에서 다른 클래스인 FriendClass 에게 
	//친구관계를 맺게 되면 FriendClass 에서는 MyClass 멤버에 모두 접근할 수 있는 권한이 있음
};
class FriendClass {
public:
	void ShowMyClass() {
		MyClass my(100, 200, 300);
		cout << "x = " << my.x << endl;//오류 발생 X
		cout << "y = " << my.y<< endl;
		cout << "z = " << my.z << endl;
	}
};

int main() {
	FriendClass your;
	your.ShowMyClass();

	return 0;
}