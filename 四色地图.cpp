#include"iostream"
using namespace std;
int g[8][8]={
	{0,1,1,1,1,1,1,1},
	{1,0,1,0,1,1,0,1},
	{1,1,0,1,1,0,0,0},
	{1,0,1,0,1,0,0,0},
	{1,1,1,1,0,1,0,0},
	{1,1,0,0,1,0,1,1},
	{1,0,0,0,0,1,0,1},
	{1,1,0,0,0,1,1,0}
}; 
int color[8]={0};
bool isCorrect(int j) 
{
	for(int i=0;i<8;i++)
	{
		if(g[i][j]==1)
			if(color[i]==color[j])
				return false;
	}
	return true;
}

int main()
{
	int i,j=0;
	for(i=0;i<8;i++){
		color[j]+=1;
		while(color[j]<=4&&!isCorrect(j))
			color[j]+=1;
		if(color[j]==5)
		{
			color[j]=0;
			j=j-1;
		}
		else
		{
			j++;
		}
	}
	for(i=0;i<8;i++)
	{
		cout<<color[i]<<" ";
	}
	return 0; 
} 
