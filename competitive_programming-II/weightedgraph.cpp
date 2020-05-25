#include <bits/stdc++.h>
#define pb          push_back
#define mkp         make_pair
#define INF         0x3f3f3f3f
#define s(a)        int(a.size())
#define newline     cout<<endl
#define f(i,a,b)    for(long long int i=a;i<b;i++)
#define nod(x,y)    x % y + (x % y < 0 ? y : 0)
#define r(i,a,b)    for(long long int i=a;i>b;i--)
#define print(v)    for (auto x: v)cout<<x<<" "
#define debug(x)    cout<< #x << ':' << x << endl
#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
const long long int MAX=10000007;
const long long int mod=1000000007;
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    int t;
    cin>>t;
    while(t--){
        ll n,m,a,b,c;
        cin>>n>>m>>a>>b>>c;
        vector <ll> p;
        f(i,0,m){
            ll val;
            cin>>val;
            p.push_back(val);
        }
        sort(p.begin(), p.end());
        ll mm=m;
        int arr[n+1][m+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
        while(mm--){
            ll x,y;
            cin>>x>>y;
            arr[x][y]=1;
            arr[y][x]=1;
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<arr[i][j]<<" ";
        //     }cout<<endl;
        // }cout<<endl;

    }
    return 0;
}