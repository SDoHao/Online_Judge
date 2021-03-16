#include<stdio.h>
int main()
{
	char boy,girl;
	char c;
	while((c = getchar())!= '0')
	{
		while((c = getchar())!= ' ')
		{
			boy = c;
		}
		while((c = getchar())!= '\n')
		{
			girl = c;
		}
		if ((int)(boy + girl - 2 * 'a') % 2 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;	
}
