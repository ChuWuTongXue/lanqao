#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int num[101];
	int count=0;
	cin>>n;
	int cq[101]={0};
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);//排序，确保在前面的是小的数 
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)//num[i]与所有数相加 
		{
			for(int k=j+1;k<n;k++) 
			{
				if(num[j]+num[i]==num[k]&&cq[k]==0)
				{
				cq[k]=-1;//去重 
				count+=1;
				//cout<<num[k]<<" ";
				}
			}
			
				
		}
	}
	cout<<count;
	return 0;
 } 
