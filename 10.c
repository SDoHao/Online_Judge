#include<stdio.h>
int main()
{
	int digit[4];
	int i,j,k,t,count,repeat,max;
	scanf("%d",&count);
	//if (count >= 1000)
		//count = 999;
	for(i = 0;i < count;i++)
	{
		for(j = 0;j < 4 ;j++)
		{
			scanf("%d",&digit[j]);
			//�������� 
//			if (digit[j] < 0 )//|| digit[j] > 2048
//			{	
//				digit[j] = 0;
//			}
//			else
//			{
//				if ((digit[j] & digit[j] - 1) != 0)//�Ƿ�Ϊ2���� 
//					digit[j] = 0;
//				else if (digit[j] == 1)
//					digit[j] = 0;
//			}
		}
		repeat = 2;
		while(repeat > 0)//����ȥ������0(0����) 
		{
			for(t = 3;t > 0;t--)
			{
				max = t + 1;
				for(j = t;j > 0;j--)
				{
					if (digit[j] == 0)
					{
						//һ������ȥ��һ��0(0������) 
						for(k = j;k > 0;k--)
							digit[k] = digit[k-1];
						digit[0] = 0;
						//���ƺ������ж�ԭ��λ�����ƺ��Ƿ�Ϊ0
						max --;
						if (max > 0)
							j = t;
					}	
					else
						break; 
				}
			}
			repeat--;
		}
		//printf("%d %d %d %d",digit[0],digit[1],digit[2],digit[3]);
		//���Һϲ�һ�� 
		//t = 3;
		for(j = 3;j > 0;j--)
		{
			if (digit[j] == digit[j-1])//&& digit[j] != 2048
			{
				digit[j] *= 2;
				for(k = j - 1;k > 0;k--)
					digit[k] = digit[k-1];
				digit[0] = 0;
//				if (t > j && j < 3) //�ٺϲ�һ�� 
//				{ 
//					if (digit[j] == digit[j + 1])
//					{
//						digit[j + 1] *= 2;
//						for(k = j;k > 0;k--)
//							digit[k] = digit[k-1];
//						digit[0] = 0;
//					}
//				}
//				t = j;
			}
		}
		printf("%d %d %d %d",digit[0],digit[1],digit[2],digit[3]);
		if (i != count - 1 )
		{
			printf("\n");
		}
		
	}
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int digit[4];
//	int i,j,k,t,count,repeat,max;
//	scanf("%d",&count);
//	for(i = 0;i < count;i++)
//	{
//		for(j = 0;j < 4 ;j++)
//		{
//			scanf("%d",&digit[j]);
//		}
//		repeat = 2;
//		while(repeat > 0)
//		{
//			for(t = 3;t > 0;t--)
//			{
//				max = t + 1;
//				for(j = t;j > 0;j--)
//				{
//					if (digit[j] == 0)
//					{
//						for(k = j;k > 0;k--)
//							digit[k] = digit[k-1];
//						digit[0] = 0;
//						max --;
//						if (max > 0)
//							j = t;
//					}	
//					else
//						break; 
//				}
//			}
//			repeat--;
//		}
//		t = 3;
//		for(j = 3;j > 0;j--)
//		{
//			if (digit[j] == digit[j-1])
//			{
//				digit[j] *= 2;
//				for(k = j - 1;k > 0;k--)
//					digit[k] = digit[k-1];
//				digit[0] = 0;
//			}
//		}
//		printf("%d %d %d %d",digit[0],digit[1],digit[2],digit[3]);
//		if (i != count - 1 )
//		{
//			printf("\n");
//		}
//		
//	}
//	return 0;
//}
