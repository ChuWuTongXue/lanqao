#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int k,n;
	double s=0; //float ֻ�ܾ�ȷ��С�����6λ��double ���Ծ�ȷ��15λ 
	scanf("%d",&k);
	int i;
	for(i=1;s<=k;i++)
	{
		s += 1/(i*1.0);	
	}
//	cout<<s<<" ";
	n = i-1;
	cout<<n;
	return 0;
 } 

//#include<stdio.h>
//int
//main(){
//	int k,n;
//	double sn=0.0;
//	scanf("%d",&k);
//	for(n=1;sn<=k*1.0;n++){
//	 sn+=1.0/n;
//	 
//    }
//	printf("%d",n);
//	return 0;
//}
