#include<cstdio>
class cp{
public:
	int  zjhm;
	int  zjr;
	cp(){
		zjhm=1;
		zjr = -1;
	}
	cp(int m)
	{
		zjhm=m;
		zjr = -1;
	}
	int yj(int hm[][2],int n)
	{
		
		for(int i=0;i<n;i++)
		 {
		 	int d=hm[i][0];
		 	while(d<=hm[i][1])
		 	{
		 		if(d==zjhm)
		 		{
		 			zjr = i+1;
//		 			printf("%d",i+1);
		 			break;
				}
				d += 1;
			 }
			 if(zjr!=-1)
			 {
			 	break;
			 }
		 }
		 return zjr;
	}
};
int main()
{
	int n,a[1000][2],b,c=0,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	 } 
	 scanf("%d",&b);
	 cp ss=cp(b);
	 int zjr=ss.yj(a,n);
	 printf("%d",zjr);
	 return 0;
} 

