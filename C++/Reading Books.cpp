/***
CSES Problemset(Searching Sorting): https://cses.fi/problemset/task/1631
***/

//code_author:jeevansh
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n;
	cin>>n;
	vector<int> book(n);
	ll sum=0;
	loop{
		cin>>book[i];
		sum+=book[i];
	}
	sort(book.begin(),book.end());
	cout<<max(sum,(ll)book[n-1]*2);
	return 0;
}
