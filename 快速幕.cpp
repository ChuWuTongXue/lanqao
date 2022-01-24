#include<iostream>
#include<climits>
//求a的b次幕 -->快速幕 
using namespace std;

long long fun(long long a, long long b,long long md)
{
	long long s = 1;
	long long c = a;
	while(b)
	{
//		if(b%2!=0)
		if(b&1) //二进制末尾为0是偶数，为1是奇数 
			s = (s*c)%md;
		c = (c*c)%md;
		b >>= 1; //二进制右移一位 
	}
	return s; 
 } 
 
long long fun2(long long a,long long b)
{
	long long s = 1;
	long long r ;
	r = fun2(a,b/2);
	s = r * r;
	if(b%2)
		s*=a;
	return s;
 } 
int main()
{
	long long m,n,mm;
	cin>>m>>n>>mm;
	cout<<fun(m,n,mm)<<endl;
	cout<<LLONG_MAX<<endl;
	return 0;
}
