#include <bits/stdc++.h>
#define s(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mx=100000;
#define debug(x) cout<< #x << ':' << x << endl;
#define endl "\n";
#define c(s) cin>>s;
int dp(vector <pair<ll,ll>> v, ll ans, vector <ll> l){

    
    return 0;
}
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // char s='s';
    // char* x=&s;
    // debug(x);
    int t;c(t);
    vector <pair<ll,ll>> v;
    while(t--){
        ll a,b;
        c(a);c(b);
        v.pb(make_pair(a,b));
    }
    ll ans=2;
    sort(v.begin(), v.end());
    vector <ll> lis(s(v),0);
    ans+=dp(v,ans,lis);
    cout<<ans<<endl;
    return 0;
}