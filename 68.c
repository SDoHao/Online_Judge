#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	b = b > c ? b : c;
	printf("%d",a > b ? a : b);
	//printf("%d",a>b?(a>c?a:c):(b>c?b:c));
	return 0;
}