//11021. A+B-7
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

	int a, b;

	for (int i = 1; i <= T; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << '\n';
	}
}