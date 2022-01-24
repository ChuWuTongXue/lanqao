//#include"iostream"
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int num=0;
	getline(cin,str);
	int str_max=str.size();
	for(int i=0;i<str_max;i++)
	{
		if(str[i]!=' '&&str[i]!='\n')
		{
			num+=1;
		}
	}
	cout<<num;
	return 0; 
 } 
