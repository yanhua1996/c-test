#include<stdio.h>
int main() {
	int a, tth, th, hu, t, indiv,place;
	printf("please input a positive integer no more than 100000 ");
	scanf("%d", &a);
	if (a > 99999)
		printf("please input again!");
	else if (a > 9999)  place = 5;
	else if (a > 999 && a < 99999) place=4;
	else if (a > 99 && a < 999) place=3;
	else if (a > 9 && a < 99) place=2 ;
	else place=1;
	printf("位数:%d\n", place);
	printf("每位数字为:");
	tth = a / 10000;
	th = (int)(a - tth * 10000)/1000;
	hu = (int)(a - tth * 10000 - th * 1000) / 100;
	t = (int)(a - tth * 10000 - th * 1000-hu*100) / 10;
	indiv = (int)(a - tth * 10000 - th * 1000-hu*100-t*10) s;
	switch (place) {
	case 5:printf("%d,%d,%d,%d,%d", tth, th, hu, t, indiv); break;
	case 4:printf("%d,%d,%d,%d", th, hu, t, indiv); break;
	case 3:printf("%d,%d,%d", hu, t, indiv); break;
	case 2:printf("%d,%d", t, indiv); break;
	case 1:printf("%d", indiv); break;
	}
		system("pause");
		return 0;
}