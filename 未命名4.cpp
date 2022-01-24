#include<iostream>
#include<queue>
using namespace std;
int g[10][10]
{
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,1,1,0,0,0},
	{0,0,0,0,1,0,0,1,0,0},
	{0,0,0,0,0,1,0,0,1,0},
	{0,0,1,0,0,0,1,0,1,0},
	{0,1,0,1,0,1,0,0,1,0},
	{0,1,0,1,1,0,0,1,1,0},
	{0,0,1,0,0,0,0,1,0,0},
	{0,0,0,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0}
};
int vis[10][10]={0},dx[]={0,1,0,-1},dy[]={1,0,-1,0}; //vis ÊÇ·ñ·ÃÎÊ¹ý 
struct zuobiao
{
	int x,y;
}start,cur,tmp;
//struct node
//{
//	int x,y,parent;
//}lujing[20];
queue<zuobiao> q;
void bfs()
{
	int last=0,parent_index=-1;
	start.x=0;	start.y=0;	vis[0][0]=1;
	int num=0;
//	lujing[0].x=0;	lujing[0].y=0;	lujing[0].parent=-1;
	q.push(start);
	while(!q.empty())
	{
		cur=q.front();	q.pop();	parent_index++;
		for(int i=0;i<4;i++)
		{
			int xx=cur.x+dx[i];	int yy=cur.y+dy[i];
//			if(xx==4&&yy==3)
//			{
////				last++;	lujing[last].x=xx;	lujing[last].y=yy; lujing[last].parent=parent_index;
//				break;
//			}
			if(xx>=0&&xx<10&&yy>=0&&yy<10&&g[xx][yy]==0&&vis[xx][yy]==0)
			{
				num++; 
				tmp.x=xx;	tmp.y=yy;	vis[xx][yy]=1;	q.push(tmp);
//				last++;	lujing[last].x=xx;	lujing[last].y=yy; lujing[last].parent=parent_index;
			}
		}
	}
//	for(int i=0;i<=last;i++)
//		cout<<i<<","<<lujing[i].x<<","<<lujing[i].y<<","<<lujing[i].parent<<endl;
	cout<<num;
}
int main()
{
	bfs();
	return 0;
}
