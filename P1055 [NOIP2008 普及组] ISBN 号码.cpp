#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int di_sum=0;
	int k=0;
	cin>>str;
	int str_max=str.size();
	for(int i=0;i<str_max-1;i++)
	{
		if(str[i]!='-')
		{
			//cout<<"i-k+1"<<i-k+1<<" ";
			
			di_sum+=(str[i]-'0')*(i-k+1);	
		}else
		{
			k+=1;
		}
		
	}
	//cout<<str;
	int di=di_sum%11;
	//cout<<"di_sum"<<di_sum<<"di"<<di<<" ";
	char di_end;
	if(di==10)
	{
		di_end='X';
	}else{
		di_end=di+'0';
	}
	if(di_end==str[str_max-1])
	{
		cout<<"Right";
	}else{
		cout<<str.substr(0,str_max-1)<<di_end;//substr函数第二个变量是截取的长度，不是下标 
	}
	return 0;
 } 
