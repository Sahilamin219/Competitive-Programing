#include <bits/stdc++.h>
#define endl "\n";
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
double maximum = numeric_limits<double>::max();
double inf = numeric_limits<double>::infinity();
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    int n;cin>>n;
    int flag=0;
    if(n%2){
        flag=1;
        n-=3;
    }
    int count=0;
    if(flag)count=1;
    count+=(n/2);
    cout<<count<<endl;
    f(i,0,n/2)cout<<2<<" ";
    if(flag)cout<<3;
    return 0;
}
    // int x, y, nodes, edges;
    // cin >> nodes;       //Number of nodes
    // cin >> edges;       //Number of edges
    // vector <int> adj[nodes+1];
    // for(int i = 0;i < edges;++i)
    // {
    //     cin >> x >> y;
    //     adj[x].push_back(y);        //Insert y in adjacency list of x
    //  }
    // // for(int i = 1;i <= nodes;++i)
    // // {   
    // //     cout << "Adjacency list of node " << i << ": ";
    // //     for(int j = 0;j < adj[i].size();++j)
    // //     {
    // //         if(j == adj[i].size() - 1)
    // //                 cout << adj[i][j] << endl;
    // //         else
    //             // cout << adj[i][j] << " --> ";
    // //     }
    // // }
    // int q;cin>>q;
    // while(q--){
    //     cin>>x>>y;
    //     int flag=0;
    //     for(int i=0;i<adj[x].size();i++){
    //         if(adj[x][i]==y){
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag){
    //         cout<<"YES"<<"\n";
    //     }
    //     else{
    //         cout<<"NO"<<"\n";
    //     }
    // }
// return 0;
// }