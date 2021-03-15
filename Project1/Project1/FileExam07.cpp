#include <iostream>
using namespace std;

void showFormat() {
	cout << '@';
	cout.width(10);
	cout << "MIRIM " << "MEISTER" << endl;
	cout.width(10);
	cout << "School" << endl;
	cout.width(7);
	cout << 1234 << endl;
}

void main() {
	showFormat();
	cout << endl;
	cout.fill('*');
	showFormat();
	cout.precision(4);
	cout << 12.341 / 5 << endl;
}