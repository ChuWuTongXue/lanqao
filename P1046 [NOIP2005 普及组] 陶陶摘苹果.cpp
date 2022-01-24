#include"stdio.h"
int main()
{
	int p[10];
	int tt_pd;
	int p_num=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&p[i]);
	}
	scanf("%d",&tt_pd);
	tt_pd+=30;
	for(int i=0;i<10;i++)
	{
		if(tt_pd>=p[i])
			p_num+=1;
	}
	printf("%d",p_num);
 } 
