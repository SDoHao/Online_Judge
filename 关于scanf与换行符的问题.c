#include<stdio.h>
//scanf�ڶ�ȡ�ַ���ʱ�����Զ����Ի��з�
//scanf����%c��,&a�� ���ȡ���з�
//һ������£����ǲ���Ҫÿ�ζ�����getchar��
//��Ϊscanfֻ��ȡ��Ӧ�����ͣ�������������
//�����г���Ҫ��ȡ�ַ�ʱ����һ��Ҫ����
//getchar�ѻ������еĻس���ȥ����
int main()
{
	int T;
	char ch;
	scanf("%d%*c",&T);
	while(T--)
	{
		scanf("%c%*c",&ch);
		printf("%c\n",ch);
	}
	return 0;
}
