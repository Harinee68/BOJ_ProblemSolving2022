//Q10818. 최소, 최대
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int min;
	int max;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (i == 0) {
			min = num;
			max = num;
		}
		if (min > num) {
			min = num;
		}
		if (max < num) {
			max = num;
		}
	}

	cout << min << " "<< max << '\n';
}