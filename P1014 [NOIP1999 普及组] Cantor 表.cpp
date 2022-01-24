#include<stdio.h>

int main()
{
	long long int i,j,x,y,n,c=0;
	scanf("%ld",&n);
	for(i=1;c<n;i++)
	{
		c = i+c;//每一行末尾项数 
		//printf("%d\t",c); 
	} //行号 
	i = i-1;
	if(i%2==0)
	{
		x=1;
		y=i;
		for(j=c-i+1;j<=n;j++)
		{
			if(j==n)
			{
				printf("%ld/%ld",x,y);
				break;
			}
			x++;
			y--;
		}
	}else{
		x=i;
		y=1;
		for(j=c-i+1;j<=n;j++)
		{
			if(j==n)
			{
				printf("%ld/%ld",x,y);
				break;
			}
			x--;
			y++;
		}
	}
	return 0;
}
