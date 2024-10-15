#include<stdio.h>
#include<functional>


int main(int argc,const char*argv[]) {

	std::function<int(int)>fx = [](int t) {return 5 + 1; };

	auto fx2 = [](int i) {return 3 + 1; };


	printf("%d", fx2);

	return 0;
}