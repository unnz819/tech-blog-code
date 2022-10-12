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

    signed int n; 
    cin>>n;
    ll a1[n],b1[n];
    vector<pair<int,int>> arr;
    loop{
        int x,y; 
        cin>>x>>y;
        a1[i]=x;
        b1[i]=y;
    }
    sort(a1,a1+n);
    sort(b1,b1+n);
    int MAXN=0;
    int c=0, x=0,y=0;
    while(x<n){
        if(a1[x]<b1[y]){
            c++;
            x++;
        }
        else{
            c--;
            y++;
        }
        MAXN=max(MAXN,c);
    }
    cout<<MAXN;
    return 0;
} 