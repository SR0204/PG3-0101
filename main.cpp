#include<stdio.h>
#include<iostream>
#include<Windows.h>

int Recursive(int n) {
	if (n <= 1) {
		return (100);
	}
	return(Recursive(n-1)*2-50);
}

int main() {

	int x = 10;//階乗する値

	int y = 1072;//賃金

	int result;//計算結果

	for (int i = 1; i < 10; i++) {

		result = Recursive(i);

		printf("一般的な時給 %d\n", y);
		printf("再帰的な時給 %d\n", result);

		y += 1072;
	}

	

	return 0;
}