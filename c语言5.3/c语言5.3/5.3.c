#include<stdio.h>
int main()
{
	int m,n,p,r,temp;
	printf("please enter m,n:");
	scanf("%d%d",&m,&n);
	if (n<m)

	{
		temp = n;
		n = m;
		r = temp;
	}
	p = n * m;
	while (m != 0)
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("%d",n);
	system("pause");
	return 0;
}