#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,i,j;
    cin>>n;
    cin>>s;
    for(i=0;i<s.size();++i)
    {
			
            if(s[i]+n>'z')
            {
            	for(j = 0;j<n;j++)
            	{
            		if(++s[i]>'z')
            			s[i] = 'a';
				}
			}
            else
            	s[i] += n;
    }
    cout<<s;
    return 0;
}
