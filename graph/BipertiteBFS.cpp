#include<iostream>
#include<vector>
#include<queue>

using namespace std;
void addEdge(vector<int> adj[],int src,int dest)
{
   adj[src].push_back(dest);
   adj[src].push_back(dest);
}
bool isBipertite(int st,vector<int> adj[],int color[])
{
   queue<int> q;
   q.push(st);
   color[st]=1;
   while(!q.empty())
   {
      int node=q.front();
      q.pop();
      for(auto it : adj[node])
      {
         if(color[it]==-1)
         {
            color[it]=1-color[node];
            q.push(it);
         }
         else if(color[it]==color[node])
         {
            return false;
         }
      }
   }
   return true;
}   
bool check_bipertite(vector<int> adj[],int v)
{
   int color[v];
   for(int k=0;k<v;k++)
   {
      color[k]=-1;
   }

   for(int i=0;i<v;i++)
   {
      if(color[i]==-1)
         {
            if(! isBipertite(i,adj,color))
                  return false;
         }
   }
   return true;
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
   if(check_bipertite(adj,v))
      cout<<"Yes "<<endl;
   else
      cout<<"No ";

   return 0; 
}
