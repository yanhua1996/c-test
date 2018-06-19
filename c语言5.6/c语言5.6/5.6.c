#include<stdio.h>
int main() {
	double s = 0, t = 1;
		for (int n = 2; n <= 20; n++)
		{
			t=t*n;
			s = s + t;
		}
	printf("%22.15e",s);
	system("pause");
	return 0;
}