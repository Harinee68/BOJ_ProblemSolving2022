#include <iostream>
using namespace std;

//10953. 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {
	
	int T;
	cin >> T;

	int a, b;
	char c;

	while (T--) {
		cin >> a >> c >> b;

		cout << a + b << '\n';
	}
}