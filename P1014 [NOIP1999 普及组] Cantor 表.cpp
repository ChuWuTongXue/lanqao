#include<stdio.h>

int main()
{
	long long int i,j,x,y,n,c=0;
	scanf("%ld",&n);
	for(i=1;c<n;i++)
	{
		c = i+c;//ÿһ��ĩβ���� 
		//printf("%d\t",c); 
	} //�к� 
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
