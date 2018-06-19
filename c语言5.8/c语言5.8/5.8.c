#include<stdio.h>
#include<math.h>
int main()
{
	int a,b, c, d;

	for (a = 100; a <llll1000; a++)
	{
		b = a / 100;
		c = (int)(a - b * 100) / 10;
		d = (int)(a - b * 100 - c * 10);
		if (a==b*b*b + c * c*c + d*d*d )
		
		printf("%d ", a);
	}
	printf("\n");
	system("pause");
	return 0;
}