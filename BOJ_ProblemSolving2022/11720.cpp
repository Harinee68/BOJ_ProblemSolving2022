//11720. ������ ��
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; //�Է����� �־��� ���� n
	cin >> n;

	vector<int> num(n); //vector�� ����Ͽ� num �迭 ����

	int sum = 0; //���� �����ϴ� ���� sum ����


	for (int i = 0; i < n; i++) { //n��ŭ for�� �ݺ�
		scanf("%1d", &num[i]); 
		/*scanf�� �Է� ����. 
		%1d ���� �����ڸ� ����ϸ� ���� �� �ڸ��� �Է� �޴� ���� �����ϴ�.*/
		sum += num[i]; 
	}

	cout << sum;

}