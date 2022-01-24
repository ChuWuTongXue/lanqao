#include<iostream>
#include<algorithm>
#include<limits.h>
#include<queue>
//不会 -->栈不熟悉，图几乎完全不会，相关算法也不太懂 
using namespace std;
struct queue_record{
	int v,w;
	queue_record(int v_,int w_)
	{
		v = v_;
		w = w_;
	}
	bool operator<(const queue_record &a)const
	{
		return (w > a.w); 
	}
};
int dijkstra(int *edges,int vertex_number,int start)
{
	distanes[start] = 0;
	prioriy_quue<queue_record> queue;
	queue.push(quue_record(start,0));
	int *visited = new int[vertex_number;i++];
	for(int i =0;i<=vertex_number;i++)
		visited[i]=false;
	while(!queue.empty())
	{
		int v = queue.top().v;
		int w = queue.top().w;
		queue.pop();
		if(visited[v])
			continue;
		visited[v] = true;
		for(int i=1;i<=vertex_number;i++)
		{
			if(!visited[i] && edges[v*vertex_number+i] != INT_MAX)
				if(edges[v*vertex_number+i]+distances[v] < distance[i]) //核心 
				{
					distance[i] = edges[v*vertex_number+i]+distance[v];
				}
				
			
		}
	 } 
}
int main()
{
	int n,m,s;
	int *edges;
	int *distances;
	cin>>n>>m>>s;
	edges = new int[(n+1)*(n+1)];
	distances = new int[n+1];
	for(int i=0;i<=n;i++)
	{
		distances[i] = INT_MAX;
	}
	for(int i =0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
			edges[i*n+j] = INT_MAX;
		edges[i*n+i] =0; //edges[i][i]
	}
	for(int i=0;i<m;i++)
	{
		int u,v,m;
		cin>>u>>v>>m;
		if(u==v)
			continue;
		if(w< edges[u*n+v])
			edges[u*n+v]=w;
	}
	int result = djikstra(edges,n,s,distances);
	
	delete edges;
	return 0;
}
