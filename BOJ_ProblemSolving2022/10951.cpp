#include <iostream>
using namespace std;

//문제 10951. A+B-4
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main() {
	int a, b;

	/*while (cin >> a >> b) { //첫 번째 방법
		cout << a + b << '\n';
	}*/

	//두 번째 방법
	while (true) {
		cin >> a >> b;
		if (cin.eof() == true) {
			break;
		}
		// 알고리즘 문제에서 입력 값의 범위가 주어지지 않는 경우,
		// 파일이 종료될 때 까지 입력을 받으라는 의미이므로
		// 파일의 끝을 의미하는 eof를 사용하면 된다. 
		cout << a + b << '\n';
	}
}