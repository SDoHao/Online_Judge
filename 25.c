#include<stdio.h>
int main()
{
	int count,i;
	char ch,small;
	scanf("%d",&count);
	for(i = 0;i < count;i++)
	{
		getchar();//����س� 
		scanf("%c",&ch);
		small = ch + 32;
    	printf("%c\n",small);
	}
	return 0;
}
