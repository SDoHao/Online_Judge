#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int i,j;
	int a[4];
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 for(i=3;i>=0;i--)
	 {
	 	for(j=i;j>=0;j--)
	 	{
	 		if(a[i]==0)
	 		{
	 			if(a[j]!=0)
	 			{
	 				a[i]=a[j];
	 				a[j]=0;
				 }
			 }
		 }
	 }
	 for(i=3;i>0;i--)
	 {
	 	if(a[i]==a[i-1])
	 	{
	 		a[i]+=a[i-1];
	 		a[i-1]=0;
		 }
	 }
	 for(i=3;i>=0;i--)
	 {
	 	for(j=i;j>=0;j--)
	 	{
	 		if(a[i]==0)
	 		{
	 			if(a[j]!=0)
	 			{
	 				a[i]=a[j];
	 				a[j]=0;
				 }
			 }
		 }
	 }
	 for(i=0;i<4;i++)
	 {
	 	printf("%d ",a[i]);
	 }
	 printf("\n");
	 	
	}
	
 
}
