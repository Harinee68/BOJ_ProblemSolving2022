//11721. �� ���� ���� ����ϱ�

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string s;

	//string �Է�
	cin >> s;

	//10���� ����
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
