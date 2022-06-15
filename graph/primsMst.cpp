#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
void addEdge(vector<pair<int,int>> adj[],int x,int y,int wt)
{
	adj[x].push_back({y,wt});
	adj[y].push_back({x,wt});
}

int shortestVertex(int wei[],bool vis[],int V)
{
	int minVertex, min=INT_MAX;
    for(int i=0;i<V;i++)
    {
       if(vis[i]==false && wei[i]<min)
       {
           min=wei[i];
           minVertex=i;
       }
    }
    return minVertex;
}

void PrimsMst(vector<pair<int,int>> adj[],bool vis[],int par[],int wei[],int V)
{
	for(int i=0;i<V-1;i++)
	{
		int u=shortestVertex(wei,vis,V);
		cout<<u;
		vis[u]=true;
		for(auto it: adj[u])
		{
			int v=it.first;
			int w=it.second;
			if(vis[v]==false && w < wei[v])
			{
				wei[v]=w;
				par[v]=u;
			}
		}
	}
}
int main()
{
	int V,E;
	cout<<"Enter number of vertex ";
	cin>>V;
	cout<<"Enter numberof edges : ";
	cin>>E;
	vector<pair<int,int>> adj[V];
	int x,y,wt;
	cout<<"Enter edges with weight "<<endl ;
   for(int i=0;i<E;i++)
	{
		cout<<"From : ";
		cin>>x;
		cout<<"To : ";
		cin>>y;
		cout<<"weight : ";
		cin>>wt;
		addEdge(adj,x,y,wt);
	} 
	bool visited[V]={false};
	int weight[V];
	int parent[V];
	for(int j=1;j<V;j++)
	{
		weight[j]=INT_MAX;
		parent[j]=-1;
	}
   weight[0]=0;
	//cout<<"Enter source node  0 : "<<endl;
	PrimsMst(adj,visited,parent,weight,V);
	cout<<"Mst : "<<endl;
	cout<<"\n\nEdge \t weight "<<endl;
	for(int i=1;i<V;i++)
	{
		cout<<parent[i]<< "\t "<<i<<"\t"<<weight[i]<<endl;
	}
}
