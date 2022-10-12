//code_author:jeevansh
/***
CSES Problemset: https://cses.fi/problemset/task/1623
***/

#include<bits/stdc++.h>
#define ll long long
#define loop for(int i=0;i<n;i++)
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll n;
	ll BIG=1e18;
	cin>>n;
	vector<int> v1(n);
	loop{
		cin>>v1[i];
	}
	//USING BITMASKING
	for(int j=0;j<(1<<n);j++){
		ll s1=0,s2=0;
		for(int pos=0;pos<n;pos++){
			if(j&(1<<pos))
				s1+=v1[pos];
			else s2+=v1[pos];
		}
		BIG=min(BIG,abs(s1-s2));
	}
	cout<<BIG;
	return 0;
}

