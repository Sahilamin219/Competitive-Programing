#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define all(x) x.begin(), x.end()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
vector <pair<long long int,long long int>> v;
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
vector<vector<int>> dp(4, vector<int> (4,0));
int n,m;
int fun(vector<vector<int>> v,int ans, int i, int j)
{
    if(i==n-1 and j==m-1)return ans+v[i][j];
    if(dp[i][j])return dp[i][j];
    if(i==n-1){
        dp[i][j] = fun(v,ans+v[i][j], i, j+1);
        return dp[i][j];
    } 
    if(j==m-1){
        dp[i][j] = fun(v,ans+v[i][j], i+1, j);
        return dp[i][j];
    }
    dp[i][j] = min(fun(v,ans+v[i][j],i+1,j), fun(v,ans+v[i][j],i,j+1));//+v[i][j];
    return dp[i][j];
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m,0));
    f(i,0,n){
        f(j,0,m)cin>>v[i][j];
    }
    cout<<fun(v,0,0,0)<<endl;
    // for(auto x: dp){
    //     for(auto y:x){cout<<y<<" ";}cout<<endl;
    // }
    vector<vector<int>> tb(n, vector<int> (m,0));
    tb[0][0]=v[0][0];
    f(i,0,n){
        f(j,0,m){
            if(i!=0 and j==0)tb[i][j]=tb[i-1][j]+v[i][j];
            else if(i==0 and j!=0)tb[i][j]=tb[i][j-1]+v[i][j];
            else if(i>0 and j>0)tb[i][j]=min(tb[i-1][j],tb[i][j-1])+v[i][j];
        }
    }
    cout<<tb[n-1][m-1]<<endl;
    // for(auto x: tb){
    //     for(auto y:x){cout<<y<<" ";}cout<<endl;
    // }
    return 0;
}
