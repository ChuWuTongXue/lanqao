#include"iostream"
#include<string>
#include<stack>
using namespace std;
//stack<string> s;
stack<int> s;
int main()
{
	int n;
	while(cin>>n)//cinʧ�ܻ᷵��false ,���֧�֣���������֧�� 
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
		cin>>n;//cinʧ�ܻ᷵��false 
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
// �������Ե���֪��Ϊʲô��ʱ 
/*	int n;
	string str="";
	//getline(cin, str);
	while (true)
	{
		
		char ch;
		ch=getchar();
		if (ch == '\n')//��ջ
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
			str+=ch;//�ַ�������
		}
		else
		{
			s.push(str);//��ջ
			str = "";
			str.append(1,ch);
			s.push(str);
			str = "";
		}
		
		//cout << ch << "pp";
	}
	
	return 0;*/
}
