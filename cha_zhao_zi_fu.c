#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	char *str;
	char cc;
	printf("请输入字符串：\n");
	gets(ch);
	printf("请输入要查找的字符：\n");
	scanf("%c",&cc) ;
	strlen(ch);
	if(str)
	{
		str=strchr(ch,cc);
		printf("字符%c首次出现的位置%d\n",cc,str-ch+1);
		printf("%s\n",str); 
		
		
		
	}
}
