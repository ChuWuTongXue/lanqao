#include"stdio.h"
#include"iostream"
#include"string"
using namespace std;
int main()
{
	
	int a=0;
	scanf("%d",&a);
	string s="";
	for(int i=0;i<a;i++)
		getline(cin,s);
	cout<<s;
	
	return 0;
 } 
