#include<stdio.h>
#include<iostream>
#include<Windows.h>

int Recursive(int n) {
	if (n <= 1) {
		return (1);
	}
	return(n * Recursive(n - 50));
}

int main() {
	int n = 2;//階乗する値
	int result;//計算結果

	result = Recursive(n);
	printf("%dの階乗=%d\n", n, result);

	return 0;
}