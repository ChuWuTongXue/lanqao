#include "cstdio"
#include "iostream"
#include "cstring"
#include "math.h"
using namespace std;

int main()
{
	int t;
	long long int a,b=0;
	int num[10000];
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> a;
		int count = 0;
		b=0;
		while(a>0)
		{
			if(a%2==0)
			{
				b+=pow(2,count);
			}
			count++;
			a/=2;
		}
		cout<<b<<endl;
	}
	return 0;
}
