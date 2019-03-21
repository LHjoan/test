#include<stdio.h>
#include<math.h>
int main()
{
	printf("请输入共有多少钱：");
	int money,zhishu,i,j,k,sum=0,temp=0;
	int gj=0,mj=0,xj=0;
	scanf("%d",&money);
	printf("请输入想买的只数：");
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
										printf("第%d种方案\n公鸡%d只母鸡%d只小鸡%d只\n",temp,i,j,k);
									
									}
										
							}
						}
					
				}
				printf("共有%d种方案",temp); 
				if(temp==0)
				printf("没有这种购买方案！"); 
}
