#include<stdio.h>
#include<iostream>
using namespace std; 
int main()
{
	int a=300;
	int b,d=0;
	int sum=0;
	int dd=1,ii=0;
	for(int i=0;i<12;i++)
	{
		cin>>b; //每月的预算花费 
		int c = (300-b+d)/100;//多出来的一百张数 
		d = 300-b+d-c*100;//这个月多的钱 
		sum += c; 
		if(d<0 && dd!=0) //因为 假如我们第二个月和第三个月的预算都大于我们手里的钱了，都透支了，但是因为我们是输入完12个月份之后，再输出第几个月透支，这时候应该输出的是-2，但是由于我们还在输入，i还在++，所以我们实际输出的是-3，这就不符合题意
		{
			dd=0;
			ii=i+1;
		}
	}
	if(dd)
	{
		cout<<sum*100*(1+0.2)+d;
	 } 
	 else{
	 	printf("-%d",ii);
	 }
	return 0;
 } 
