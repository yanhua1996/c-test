#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a[101];
	for (i = 0; i <= 100; i++) 
		a[i] = i;                                         //ʹa[1]-a[100]Ϊ 1-100
	    a[1] = 0;                                         //ȥ��a[1]
		for(i=2;i<sqrt(100);i++)
			for (j = i + 1; j <= 100; j++)
			{
				if (a[i] != 0 && a[j] != 0)              //a[j]Ϊa[i]����һ����
					if (a[j] % a[i] == 0)
						a[j] = 0;                         //ȥ��������
			}
		printf("\n");
		for (i = 2, n = 0; i <= 100; i++)
		{
			if (a[i] != 0)                          //ѡ����Ϊ0������������
			{
				printf("%5d", a[i]);
				n++;
			}
			if (n == 10)                         //һ�����ʮ��
			{
				printf("\n");
				n = 0;
			}
		}
		printf("\n");
	

	system("pause");
	return 0;
}