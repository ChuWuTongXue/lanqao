#include"iostream"
#include<queue> 
using namespace std;
//int g[10][10]={ //1相邻 
//	  1,2,3,4,5,6,7,8,9,10
//	1{0,1,0,0,1,0,0,0,0,0},
//	2{1,0,1,1,0,0,0,0,0,0},
//	3{0,1,0,0,0,0,1,0,0,0},
//	4{0,1,0,0,1,1,0,0,0,0},
//	5{1,0,0,1,0,0,0,0,1,0},
//	6{0,0,0,1,0,0,1,1,0,0},
//	7{0,0,1,0,0,1,0,0,0,1},
//	8{0,0,0,0,0,1,0,0,1,1},
//	9{0,0,0,0,1,0,0,1,0,0},
//   10{0,0,0,0,0,0,1,1,0,0},
//}; 
int g[10][10]={ //1相邻 
	{0,1,0,0,1,0,0,0,0,0},
	{1,0,1,1,0,0,0,0,0,0},
	{0,1,0,0,0,0,1,0,0,0},
	{0,1,0,0,1,1,0,0,0,0},
	{1,0,0,1,0,0,0,0,1,0},
	{0,0,0,1,0,0,1,1,0,0},
	{0,0,1,0,0,1,0,0,0,1},
	{0,0,0,0,0,1,0,0,1,1},
	{0,0,0,0,1,0,0,1,0,0},
    {0,0,0,0,0,0,1,1,0,0},
}; 
int vis[10]={0}; //0代表没被访问 
queue<int> q;
void bfs()
{
	int x=0;
	cout<<1<<"-->";
	vis[0]=1;
	q.push(0);
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		for(int i=0;i<10;i++)
		{
			if(g[x][i]==1&&vis[i]==0)
			{
				cout<<i+1<<"-->"; 
				q.push(i);
				vis[i]=1;
			} 
				
		}
	}
}
int main()
{
	bfs();	
	return 0;
 } 
