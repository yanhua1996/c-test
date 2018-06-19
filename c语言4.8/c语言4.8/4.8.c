
#include<stdio.h>
int main() {
	char grade;
	scanf("%c", &grade);
	printf("your score:");
	switch (grade)
	{
	case 'A':printf(">=90\n"); break;
	case 'B':printf("80-89\n"); break;
	case 'C':printf("70-79\n"); break;
	case 'D':printf("60-69\n"); break;
	case 'E':printf("<60\n"); break;
	default:printf("enter data error!\n");
	}
	system("pause");
	return 0;

}