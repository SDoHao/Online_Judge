#include<stdio.h>
int main()
{
	char offset[29] = {'q','w','e','r','t','y','u','i','o','p','[','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',','};
	char ch = 'a';	
	int count,i,j;
	FILE *fp;
	fp = fopen(".\\fl.txt","w");
	for(i = 1;i <= 26;i++)
	{
		for(j = 1;j < 29;j++)
		{
			if(offset[j] == ch)
				 fprintf (fp,"%c %c\n",ch,offset[j-1]);
		}
		ch ++;
	}
	fclose(fp);
	scanf("%d%*c",&count);
	return 0;
}
