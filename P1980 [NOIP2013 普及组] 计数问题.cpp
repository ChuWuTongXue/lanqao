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
			a=cc%10;//��ȡ��ĩβ����ֵ 
			cc=cc/10;//ɾȥ��ĩβ����ֵ 
			if(a==x)
			{
				count += 1;
			}
		}
	}
	cout<<count; 
	return 0;
 } 
