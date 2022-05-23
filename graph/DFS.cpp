#include<iostream>
#include<vector>
#include<stack>

using namespace std;
void addEdge(vector<int> adj[],int src,int dest)
{
   adj[src].push_back(dest);
   adj[src].push_back(dest);
}
void DFS(vector<int> adj[],vector<bool>& vis,int st)
{
   stack<int> s;
   s.push(st);
   vis[st]=true;
   while(!s.empty())
   {  
      int t=s.top();
      s.pop();
        cout<<t<<" ";
      for(auto itr : adj[t])
      {
         if(! vis[itr])
         {
            s.push(itr);
            vis[itr]=true;
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
   for(int i=0;i<v;i++)
   {
      if(!visited[i])
      { 
         DFS(adj,visited,i);
      }
   }
}
