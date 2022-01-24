#include"stdio.h"

int main()
{
	int xy,j,z;
	int x=0,y=0;
	scanf("%d %d",&xy,&z);
	x = (z-2*xy)/2;
	y = xy-x;
	j = 2*y;
	printf("%d",j);
	return 0;
}
