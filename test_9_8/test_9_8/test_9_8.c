#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//  static修饰局部变量例子
//void test()
//{
//	static int a = 1;    //  static修饰局部变量，改变了局部变量的生命周期
//	a++;
//	printf("%d\n", a);
//
//}
//int main()
//{
//
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;	
//	}
//	return 0;
//}

//static修饰全局变量例子

//在add中定义了变量g_val,在此声明后就可使用  ,若在add中用static修饰 int g_val = 2022,怎static=修饰了全局变量，使得g_val只能在add中使用
//extern int g_val;
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//
//}
//




//  define定义常量和宏
//例1.定义符号
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//define定义宏

//#define ADD(x,y) x+y
//int main()
//{
//
//
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));  //此时算出的是11  可以看成 4*2+3  此时可以将ADD（2，3）两边再加个括号或者定义时在x+y两边加括号
//
//	return 0;
//}




//指针的初步讲解


//int main()
//{
//	int a = 10;//a在内存中要分配四个字节的空间
//	char ch = 'w';
//	printf("%p\n",&a);   //取a的地址会取出a的首位地址，再往后推三位即可,%p是专门用来打印地址的
//	int * pa = &a;  //pa是专门用来存放地址的，在c语言中叫做指针变量
//	//*说明pa是指针变量
//	//int说明pa指向的对象是int类型的 
//	char * pc = &ch;
//	return 0;
//}
//
// 

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;  //*为解引用操作符，*pa就是通过pa里边的地址找到a 
//	printf("%d\n", a); //改变a也可以通过a的地址来改变
//
//	return 0;
//}


//指针变量的大小
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}




//结构体的初步讲解
//结构体能够让c语言创建新的类型出来



//创建一个学生
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//
//};
//int main()
//{
//	struct stu s = { "李四",20,93.5 };   //结构体的创建与初始化
//	printf("第一次打印：%s,%d,%lf\n",s.name,s.age,s.score);  //结构体变量，成员变量
//	struct stu* ps = &s;
//	printf("第二次打印：%s,%d,%lf\n", (*ps).name, (*ps).age, (*ps).score); //利用指针打印  ps是指针，则*ps则么表示为s
//	printf("第三次打印：%s,%d,%lf\n", ps->name, ps->age, ps->score);    //利用->符号进行打印 ，这个符号左边一定要是结构体的指针，尖头朝向成员变量0； 
//	return 0;
//}




int main()
{

	int a = 0;
	printf("请输入一个整数\n");
	scanf("%d", &a);

	if (a % 5 == 0)
		printf("该数字能被5整除\n");
	else
		printf("该数字不能被5整除\n");

	return 0;

}