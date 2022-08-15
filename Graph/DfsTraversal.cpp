#include<bits/stdc++.h>
using namespace std;
/*
	Problem: Depth First Search in GRAPH
	Description:  	
				V - Number of Vertices
				E - Number of Edges
*/
void dfs(long long node, vector<long long> &visited, vector<long long> adj[],
												vector<long long> &storeDfs){
	storeDfs.push_back(node);
	visited[node] = 1;
	for(auto it: adj[node]){
		if(!visited[it]){
			dfs(it, visited, adj, storeDfs);
		}
	}
}
vector<long long> dfsOfGraph(long long V, vector<long long> adj[]){
	vector<long long> storeDfs;
	vector<long long> visited(V+1, 0);
	for(long long i = 1; i <= V; ++i){
		if(!visited[i]){
			dfs(i, visited, adj, storeDfs);
		}
	}
	return storeDfs;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long long t; cin >> t;
	while(t--){
		long long V, E; cin >> V >> E;
		vector<long long> adj[V+1];
		for(int i = 0; i < V; ++i){
			long long u, v; cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<long long> ans = dfsOfGraph(V, adj);
		for(auto x: ans) cout << x << " ";
	}
	return 0;
}
