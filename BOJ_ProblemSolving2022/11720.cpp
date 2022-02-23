//11720. 숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; //입력으로 주어진 숫자 n
	cin >> n;

	vector<int> num(n); //vector를 사용하여 num 배열 생성

	int sum = 0; //합을 저장하는 변수 sum 선언


	for (int i = 0; i < n; i++) { //n만큼 for문 반복
		scanf("%1d", &num[i]); 
		/*scanf로 입력 받음. 
		%1d 형식 지정자를 사용하면 정수 한 자리씩 입력 받는 것이 가능하다.*/
		sum += num[i]; 
	}

	cout << sum;

}