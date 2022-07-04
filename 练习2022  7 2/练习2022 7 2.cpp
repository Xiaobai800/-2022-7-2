#include<stdio.h>
int main()
{
	int a=1;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d,奇数\n",a);
		else
			printf("%d,偶数\n",a);
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
//		else//悬空else
//			printf("haha\n");
//	return 0;
//}
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年");
//	else if (age >= 50 && age < 90)
//		printf("老年");
//	else
//		printf("老不死");
//	 
//	return 0;
//}