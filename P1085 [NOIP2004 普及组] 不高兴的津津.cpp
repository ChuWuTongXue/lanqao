#include<iostream>
using namespace std;

int main()
{
	int a=0;
	int max=8;
	for(int i=0;i<7;i++)
	{
		int b,c;
		cin>>b>>c;
		if((b+c)>max)
		{
			max=b+c;
			a = i+1;
		}
	}
	cout<<a;
	return 0;
}
