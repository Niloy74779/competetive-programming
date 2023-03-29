#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5;
const ll INF = 1e18;
int node,edge,u,v,w,visited[N],parent[N];
ll d[N];
vector<pair<int,int>> adjList[N];

void dijkstra(int src){
    for (int i = 1; i <= node; i++) d[i] = INF; 
    d[src] = 0;
    priority_queue<pair<ll,int>> pq;
    pq.push({0,src});
    while (!pq.empty()){
        pair<ll,int> head = pq.top();
        pq.pop();
        int seletedNode = head.second;
        if(visited[seletedNode]) continue;
        visited[seletedNode] = 1;
        for (auto child: adjList[seletedNode]){
            int adjNode = child.first;
            int edgeCost = child.second;
            if(d[seletedNode] + edgeCost < d[adjNode]){
                d[adjNode] = d[seletedNode] + edgeCost;
                parent[adjNode] = seletedNode;
                pq.push({-d[adjNode],adjNode});
            }
        }
    }
}

int main(){

    cin >> node >> edge;

    for (int i = 0; i < edge; i++){
        cin >> u >> v >> w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }
    int src = 1;
    dijkstra(src);
    if(visited[node] == 0){
        cout << -1 ;
        return 0;
    }
    int currentNode = node;
    vector<int>path;
    while (true){
        path.push_back(currentNode);
        if(currentNode == src) break;
        currentNode = parent[currentNode];
    }
    reverse(path.begin(),path.end());
    for(int i:path){
        cout << i << " ";
    }
    return 0;
}