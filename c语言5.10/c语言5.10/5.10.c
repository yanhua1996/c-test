#include<stdio.h>
#include<math.h>
int main()
{
	double s=0, f1 = 2, f2 = 1, t;
	int i;
	for (i = 1;i <= 20; i++)
	{
		s = s + f1 / f2;
		t = f1;
		f1 = f1 + f2;
	    f2=t;
	}
	printf("%f ", s);
	system("pause");
	return 0;
}