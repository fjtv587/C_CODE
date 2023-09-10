#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>      //使用strand，rand函数的前置条件
#include<time.h>
//写一个彩字游戏
//1.系统自动生成1-100内的随机数
//2.猜数字
//3.猜错了系统会告诉你大了还是小了，猜对了游戏结束
//4.无次数限制。
void game()                                   //游戏模块
{
	
	int ret = rand() % 100 + 1;           //%100的余数是0-99，再加上1就是  0-100了
                                        //rand能够生成0-32767间的随机数，但要伴随着srand来使用。  time函数是来形成一个时间								
	int guess = 0;
	while (1) 
	{
		printf("猜一猜数字\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你！猜对啦！！！！\n");
			break;
		}
	}

}
void menu()                          //菜单模块
{
	printf("*****************\n");
	printf("*****************\n");
	printf("***1.开始游戏****\n");
	printf("***0.结束游戏****\n");
	printf("*****************\n");
	printf("*****************\n");
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));   //和上面生成随机数的程序配套使用
	do
	{
		menu();//打开菜单
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	} while (input);

	return 0;
}




