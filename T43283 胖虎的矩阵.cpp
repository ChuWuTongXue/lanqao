#include"stdio.h"
int main()
{
	int n,m,nm;
	int i,j=0;
	int ij;
	scanf("%d %d",&n,&m);
	nm =n*m;
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<m+1;j++)
		{
			if(j%2==0)
				ij = j*n-i+1;
			else
				ij = (j-1)*n+i;
			printf("%d ",ij);
		 } 
		 printf("\n");
	}
	return 0;
}
