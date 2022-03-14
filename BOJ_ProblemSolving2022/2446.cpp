//Q2446. º°Âï±â-9
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int k = 2 * (n - i) - 1; k >= 1; k--)
			cout << '*';
		cout << '\n';
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = i; j > 0; j--)
			cout << ' ';
		for (int k = 1; k <= 2 * (n - i) - 1; k++)
			cout << '*';
		cout << '\n';
	}
	
	return 0;

}