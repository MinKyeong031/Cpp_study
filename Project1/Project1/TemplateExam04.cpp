#include <iostream>
using namespace std;

template<typename T>
T Max(T a, T b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	cout << Max(100, 200) << endl;
	cout << Max('A', 'B') << endl;
	cout << Max(12.34, 56.78) << endl;
	cout << Max("Computer", "Science") << endl;

	return 0;
}