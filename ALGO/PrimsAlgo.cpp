
#include<iostream>
#include<unordered_map>
#include<list>
#include<limits.h>
#include<vector>
using namespace std;

class Graph
{
    private:
        int node,edges;

    public:
        Graph(int u,int v)
        {
            this->node=u;
            this->edges=v;
        }
        
        unordered_map<int,list<pair<int,int>>> adj;

        void addEdge(int u,int v,int w)
        {
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
    
        }

        void primsGraph()
        {
            vector<int> key(node+1);
            vector<bool> mst(node+1);
            vector<int> parent(node+1); 

            // initialize all arrays
            for(int i=0;i<=node;i++)
            {
                key[i]=INT_MAX;
                parent[i]=-1;
                mst[i]=false;
            }

            key[1]=0;
            
            for(int i=1;i<node;i++)
            {
                int mini = INT_MAX;
                int u;

                for(int v=1;v<=node;v++)
                {
                    if(mst[v]==false and key[v] < mini )
                    {
                        u=v;
                        mini=key[v];
                    }
                }

                mst[u]=true;

                for(auto itr : adj[u])
                {
                    int v = itr.first;
                    int w =itr.second;

                    if(mst[v] == false and w< key[v])
                    {
                        parent[v]=u;
                        key[v]=w;
                    }
                }
            }
            vector<pair<pair<int,int>,int>> result;
            for(int i=2;i<=node;i++)
            {
                result.push_back({{parent[i] , i},key[i]});
            }
            printPrims(result);
        }
        void printPrims(vector<pair<pair<int,int>,int>> result)
        {
            for(auto itr : result)
            {
                cout<<itr.first.first<<", "<<itr.first.second<<", "<<itr.second;
                cout<<endl;
            }
        }
};

int main()
{
    int n;
    cout<<"Enter number of nodes : "<<endl;
    cin>>n;

    int m;
    cout<<"Enter number of edges : "<<endl;
    cin>>m;
    
    Graph g(n,m);

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        g.addEdge(u,v,w);
    }

    g.primsGraph();
}