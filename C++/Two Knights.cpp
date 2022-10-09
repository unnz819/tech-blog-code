//code_author:jeevansh

/***
CSES Problemset: https://cses.fi/problemset/task/1072
***/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		//For general n, the answer is (n−1)(n−2)+(n−2)(n−1)=2(n−1)(n−2)
		ll knight1,knight2,res,reduction;
		knight1=i*i;        //ways of placing 1st knight
		knight2=knight1-1;	//ways of placing second knight
		res=(knight1*knight2)/2; 
		reduction=4*(i-1)*(i-2);
		cout<<res-reduction<<"\n";
	}
	return 0;
}
