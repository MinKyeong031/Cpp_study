#include <iostream>
using namespace std;

namespace definition { int jungui = 1; }
namespace justice { int jungui = 0; }

int main(void) {
	cout << definition::jungui << endl;
	cout << justice::jungui << endl;

	return 0;
}