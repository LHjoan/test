#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	char *str;
	char cc;
	printf("�������ַ�����\n");
	gets(ch);
	printf("������Ҫ���ҵ��ַ���\n");
	scanf("%c",&cc) ;
	strlen(ch);
	if(str)
	{
		str=strchr(ch,cc);
		printf("�ַ�%c�״γ��ֵ�λ��%d\n",cc,str-ch+1);
		printf("%s\n",str); 
		
		
		
	}
}
