#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//  static���ξֲ���������
//void test()
//{
//	static int a = 1;    //  static���ξֲ��������ı��˾ֲ���������������
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

//static����ȫ�ֱ�������

//��add�ж����˱���g_val,�ڴ�������Ϳ�ʹ��  ,����add����static���� int g_val = 2022,��static=������ȫ�ֱ�����ʹ��g_valֻ����add��ʹ��
//extern int g_val;
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//
//}
//




//  define���峣���ͺ�
//��1.�������
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//define�����

//#define ADD(x,y) x+y
//int main()
//{
//
//
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));  //��ʱ�������11  ���Կ��� 4*2+3  ��ʱ���Խ�ADD��2��3�������ټӸ����Ż��߶���ʱ��x+y���߼�����
//
//	return 0;
//}




//ָ��ĳ�������


//int main()
//{
//	int a = 10;//a���ڴ���Ҫ�����ĸ��ֽڵĿռ�
//	char ch = 'w';
//	printf("%p\n",&a);   //ȡa�ĵ�ַ��ȡ��a����λ��ַ������������λ����,%p��ר��������ӡ��ַ��
//	int * pa = &a;  //pa��ר��������ŵ�ַ�ģ���c�����н���ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int���͵� 
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
//	*pa = 20;  //*Ϊ�����ò�������*pa����ͨ��pa��ߵĵ�ַ�ҵ�a 
//	printf("%d\n", a); //�ı�aҲ����ͨ��a�ĵ�ַ���ı�
//
//	return 0;
//}


//ָ������Ĵ�С
//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(double*));
//    return 0;
//}




//�ṹ��ĳ�������
//�ṹ���ܹ���c���Դ����µ����ͳ���



//����һ��ѧ��
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//
//};
//int main()
//{
//	struct stu s = { "����",20,93.5 };   //�ṹ��Ĵ������ʼ��
//	printf("��һ�δ�ӡ��%s,%d,%lf\n",s.name,s.age,s.score);  //�ṹ���������Ա����
//	struct stu* ps = &s;
//	printf("�ڶ��δ�ӡ��%s,%d,%lf\n", (*ps).name, (*ps).age, (*ps).score); //����ָ���ӡ  ps��ָ�룬��*ps��ô��ʾΪs
//	printf("�����δ�ӡ��%s,%d,%lf\n", ps->name, ps->age, ps->score);    //����->���Ž��д�ӡ ������������һ��Ҫ�ǽṹ���ָ�룬��ͷ�����Ա����0�� 
//	return 0;
//}




int main()
{

	int a = 0;
	printf("������һ������\n");
	scanf("%d", &a);

	if (a % 5 == 0)
		printf("�������ܱ�5����\n");
	else
		printf("�����ֲ��ܱ�5����\n");

	return 0;

}