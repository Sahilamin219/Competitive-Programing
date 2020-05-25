#include <bits/stdc++.h>
#define pb push_back
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fill(ar, val) memset(ar, val, sizeof(ar))
using namespace std;
typedef long long ll;
// void printMatrix(vector <vector<ll>> matrix, ll n)
// {
//     // for(auto x: matrix){
//     //     for(auto y: x){
//     //         cout<<y<<" ";
//     //     }cout<<endl;
//     // }
//     f(i,0,n){
//         f(j,0,matrix[i].size()){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }
// }
void rightrotate(vector <string> v){
    string k=v[0];
    // cout<<k<<"\n";
    char lost=k[k.size()-1];
    f(i,1,k.size()){
        k[i]=v[0][i-1];
    }
    // cout<<k<<"\n";
    k[0]=lost;
    v[0]=k;
    cout<<k<<"\n";
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif   
    int n,m;
    cin>>n>>m;
    vector<vector<string>> v;
    f(i,0,n){
        vector <string> a;
        string val;
        cin>>val;
        a.pb(val);
        v.pb(a);
    }
    rightrotate(v[0]);
    f(i,0,n){
        cout<<v[i][0]<<"\n";
    }
    // ll t;c(t);ll n;c(n);
    // vector < vector<ll> > twoDvector(n+2);
    // for(int i=0; i<5; i++)
    // {
    //     vector<ll> row;
    //     ll v1,v2;c(v1);c(v2);//row.pb(v1);row.pb(v2);
    //     // twoDvector.push_back(row);
    //     twoDvector[v1].pb(v2);
    //     twoDvector[v2].pb(v1);
    // }
    // printMatrix(twoDvector, n);
    return 0;
}