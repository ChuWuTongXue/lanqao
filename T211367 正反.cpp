#include"stdio.h"
#include "math.h"
int main()
{
	int n,i,j=0;
	long long int a;
	long long int b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a);
		j=0;
		while(1)
		{
			
			if(a%2==0)
				b[i]+=pow(2,j); 
			if(a==1 || a==0)
			{
				break;
			}
			a = a/2;
			j+=1;
	 	}
//		printf("%lld\n",c);
//		printf("%lld\n",b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%lld\n",b[i]);
	}
	printf("%lld",b[i]);
	return 0;
}
