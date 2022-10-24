/***
CSES Problemset: https://cses.fi/problemset/task/1074
***/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
vector<int> arr;
ll ans,cnt;

void solve() {
	cin>>n;
	arr.resize(n);
	for(int &x : arr)
		cin >> x;
	sort(arr.begin(),arr.end());
	m=arr[n/2];
	for(const int &x : arr)
		ans+=abs(m-x);

	cout<<ans<<"\n";
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}
