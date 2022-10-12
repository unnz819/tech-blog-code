//code_author:jeevansh

/***
CSES Problemset: https://cses.fi/problemset/task/1090
***/

#include <bits/stdc++.h>
#define ll long long
#define loop for(int i=0;i<n;i++)
using namespace std;

const int MAXN=2e5+10;

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll x,n;
	int p[MAXN],i,j,ans;
	bool gondola[MAXN];
	cin>>n>>x;
	loop{
		cin>>p[i];
	}
	sort(p,p+n);
	i=0;j=n-1;
		while (i<j){
		if (p[i]+p[j]>x)
			--j;
		else{ 
			++ans; 
			gondola[i]=gondola[j]=true;
			++i; --j; 
		}
	}
	loop{
		ans+=gondola[i]==false;
	}
	cout << ans << "\n";
	return 0;
}
