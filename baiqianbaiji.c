#include<stdio.h>
#include<math.h>
int main()
{
	printf("�����빲�ж���Ǯ��");
	int money,zhishu,i,j,k,sum=0,temp=0;
	int gj=0,mj=0,xj=0;
	scanf("%d",&money);
	printf("�����������ֻ����");
	scanf("%d",&zhishu);
	for(i=0;i<=(money/5)+1;i++)
		for(j=0;j<=(money/3)+1;j++)
			for(k=0;k<=zhishu;k++)
				{
					sum=i*5+j*3+k/3;
					if(sum==money)
						{
							if((i+j+k)==zhishu)
							{
								if(k%3==0)
									{
										temp++;
										printf("��%d�ַ���\n����%dֻĸ��%dֻС��%dֻ\n",temp,i,j,k);
									
									}
										
							}
						}
					
				}
				printf("����%d�ַ���",temp); 
				if(temp==0)
				printf("û�����ֹ��򷽰���"); 
}
