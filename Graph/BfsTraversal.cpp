#include<bits/stdc++.h>
using namespace std;
/*
	Problem: Breadth First Search in GRAPH
	Description:  	
				V - Number of Vertices
				E - Number of Edges
*/

vector<long long> bfsOfGraph(long long V, vector<long long> adj[]){
	vector<long long> bfsStore;
	queue<long long> Q; Q.push(1);
	vector<long long> visited(V+1, 0);
	visited[1] = 1;

	while(!Q.empty()){
		long long length = Q.size();
		for(int i = 0; i < length; ++i){
			long long currElement = Q.front(); Q.pop();
			bfsStore.push_back(currElement);
			// Traverse all adjacent non-visited nodes
			for(auto it: adj[currElement]){
				if(!visited[it]){
					Q.push(it);
					visited[it] = 1;
				}
			}
		}
	}
	return bfsStore;
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
		vector<long long> ans = bfsOfGraph(V, adj);
		for(auto x: ans) cout << x << " ";
	}
	return 0;
}
