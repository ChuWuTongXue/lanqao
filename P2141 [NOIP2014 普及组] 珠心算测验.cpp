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
	sort(num,num+n);//����ȷ����ǰ�����С���� 
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)//num[i]����������� 
		{
			for(int k=j+1;k<n;k++) 
			{
				if(num[j]+num[i]==num[k]&&cq[k]==0)
				{
				cq[k]=-1;//ȥ�� 
				count+=1;
				//cout<<num[k]<<" ";
				}
			}
			
				
		}
	}
	cout<<count;
	return 0;
 } 
