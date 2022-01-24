#include"stdio.h"
#include"iostream"
#include<climits>
using namespace std;

int main()
{
	int n;
	int a[3][2];
	int b=INT_MAX; 
	cin>>n;
	for(int i=0;i<3;i++)
	{
		cin>>a[i][0]>>a[i][1];
		int count = n/a[i][0];
		if(n%a[i][0]!=0)
		{
			count += 1;
		}
		if(count*a[i][1]<b)
		{
			b=count*a[i][1];
		}
	 } 
	
	cout<<b;
	 
	return 0;
}
