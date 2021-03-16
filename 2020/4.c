#include<stdio.h>
int main()
{
	long long num,product;
	int i;
	while (scanf("%lld",&num) != EOF)
	{
		i = 1;
		product = num * num - num;
		while(num)
		{
			i *= 10;
			num = num  / 10;
		}
		if (product % i == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;	
}
