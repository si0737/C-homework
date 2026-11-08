#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);
	int j = n - 'A' + 1;
	for (int i = 0;i < j;i++)
	{
		for (int k = 0;k < j - i - 1;k++)
		{
			printf(" ");
		}
		for (char a = 'A';a <= 'A' + i;a++)
		{
			printf("%c", a);
		}
		for (char b = 'A' + i - 1;b >= 'A';b--)
		{
			printf("%c", b);
		}
		printf("\n");
	}
	return 0;
}