//code_author:jeevansh

/***
CSES Problemset: https://cses.fi/problemset/task/2165
***/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void tower_hanoi(int n,int f_rod,int base_rod,int aux){ 
	if(n==1){ 
		cout<<f_rod<<" "<<base_rod<<"\n"; 
		return; 
	} 
	tower_hanoi(n-1,f_rod,aux,base_rod);
	cout<<f_rod<<" "<<base_rod<<"\n"; 
	tower_hanoi(n-1,aux,base_rod,f_rod); 
} 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	cout<<(pow(2,n))-1<<"\n";
	tower_hanoi(n, 1, 3, 2);
	return 0;
 }
