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
//	printf("%c\n", '\130'); //�ȰѰ˽�������130ת���Ϊ88��ʮ��������Ȼ���ҳ�88����Ӧ��ASCII����X 
//	printf("%c\n", '\x30'); //�Ȱ�ʮ����������30ת���Ϊ48��ʮ��������Ȼ���ҳ�48����Ӧ��ASCII����0����ʱ��ӡ�������ַ�0��
//	return 0;
//
//}


//���⣬д��30000�д����и���offer
//int main()
//{
//	int i = 0;
//	while (i<30000)
//	{
//		printf("Ŭ��д����:%d\n", i);
//		i++;
//	}
//	printf("��ϲ���ҵ���һ����offer");
//
//	return 0;
//}

//�ú������������ĺ�
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
//	printf("�������������мӷ�����\n");
//	scanf("%d %d", &num1, &num2);
//
//	int sum = 0;
//	sum = add(num1, num2);   //�������˼ӷ�����
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//





//��ҵ2

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
//        printf("���ֵ��:%d\n", b);
//
//    else if(a > b)
//        printf("���ֵ��:%d\n", a);
//
//    
//    else   printf("��������С���");
//
//        return 0;
//
//
//
//}

//int main()
//{
//	//int a = 10;
//	//int b = ++a;//ǰ��++    ������������++����ʹ�� 
//
//	int a = 10;
//	int b = a++;       //����++��ǰ��++��ͬ������++����ʹ�ã���++�����b��ֵΪ10
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
//	int a = (int)3.14;   //ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//
//}


///ʹ����Ŀ�����������������ıȽϣ���ҵ�ĵڶ���д��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = b < a ? a : b;   //��Ŀ������
//	printf("������ǣ�%d\n",max);
//
//	return 0;
//}


//typedef�ؼ��ֵ�ʹ��,typedef ����˼�������Ͷ��壬����Ӧ�����Ϊ������������

//typedef unsigned int u_int  //��unsigned int ���¶���Ϊ u_int
//int main()
//{
//
//	unsigned int a = 100;
//	u_int b = 100;     //��ʱ �����������������һ����
//
//
//	return 0;
//}

//static�ؼ��ֵ��÷�  
//1. ���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

void test()
{
	static int a = 1;  //����ʱʹ�õ���int a = 1; ���������ʮ��2
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













































 