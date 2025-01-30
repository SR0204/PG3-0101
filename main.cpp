#include <iostream>
#include <thread>

int main() {

	int&& c = 1;

	std::move(c);

	//ムーブコンストラクタ


	return 0;
}