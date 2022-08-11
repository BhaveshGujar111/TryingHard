#include<bits/stdc++.h>
using namespace std;

/*
	FIND IF THE GIVEN NUMBER IS PRIME OR NOT
*/

//Time-Complexity - O(N)
bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n % i == 0) return false;
	}
	return true;
}

//Time-Complexity - O(sqrt(N))
bool isPrimeTwo(int n){
	for(int i=2;i*i<=n;i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t; cin >> t;
	while(t--){
		int n;
		cin>>n;
		if(isPrimeTwo(n)){
			cout << "Prime" << endl;
		}else{
			cout << "Non-Prime" << endl;
		}
	}
}
