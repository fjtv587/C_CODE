#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>      //ʹ��strand��rand������ǰ������
#include<time.h>
//дһ��������Ϸ
//1.ϵͳ�Զ�����1-100�ڵ������
//2.������
//3.�´���ϵͳ���������˻���С�ˣ��¶�����Ϸ����
//4.�޴������ơ�
void game()                                   //��Ϸģ��
{
	
	int ret = rand() % 100 + 1;           //%100��������0-99���ټ���1����  0-100��
                                        //rand�ܹ�����0-32767������������Ҫ������srand��ʹ�á�  time���������γ�һ��ʱ��								
	int guess = 0;
	while (1) 
	{
		printf("��һ������\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣡�¶�����������\n");
			break;
		}
	}

}
void menu()                          //�˵�ģ��
{
	printf("*****************\n");
	printf("*****************\n");
	printf("***1.��ʼ��Ϸ****\n");
	printf("***0.������Ϸ****\n");
	printf("*****************\n");
	printf("*****************\n");
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));   //����������������ĳ�������ʹ��
	do
	{
		menu();//�򿪲˵�
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);

	return 0;
}




