#include <iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool isCycle(vector<int> adj[], int s,int V, vector<bool>& visited)
{

	queue<pair<int,int>> q;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	q.push({s,-1});

	while (!q.empty()) 
   {
		int curr = q.front().first;
      int parent=q.front().second;
		q.pop();
		for (auto it : adj[curr])
       {
			if (!visited[it])
         {
				visited[it] = true;
				q.push({it,curr});
			}
			else if (parent != it)
				return true;
		}
	}
	return false;
}

bool checkCycle(vector<int> adj[], int V)
{
	vector<bool> visited(V, false);

	for (int i = 0; i < V; i++)
   {
		if (!visited[i] && isCycle(adj, i,V, visited))
      {
         	return true;
      }
	}	
	return false;
}


int main()
{
	int v,e;
   cout<<"Enter number of vertices : ";
   cin>>v;
   cout<<"Enter number of edges : ";
   cin>>e;
	vector<int> adj[v];
   cout<<"Enter edges : "<<endl;
   int x,y;
   for(int i=0;i<e;i++)
   {
   cout<<"Fron  : ";
   cin>>x;
   cout<<"to : ";
   cin>>y;
   addEdge(adj,x,y);
   }

	if (checkCycle(adj, v))
		cout << "Yes Cycle Exist" <<endl;
	else
		cout << "No Cycle Not Exist"<<endl;

	return 0;
}

