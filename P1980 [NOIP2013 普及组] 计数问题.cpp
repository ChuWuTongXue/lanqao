#include<stdio.h>
#include"iostream"
using namespace std;

int main()
{
	int x; //x 0-9
	long long n,i,cc,count=0,a; 
	cin>>n>>x;
	for(i=1;i<n+1;i++)
	{
		cc=i;
		while(cc!=0){
			a=cc%10;//获取最末尾的数值 
			cc=cc/10;//删去最末尾的数值 
			if(a==x)
			{
				count += 1;
			}
		}
	}
	cout<<count; 
	return 0;
 } 
