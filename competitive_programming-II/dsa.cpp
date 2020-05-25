#include <bits/stdc++.h>
#define endl "\n"
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
int shortest(vector<vector<pair<int,int>>> vect, int a, int b, int v){
    ll ans=0;
    vector<int> distance(v,INF);
    return ans;
}
void addvertex(vector<vector<pair<int,int>>> vect,int a,int b, int w){
    vect[a].push_back(w)
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    int t;cin>>t;
    while(t--){
        int v,k;cin>>v>>k;
        vector<vector<pair<int,int>>> vect(v+1,vector<int>(v+1,0));
        while(k--){
            int a,b,c;cin>>a>>b>>c;

        }
    }
    // int n,q;cin>>n>>q;
    // vector<ll> v(n,0);
    // vector<vector<ll>> x(n,0);
    // f(i,0,n)cin>>v[i];
    // ll sum=0;
    // f(i,0,n){
    //     sum+=v[i];
    //     x[i]=sum;
    // }
    // while(q--){
    //     int a,b;cin>>a>>b;   
    // }
    // puts(flag?"NO":"YES");https://www.hackerearth.com/practice/notes/trees/
    return 0;
}
spoj k hai eassy dijisktra wala 
fast
    int t;cin>>t;
    while(t--){
        int v,k;cin>>v>>k;
        vector<vector<pair<int,int>>>vect(v+1,vector<pair<int,int>> (v));
        while(k--){
            int a,b,c;cin>>a>>b>>c;
            vect[a-1].push_back(make_pair(b,c));
        }
        for(auto x:vect){
            for(auto y:x){
                cout<<y.first<<"-"<<y.second<<" ";
            }
        }
        int s,e;cin>>s>>e;
    }