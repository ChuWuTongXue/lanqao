#include"iostream"
#include<string>
#include<stack>
using namespace std;
//stack<string> s;
stack<int> s;
int main()
{
	int n;
	while(cin>>n)//cin失败会返回false ,洛谷支持，编译器不支持 
	{
		s.push(n);
	}
	while (s.top() == 0)
	{
		s.pop();
		continue;
	}
	while (!s.empty())
	{
		cout << s.top()<<" ";
		s.pop();
	}
	return 0;		
/*	int n;
	while(true)
	{
		cin>>n;//cin失败会返回false 
		if(cin>>n)
		{
			while (s.top() == 0)
			{
				s.pop();
				continue;
			}
			while (!s.empty())
			{
				cout << s.top()<<" ";
				s.pop();
			}
			break;
		}
		s.push(n);
	}
*/
// 明明可以但不知道为什么超时 
/*	int n;
	string str="";
	//getline(cin, str);
	while (true)
	{
		
		char ch;
		ch=getchar();
		if (ch == '\n')//出栈
		{
			while (s.top() == "0" || s.top() == " ")
			{
				s.pop();
				continue;
			}
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			break;
		}
		if (ch != ' ')
		{
			str+=ch;//字符串连接
		}
		else
		{
			s.push(str);//入栈
			str = "";
			str.append(1,ch);
			s.push(str);
			str = "";
		}
		
		//cout << ch << "pp";
	}
	
	return 0;*/
}
