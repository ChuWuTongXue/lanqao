#include<iostream>
using namespace std;
int main()
{
	int L,n,a;
	int minx=0,maxx=0; 
	cin>>L;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		maxx = max(maxx,max(L-a+1,a)); //���ֵ���������������߷� 
		minx = max(minx,min(L-a+1,a)); //��Сֵ�����м�������� -->�����ߵľ���������߷���Ҫ����Զ���� 
	}
	cout<<minx<<" "<<maxx;
	return 0;
 } 
//int main()
//{
//	int L,n,a[10000];
//	cin>>L;
//	cin>>n;
//	int L2=L/2;
//	if(L%2!=0)
//		L2 += 1;
//	int minx,maxx,max2=0,min2=0;
//	int minc,maxc;
//	minx=L2;
//	maxx=0;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//		if(a[i]>L2)
//		{
//			maxc = a[i]; //maxc��������������ˣ��������෴�����ߣ�������Զ· 
//			minc = a[i]-L2-1; //minc�����м�����ĵ���-->���˾�����̵�ʱ�� 
//		} else
//		{
//		 	maxc = L-a[i]+1;
//		 	minc = L2 - a[i]; 
//		 }
//		if(minc<minx)
//		{
//			minx = minc;
//			min2 = a[i];
//		}
//		if(maxc>maxx)
//		{
//			maxx=maxc;
//			max2=a[i];
//		}	
//	}
//	if(min2>L2)
//	{
//		min2 = L-min2+1;
//	 }
//	cout<<min2<<" "<<maxx;
//	return 0;
// } 
