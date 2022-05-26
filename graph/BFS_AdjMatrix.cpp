#include<iostream>
#include<vector>
#include<queue>

using namespace std;
void addEdge(vector<vector<int>>& adj,int src,int dest)
{
   adj[src][dest]=1;
   adj[dest][src]=1;
}
void BFS(vector<vector<int>> adj,vector<bool>& vis,int st)
{
   queue<int> q;
   vis[st]=true;
   q.push(st);
   while(!q.empty())
   {  
      int f=q.front();
      cout<<f<<" ";
      q.pop();
      for(int i=0;i<adj[f].size();i++)
      {
         if(adj[f][i]==1 && (!vis[i]))
         {
            vis[i] = true;
            q.push(i);
         }
      }
   }
}
int main()
{  
   int v,e;
   cout<<"Enter number of vertex : ";
   cin>>v;
   vector<vector<int>> adj(v,vector<int>(v,0));
   //adj.assign(v,vector<int>());
   cout<<"Enter number of edges : ";
   cin>>e;
   vector<bool> visited(v,false);
   int a,b;
   cout<<"Enter edges -:\n";
   for(int i=0;i<e;i++)
   {
      cin>>a>>b;
      addEdge(adj,a,b);
   }
   cout<<"Starting node 0 "<<endl;
   for(int j=0;j< v;j++)
   {
      if(!visited[j])
      {
          BFS(adj,visited,j);
      }
   } 
}
