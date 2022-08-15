#include<bits/stdc++.h>
using namespace std;
/*
	Problem: Find unique ways to reach [N-M] from [0-0] in a grid
*/
vector<vector<int>> dp;
long long n, m;
int UniquePaths(long long i, long long j){
	if(i == n-1 && j == m-1) return 1;
	if(i >=n || j>= m) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	long long right = UniquePaths(i, j+1);
	long long down = UniquePaths(i+1, j);
	return dp[i][j] = right + down;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long long t; cin >> t;
	while(t--){
		cin >> n >> m;
		dp.resize(n, vector<int>(m, -1));
		cout << UniquePaths(0,0) << endl;
	}
	return 0;
}
