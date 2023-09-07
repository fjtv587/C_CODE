#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>;


//int main()
//{
//	printf("\a\a\a");
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", '\130'); //先把八进制数的130转译成为88的十进制数，然后找出88所对应的ASCII码是X 
//	printf("%c\n", '\x30'); //先把十六进制数的30转译成为48的十进制数，然后找出48所对应的ASCII码是0，此时打印出的是字符0；
//	return 0;
//
//}


//做题，写够30000行代码有个好offer
//int main()
//{
//	int i = 0;
//	while (i<30000)
//	{
//		printf("努力写代码:%d\n", i);
//		i++;
//	}
//	printf("恭喜你找到了一个好offer");
//
//	return 0;
//}

//用函数求两个数的和
//int add(int a, int b)
//{
//
//
//	int z = 0;
//	z = a + b;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入两个数进行加法运算\n");
//	scanf("%d %d", &num1, &num2);
//
//	int sum = 0;
//	sum = add(num1, num2);   //这里用了加法函数
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//





//作业2

//int main()
//
//{
//
//    int a = 0;
//
//    int b = 0;
//
//
//
//    scanf("%d%d", &a, &b);
//
//    if (a < b)
//        printf("最大值是:%d\n", b);
//
//    else if(a > b)
//        printf("最大值是:%d\n", a);
//
//    
//    else   printf("两个数大小相等");
//
//        return 0;
//
//
//
//}

//int main()
//{
//	//int a = 10;
//	//int b = ++a;//前置++    ·····先++，后使用 
//
//	int a = 10;
//	int b = a++;       //后置++和前置++不同，后置++是先使用，后++，因此b的值为10
//
//
//	printf("%d\n",b);
//	printf("%d\n",a);
//
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;   //强制类型转换
//	printf("%d\n", a);
//	return 0;
//
//}


///使用三目操作符进行两个数的比较，作业的第二种写法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = b < a ? a : b;   //三目操作符
//	printf("最大数是：%d\n",max);
//
//	return 0;
//}


//typedef关键字的使用,typedef 顾名思义是类型定义，这里应该理解为类型重命名。

//typedef unsigned int u_int  //把unsigned int 重新定义为 u_int
//int main()
//{
//
//	unsigned int a = 100;
//	u_int b = 100;     //此时 这两条程序的作用是一样的
//
//
//	return 0;
//}

//static关键字的用法  
//1. 修饰局部变量
//2.修饰全局变量
//3.修饰函数

void test()
{
	static int a = 1;  //若此时使用的是int a = 1; 则结果会输出十个2
	a++;
	printf("%d\n", a);

}



int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}













































 