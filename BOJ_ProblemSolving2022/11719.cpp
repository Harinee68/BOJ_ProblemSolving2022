//11719. 그대로 출력하기 2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (true) {

		getline(cin, s);
		cout << s << '\n';

		if (cin.eof() == true) {
			break;
		}
	}

}