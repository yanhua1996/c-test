#include<stdio.h>
#include<math.h>
int main() {
	int  i, n,si=0,s=0;
	scanf("%d", &n);
	for (i = 0; i <= n-1; i++)
	{
		si =si+  2 * pow(10, i);
		
		s = s + si;

	}
	printf("%d", s);
	system("pause");
	return 0;
}