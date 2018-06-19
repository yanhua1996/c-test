#include<stdio.h>   //先输出空格，再输出*，依次换行
int main()
{
	char c[5]= {'*','*', '*','*','*'};
	int i, j,k;
	char space = ' ';
		for (i = 0; i < 5; i++)
	{
		printf("\n");
		printf("    ");
		for (j = 1; j <= i; j++)
			printf("%c", space);
		for (k = 0; k < 5; k++)
			printf("%c", c[k]);
	}
	system("pause");
	return 0;
}