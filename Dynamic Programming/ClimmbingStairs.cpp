#include<bits/stdc++.h>
using namespace std;
/*
	Problem: Find distinct ways to climb the Nth stairs
*/
vector<int> dp;
int countDistinctWaysToClimbStair(long long n){
	if(n == 0) return 1;
	if(n < 0) return 0;
	if(dp[n] != -1) return dp[n];
	return dp[n] = countDistinctWaysToClimbStair(n-1)+countDistinctWaysToClimbStair(n-2);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long long t; cin >> t;
	while(t--){
		long long n; cin>>n;
		dp.resize(n+1,-1);
		countDistinctWaysToClimbStair(n);
		cout << dp[n] << endl;
	}
	return 0;
}
