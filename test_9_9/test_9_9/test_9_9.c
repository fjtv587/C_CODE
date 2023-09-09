#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//判断100以内的奇数
//
//int main()
//{
//	
//	int a = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (a % 2 == 1)
//			printf("%d是奇数\n", a);
//		a++;
//	}
//	
//
//	return 0;
//}

//break在while循环中的用法


//int main()
//{
//
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;                //当i=5时break能够永久终止循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//continue在while循环中的使用
//int main()
//{
//
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;                //当i=5时continue能够跳出本次循环，但是由于把i++给跳过了，所以下次循环又跳出，出现了死循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//
//}


//getchar的使用方法    getchar能够对收到的字符再进行赋值，但是它不像scanf一样，它会收取空格（\n）  ，getchar读取字符，返回整型
//
//int main()
//{
//    char password[20] = {0};
//    printf("请输入密码：");
//    scanf("%s", password);
//    printf("请确认密码（Y/N）");      //例 123456
//    //先利用一次getchar清理一次缓冲区,知道把\n和之前的东西清理完
//
//    int tmp = 0; 
//    while ((tmp = getchar()) != '\n')
//    {
//        ;
//    }
//   
//    int ch = getchar();               //此时若不清楚缓冲区，则getchar就会自动识别缓冲区中123456\n中剩下的\n，导致确认失败
//
//    if (ch = 'Y')
//    {
//        printf("确认成功\n");
//    }
//    else
//    {
//        printf("确认失败\n");
//    }
//
//    return 0;
//}




/////////////////////练习题环节///////////////////
//一.计算n的阶乘

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//		a = a * i;
//
//	printf("%d\n", a);
//
//
//	return 0;
//}

//二.计算1！+2！+3！+........+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int tmp = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		tmp = 1;                 //这一步很重要，求完一个数的阶乘之后要把tmp重新变回1，因为定义时他在for循环外面，没法在下一次循环中重置
//		for (n = 1; n <= i; n++)
//		{
//			tmp = tmp * n;
//		}
//		sum = sum + tmp;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//对上述代码可以进行简化改进
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int tmp = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		tmp = tmp * i;
//		sum = sum + tmp;
//
//	}
//	printf("%d", sum);
//
//
//	return 0;
//}


//在一个有序数组里面查找某个数字n,可以利用二分法        难难难难难

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	printf("请输入要查找10以内的数字\n");
//	scanf("%d", &k);
//	//在arr这个有序的数组中查找某个值
//	int sz = sizeof(arr) / sizeof(arr[0]);//整个数组的大小除以一个元素的大小，可以算出总共有几个元素
//	int left = 0;
//	int right = sz - 1;   //分别求出数组最左边下标和最右边下标
//	
//
//	while (left <= right)
//
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//				break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//	return 0;
//
//}


//从两边向中间打印welcome to bit
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;             //strlen 仅用于计算字符个数，不算结束符\0
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);    //休息1000ms  ,使用这个函数要先引用#include<windows.h>  ，Sleep首字母要大写
//		system("cls");  //清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);    //重新打印一下，防止易后被清屏
//
//	return 0;
//}


//模拟有三次登陆机会的密码登录程序

int main()
{
	char arr[20] = { 0 };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{   
		printf("请输入密码：");
		scanf("%s", arr);
        if (strcmp(arr,"fjtv587") == 0)//两个字符串的比较应使用字符串比较函数strcmp，而不能用 ==  ,如果两个字符串相同strcmp就会输出0
	     {
			printf("登陆成功\n");
			 break;
	     }
		else
		{
		printf("密码错误，请再次尝试\n");

        }
		if (i == 3)
		{
			printf("您已无输入次数\n");
		}
	}
	return 0;
}