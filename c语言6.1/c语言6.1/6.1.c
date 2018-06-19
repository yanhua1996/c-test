#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a[101];
	for (i = 0; i <= 100; i++) 
		a[i] = i;                                         //使a[1]-a[100]为 1-100
	    a[1] = 0;                                         //去掉a[1]
		for(i=2;i<sqrt(100);i++)
			for (j = i + 1; j <= 100; j++)
			{
				if (a[i] != 0 && a[j] != 0)              //a[j]为a[i]后面一个数
					if (a[j] % a[i] == 0)
						a[j] = 0;                         //去掉非素数
			}
		printf("\n");
		for (i = 2, n = 0; i <= 100; i++)
		{
			if (a[i] != 0)                          //选出不为0的数，即素数
			{
				printf("%5d", a[i]);
				n++;
			}
			if (n == 10)                         //一行输出十个
			{
				printf("\n");
				n = 0;
			}
		}
		printf("\n");
	

	system("pause");
	return 0;
}