#include <bits/stdc++.h>
#define INF         0x3f3f3f3f
#define s(a)        int(a.size())
#define newline     cout<<endl;
#define ff          first
#define ss          second
#define f(i,a,b)    for(long long int i=a;i<b;i++)
#define nmod(x,y)   x % y + (x % y < 0 ? y : 0)
#define r(i,a,b)    for(long long int i=a;i>b;i--)
#define print(v)    for (auto x: v)cout<<x<<" ";
#define debug(x)    cout<< #x << ':' << x << endl;
#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
const long long int MAX=10000007;
const long long int mod=1000000007;
/* global declaration */
bool flag_g=0;
string gg="abcdefghijklmnopqrstuvwxyz";string gv="aeiouy";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int glob_a[1000];
int countDivisors(ll n) 
{ 
    ll cnt = 0; 
    for (ll i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
            {
                cnt++;
                cnt=(cnt%mod);
            }
            else{
                cnt = (cnt%mod) + 2; 
            }
        } 
    } 
    return cnt%mod; 
} 
/*
// codechef factor tree question
int prime[MAX]; 
int prime_count[MAX]; 
void sieve() 
{ 
    memset(prime, 0, sizeof(prime)); 
    prime[0] = prime[1] = 1; 
    for (int i = 2; i * i < MAX; i++) { 
        if (prime[i] == 0) { 
            for (int j = i * 2; j < MAX; j += i) { 
                if (prime[j] == 0) 
                    prime[j] = i; 
            } 
        } 
    } 
    for (int i = 2; i < MAX; i++) { 
  
        // If the number is prime then it's  
        // smallest prime factor is the number  
        // itself 
        if (prime[i] == 0) 
            prime[i] = i; 
    } 
} 
long long numberOfDivisorsOfProduct(vector<ll> arr,ll n) 
{ 
    memset(prime_count, 0, sizeof(prime_count)); 
  
    for (ll i = 0; i < n; i++) { 
        ll temp = arr[i]; 
        while (temp != 1) { 
  
            // Increase the count of prime 
            // encountered 
            prime_count[prime[temp]]++; 
            temp = temp / prime[temp]; 
        } 
    } 
  
    long long ans = 1; 
  
    // Multiplying the count of primes 
    // encountered 
    for (ll i = 2; i < MAX; i++) { 
        ans = ans * (prime_count[i] + 1); 
    } 
  
    return ans; 
} 
int get(ll s, ll e,vector<ll> a, vector<vector<ll>> v){
    // ll hap=0;
    vector <ll> hap;
    if(s==e){
        // hap+=a[s];
        hap.pb(a[s]);
    }
    else{
        // hap+=a[s];
        // hap*=a[e];
        hap.pb(a[s]);
        hap.pb(a[e]);
    }
    if(s!=e){
        f(i,0,s(v[s])){
            f(j,0,s(v[e])){
                if(v[s][i]==v[e][j]){
                    // hap*=a[v[s][i]-1];
                    hap.pb(a[v[s][i]-1]);
                }
            }
        }
    }
    ll n=hap.size();
    ll h=numberOfDivisorsOfProduct(hap,n);
    return h;
}
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sieve();
    fast;
    ll t;
    c(t);
    while(t--){
        ll n,q;
        c(n);
        // vector<ll> v[n+1];
        vector <vector<ll>> v(n);
        // vector<vector<ll> > v( n , vector<ll> (n, 0)); 
        f(i,0,n-1){
            ll v1,v2;c(v1);c(v2);
            // vector <ll> col;
            // col.pb(v1);col.pb(v2);v.pb(col);
            v[v1-1].pb(v2);
            v[v2-1].pb(v1);
            // v[v1-1][v2]=1;
            // v[v2-1][v1]=1;
        }
        vector <ll> a;
        // ll a[n];
        f(i,0,n){
            ll val;c(val);
            a.pb(val);
            // c(a[i]);
        }
        c(q);
        while(q--){
            ll s,e;
            c(s);c(e);
            ll h=get(s-1,e-1,a,v);
            cout<<h<<endl;
            // cout<<countDivisors(h)<<endl;
        }
    }
    return 0;
}
*/
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
}
/* 
C++ program to represent undirected and weighted graph 
using STL. The program basically prints adjacency list 
representation of graph 
*/
// #include <bits/stdc++.h> 
// using namespace std; 

// // To add an edge 
// void addEdge(vector <pair<int, int> > adj[], int u, 
//                                     int v, int wt) 
// { 
//     adj[u].push_back(make_pair(v, wt)); 
//     adj[v].push_back(make_pair(u, wt)); 
// } 

// // Print adjacency list representaion ot graph 
// void printGraph(vector<pair<int,int> > adj[], int V) 
// { 
//     int v, w; 
//     for (int u = 0; u < V; u++) 
//     { 
//         cout << "Node " << u << " makes an edge with \n"; 
//         for (auto it = adj[u].begin(); it!=adj[u].end(); it++) 
//         { 
//             v = it->first; 
//             w = it->second; 
//             cout << "\tNode " << v << " with edge weight ="
//                 << w << "\n"; 
//         } 
//         cout << "\n"; 
//     } 
// } 

// int main() 
// { 
//     int V = 5; 
//     vector<pair<int, int> > adj[V]; 
//     addEdge(adj, 0, 1, 10); 
//     addEdge(adj, 0, 4, 20); 
//     addEdge(adj, 1, 2, 30); 
//     addEdge(adj, 1, 3, 40); 
//     addEdge(adj, 1, 4, 50); 
//     addEdge(adj, 2, 3, 60); 
//     addEdge(adj, 3, 4, 70); 
//     printGraph(adj, V); 
//     return 0; 
// } 