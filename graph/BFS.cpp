#include<iostream>
#include<vector>
#include<queue>

using namespace std;
void addEdge(vector<int> adj[],int src,int dest)
{
   adj[src].push_back(dest);
   adj[src].push_back(dest);
}
void BFS(vector<int> adj[],vector<bool>& vis,int st)
{
   queue<int> q;
   vis[st]=true;
   q.push(st);
   while(!q.empty())
   {  
      int f=q.front();
      cout<<f<<" ";
      q.pop();
      for(auto itr : adj[f])
      {
         if(! vis[itr])
         {
            vis[itr] = true;
            q.push(itr);
         }
      }
   }
}
int main()
{  
   int v,e;
   cout<<"Enter number of vertex : ";
   cin>>v;
   vector<int> adj[v];
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
