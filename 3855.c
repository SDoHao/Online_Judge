#include<stdio.h>
#include<ctype.h>
int GetOp(char ch)
{
	if(ch == '-')return -1;
	else if(ch == '+')return 1;
} 

int main()
{
	int num1,count,num2,op,sign1,sign2;
	char ch;
	int set = 0;
	scanf("%d%*c",&count);
	while(count--)
	{
		num1 = num2 = set = 0;
		op = sign1 = sign2 = 1;
		while((ch = getchar()) != '\n')
		{
			if(isdigit(ch))
			{
				if(set == 0)set = 1;
				else if(set == 2)
				{
					num2 = num2 * 10 + ch - '0';
					continue;
				}
				num1 = num1 * 10 + ch - '0';
			}
			else if(set == 0)
			{
				sign1 = GetOp(ch);
				set = 1;
			}
			else if(set == 1)
			{
				op = GetOp(ch);
				set = 2;
			}
			else if(set == 2)
				sign2 = GetOp(ch);
		}
		printf("%d",sign1 * num1 + sign2 * num2 * op);
		if(count != 0)printf("\n");
	}
	return 0;
}
