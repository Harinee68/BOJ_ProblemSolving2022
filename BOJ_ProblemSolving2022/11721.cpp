//11721. 열 개씩 끊어 출력하기

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;

	//string 입력
	cin >> s;

	//10개씩 끊기
	int len = s.length();
	int loopnum = len / 10;
	int num = len % 10;

	for (int i = 0; i < loopnum; i++) {
		for (int j = 0; j < 10; j++) {
			cout << s[i * 10 + j];
		}
		cout << '\n';
	}

	for (int i = 0; i < num; i++) {
		cout << s[10 * loopnum + i];
	}
	cout << '\n';

}
