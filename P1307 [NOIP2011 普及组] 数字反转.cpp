#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str2="";
	int pos;
	getline(cin,str);
	pos=str.size()-1;// ����ַ���ĩβ�±� 
	while(pos!=-1)
	{
		if(str.substr(pos,1)=="-")
			str2.insert(0,"-");//��Ϊ��������-�Ų��뵽0λ 
		else
			str2.append(str.substr(pos,1)); //��ת��ӵ��ַ��� 
		pos--;
	 } 
	long long int num=stoi(str2);//stoi���ַ���ת��Ϊint,c++11 
	//cout<<str2;
	cout<<num;
	return 0;
 } 
