#include<stdio.h>
int main()
{
	int a=1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d,����\n",a);
		else
			printf("%d,ż��\n",a);
		a++;
	}
	return 0;
}
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//����else
//			printf("haha\n");
//	return 0;
//}
//{
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��");
//	else if (age >= 50 && age < 90)
//		printf("����");
//	else
//		printf("�ϲ���");
//	 
//	return 0;
//}