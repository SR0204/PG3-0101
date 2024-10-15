#include<stdio.h>
#include<Windows.h>

typedef void(*PFunc)(int*);

void DispResult(int* s) {

	printf("成功\n", *s);

}

void setTimeout(PFunc p, int second) {

	//コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&second);
}

int main() {

	printf("start\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	return 0;
}