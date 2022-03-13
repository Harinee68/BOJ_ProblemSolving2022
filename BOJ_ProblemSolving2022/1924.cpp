//Q1924. 2007³â
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int mon;
	int days;
	int day = 0;

	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cin >> mon;
	cin >> days;

	for (int i = 0; i < mon-1; i++) {
		day += month[i];
	}

	day = day + days;
	day = day % 7;

	switch (day) {
	case 0:
		cout << "SUN" << '\n';
		break;
	case 1:
		cout << "MON" << '\n';
		break;
	case 2:
		cout << "TUE" << '\n';
		break;
	case 3:
		cout << "WED" << '\n';
		break;
	case 4:
		cout << "THU" << '\n';
		break;
	case 5:
		cout << "FRI" << '\n';
		break;
	case 6:
		cout << "SAT" << '\n';
		break;
	default:
		cout << "X" << '\n';
		break;
	}

}