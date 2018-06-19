#include<stdio.h>
int main() {
	char c;
	int z = 0, k = 0, s = 0, q = 0;
	printf("请输入一行字符：\n");
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
		printf("字母数：%d \n空格数：%d\n数字数： %d\n其他： %d\n", z, k, z, q);
		system("pause");
		return 0;
	}
