#include <bits/stdc++.h>
#define endl "\n";
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
double maximum = numeric_limits<double>::max();
double inf = numeric_limits<double>::infinity();
ll ans=0;
int solve(vector<ll> v,int n,int ind,int loc_ans){
    if(n==1){
        return loc_ans+v[n];
    }
    if(n==2){
        if(v[1]==v[0]+1 or v[0]==v[1]+1){
            return loc_ans + max(v[0],v[1]);
        }
        else{
            return loc_ans+v[0]+v[1];
        }
    }
    if(ind>=v.size()){
        cout<<loc_ans<<" "<<n<<"\n";
        return loc_ans;
    }
    vector<ll> a;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[ind]-1 || v[i]==v[ind]+1 || i==ind){
            continue;
        }
        else{
            a.push_back(v[i]);
        }
    }
    // return max(max(solve(v,n,ind+1,loc_ans),solve(a,a.size(),ind+1,loc_ans+=v[ind])));
    ans=max(solve(v,v.size(),ind+1,loc_ans),solve(a,a.size(),ind+1,loc_ans+=v[ind]));
    return ans;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll n;cin>>n;
    vector<ll> v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<solve(v,n,0,0);
    // cout<<ans;
    return 0;
}
//https://codeforces.com/blog/entry/68615
//https://codeforces.com/contest/230/problem/C
