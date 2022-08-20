#include<bits/stdc++.h>
using namespace std;

//BFS

bool cycleDetect(vector<int> &visited , vector<vector<int>> &adj , int source)
{
    queue<pair<int,int>> q;

    q.push({source,-1});

    while(!q.empty())
    {
        int front = q.front().first;
        int prev = q.front().second;

        q.pop();
        
        for(int curr : adj[front])
        {
            if(visited[curr]==0)
            {
                q.push({curr,front});
                visited[curr]= 1;

            }

            else if(prev!=curr)
            {
                return true;
            }

        }
    }

    return false;
}



// DFS

bool cycleDetectDfs(vector<int> &visited , vector<vector<int>> &adj , int source , int prev)
{
      visited[source]=1;
        for(int curr : adj[source])
       {
            if(visited[curr]==0)
             {

                cycleDetectDfs(visited , adj , curr,source); 

             }

             else if(prev!=curr)
             {
                return true;
             }

      }

      return false;
}

int main()
{
    int n;
    cin>>n;

    int m;
    cin>>m;

    vector<vector<int>> edges(m , vector<int>(2));


    for(int idx=0 ; idx<m  ; idx++)
    {
        for(int ind = 0 ; ind<2 ; ind++)
        {
            cin>>edges[idx][ind];
        }
    }

    vector<int> visited (n,0);

    vector<vector<int>> adj(n);


    for(int idx=0 ; idx<m ; idx++)
    {
        adj[edges[idx][0]].push_back(edges[idx][1]);
        adj[edges[idx][1]].push_back(edges[idx][0]);
    }


    for(int idx=0 ; idx<n ; idx++)
    {
        if(visited[idx]==0)
        {
            
            cout<<cycleDetect(visited, adj , idx);
        }
    }

    return 0;
}