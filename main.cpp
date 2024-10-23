#include<stdio.h>
#include<functional>
#include<time.h>
#include<Windows.h>

typedef void (*PFunc)(int*);

//コールバック関数
void DispResult(int* x)
{

}

void SetTimeOut(PFunc y, int second)
{
	//コールバック関数呼び出し
	Sleep(second * 1000);

	y(&second);
}


int main()
{


	unsigned int currentTime = time(nullptr);
	srand(currentTime);

	const int diceNum = 2;
	int pip[diceNum];
	int pipTotal = 0;

	//サイコロの出目
	for (int i = 0; i < diceNum; i++)
	{
		pip[i] = rand() % 6;

		pipTotal += pip[i];
	}

	std::function<void(void)>tyouhan = [=]() {




		printf("丁か半か。丁：０　半：1\n");


		int num = 0;
		scanf_s("%d", &num);

		if (num == 0)
		{
			printf("丁を選択\n");
		}
		else if (num == 1)
		{
			printf("半を選択\n");
		}

		//コールバック関数
		PFunc p;
		p = DispResult;
		SetTimeOut(p, 3);

		//結果
		if (pipTotal % 2 == 0)
		{

			if (num == 0)
			{
				printf("当たり\n");
			}
			else if (num == 1)
			{
				printf("間違い\n");
			}

			printf("結果　丁\n");
		}
		else if (pipTotal % 2 == 1)
		{

			if (num == 0)
			{
				printf("間違い\n");
			}
			else if (num == 1)
			{
				printf("当たり\n");
			}

			printf("結果　半\n");
		}
		printf("サイコロの出た目  [%d] [%d]\n", pip[0], pip[1]);

		printf("サイコロの合計 %d\n", pipTotal);

		};

	tyouhan();


	return 0;
}