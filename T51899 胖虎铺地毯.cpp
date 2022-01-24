#include"stdio.h"
int main()
{
	int n,m,a;
	int s=0,h=0;
	scanf("%d %d %d",&n,&m,&a);
    while(m>0)
    {
    	m-=a;
    	s +=1;
	}
	while(n>0)
	{
		n -=a;
		h += 1;	
	}
   	s *= h;
    printf("%d",s);
    return 0;
}
