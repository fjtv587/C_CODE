#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ж�100���ڵ�����
//
//int main()
//{
//	
//	int a = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (a % 2 == 1)
//			printf("%d������\n", a);
//		a++;
//	}
//	
//
//	return 0;
//}

//break��whileѭ���е��÷�


//int main()
//{
//
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;                //��i=5ʱbreak�ܹ�������ֹѭ��
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//continue��whileѭ���е�ʹ��
//int main()
//{
//
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;                //��i=5ʱcontinue�ܹ���������ѭ�����������ڰ�i++�������ˣ������´�ѭ������������������ѭ��
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//
//}


//getchar��ʹ�÷���    getchar�ܹ����յ����ַ��ٽ��и�ֵ������������scanfһ����������ȡ�ո�\n��  ��getchar��ȡ�ַ�����������
//
//int main()
//{
//    char password[20] = {0};
//    printf("���������룺");
//    scanf("%s", password);
//    printf("��ȷ�����루Y/N��");      //�� 123456
//    //������һ��getchar����һ�λ�����,֪����\n��֮ǰ�Ķ���������
//
//    int tmp = 0; 
//    while ((tmp = getchar()) != '\n')
//    {
//        ;
//    }
//   
//    int ch = getchar();               //��ʱ�����������������getchar�ͻ��Զ�ʶ�𻺳�����123456\n��ʣ�µ�\n������ȷ��ʧ��
//
//    if (ch = 'Y')
//    {
//        printf("ȷ�ϳɹ�\n");
//    }
//    else
//    {
//        printf("ȷ��ʧ��\n");
//    }
//
//    return 0;
//}




/////////////////////��ϰ�⻷��///////////////////
//һ.����n�Ľ׳�

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

//��.����1��+2��+3��+........+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int tmp = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		tmp = 1;                 //��һ������Ҫ������һ�����Ľ׳�֮��Ҫ��tmp���±��1����Ϊ����ʱ����forѭ�����棬û������һ��ѭ��������
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

//������������Խ��м򻯸Ľ�
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


//��һ�����������������ĳ������n,�������ö��ַ�        ����������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	printf("������Ҫ����10���ڵ�����\n");
//	scanf("%d", &k);
//	//��arr�������������в���ĳ��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ĵ�С����һ��Ԫ�صĴ�С����������ܹ��м���Ԫ��
//	int left = 0;
//	int right = sz - 1;   //�ֱ��������������±�����ұ��±�
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//				break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//
//}


//���������м��ӡwelcome to bit
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;             //strlen �����ڼ����ַ����������������\0
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);    //��Ϣ1000ms  ,ʹ���������Ҫ������#include<windows.h>  ��Sleep����ĸҪ��д
//		system("cls");  //�����Ļ
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);    //���´�ӡһ�£���ֹ�׺�����
//
//	return 0;
//}


//ģ�������ε�½����������¼����

int main()
{
	char arr[20] = { 0 };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{   
		printf("���������룺");
		scanf("%s", arr);
        if (strcmp(arr,"fjtv587") == 0)//�����ַ����ıȽ�Ӧʹ���ַ����ȽϺ���strcmp���������� ==  ,��������ַ�����ͬstrcmp�ͻ����0
	     {
			printf("��½�ɹ�\n");
			 break;
	     }
		else
		{
		printf("����������ٴγ���\n");

        }
		if (i == 3)
		{
			printf("�������������\n");
		}
	}
	return 0;
}