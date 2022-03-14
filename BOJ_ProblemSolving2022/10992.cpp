//Q10992. º°Âï±â-17
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == n) {
			for (int j = 1; j <= 2 * i - 1; j++)
				cout << '*';
		}
		else {
			for (int j = 1; j <= n - i; j++)
				cout << ' ';
			cout << '*';
			for (int k = 1; k <= 2 * (i - 1) - 1; k++)
				cout << ' ';
			if (i == 1) {
				cout << '\n';
				continue;

			}
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}