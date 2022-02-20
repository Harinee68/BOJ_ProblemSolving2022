#include <iostream>
using namespace std;

//문제 10950. A+B-3
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {

	int T;
	cin >> T; //Test수를 나타내는 변수 T 입력 받음

	int a, b;

	/*for (int i = 0; i < T; i++) { //T만큼 a, b를 입력받고, a+b를 출력한다. (for문 사용)
		cin >> a >> b;
		cout << a + b << '\n';
	}*/

	while (T--) { //while문 사용
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}