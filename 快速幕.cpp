#include<iostream>
#include<climits>
//��a��b��Ļ -->����Ļ 
using namespace std;

long long fun(long long a, long long b,long long md)
{
	long long s = 1;
	long long c = a;
	while(b)
	{
//		if(b%2!=0)
		if(b&1) //������ĩβΪ0��ż����Ϊ1������ 
			s = (s*c)%md;
		c = (c*c)%md;
		b >>= 1; //����������һλ 
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
