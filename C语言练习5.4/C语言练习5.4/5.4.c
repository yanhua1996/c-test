#include<stdio.h>
int main() {
	char c;
	int z = 0, k = 0, s = 0, q = 0;
	printf("������һ���ַ���\n");
	while ((c = getchar())!= "\n")
	{
		if (c >= "a"&&c <= "z" || c >= "A"&& c<= "Z")
			z++;
		else if (c == " ")
			k++;
		else if (c >= "0"&&c <= "9")
			s++;
		else
			q++; 
	}
		printf("��ĸ����%d \n�ո�����%d\n�������� %d\n������ %d\n", z, k, z, q);
		system("pause");
		return 0;
	}
