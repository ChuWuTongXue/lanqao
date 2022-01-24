#include<stdio.h>
char a[200];
int main()
{
	int t,n;
	int cc = 0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(int k=0;k<n*2;k++)
		{
			scanf("%c",&a[k]);
			if(a[k]=='\n')
			{
				k -= 1;
			}
		}
		int k=0;
		while(1)
		{
//			printf("k=%d,a=%c\n",k,a[k]);
			if(a[k+1]=='0')
			{
				k += 1;
			}else if((k+n+1)<n*2&&a[k+n+1]=='0')
			{
				k = k+n+1;
			}else if((k-n+1)>0&&a[k-n+1]=='0')
			{
				k = k-n+1;
			}else
			{
				printf("NO\n");
				cc = 1;
				break;
			}
			if(k>=(n*2-1))
			{
				break;
			}	
		}
		if(cc!=1)
		{
			printf("YES\n");
		}
	}
	return 0;
}
