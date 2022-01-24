#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str2="";
	int pos;
	getline(cin,str);
	pos=str.size()-1;// 获得字符串末尾下标 
	while(pos!=-1)
	{
		if(str.substr(pos,1)=="-")
			str2.insert(0,"-");//如为负数，将-号插入到0位 
		else
			str2.append(str.substr(pos,1)); //反转添加到字符串 
		pos--;
	 } 
	long long int num=stoi(str2);//stoi将字符串转化为int,c++11 
	//cout<<str2;
	cout<<num;
	return 0;
 } 
