#include<stdio.h>
int add(a,b)
{
	int c = 1;
	c++;
	return a + b;
}
int main(){
	int i,sum = 0,n = 10;
	int a[10];
	for(i = 0;i < n;i++)
	{
		sum = add(sum,i);
		a[i] = 1;
	}	
	return 0;
}
