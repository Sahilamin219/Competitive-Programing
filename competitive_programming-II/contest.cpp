#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define debug(x) cout<< #x << ':' << x << endl;
#define c(n) cin>>n;
#define endl "\n";
#define INF 0x3f3f3f3f;
/* global declaration */
bool flag_g=0;
string gg="abcdefghijklmnopqrstuvwxyz";
string gv="aeiouy";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int g_a[10];
int fac(ll i){
    if(i<=1){
        return 1;
    }
    return(i*fac(i-1));
}
int get(ll i){
    i=fac(i);
    ll a[4]={2,3,5,7};
    ll j=0,it=0,k=0;
    while(i>1 and it<4){
        if(i%a[it]==0){
            i/=a[it];
            j+=(a[it])*(pow(10,k));
            it=0;k++;
        }
        else{
            it++;
        }
    }
    return j;
}
void make(){
    f(i,1,9){
        g_a[i]=get(i);
    }
}
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first==b.first){
        return a.second<b.second;
    }// return (a.second<b.second);
    return (a.first>b.first);
    return false;
}
string reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    return str;
} 
vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll t;c(t);
    while(t--){
        ll n;c(n);
        vector <ll> v(27,0);
        f(i,0,n){
            ll val;c(val);
            v[val]++;
        }
        ll maxi1=0,maxi2=0;
        f(i,0,27){
            if(maxi1<v[i]){
                maxi1=v[i];
            }
            if()
        }
        if(maxi1<=3)cout<<max_element;
        else{

        }
    }
    // string s,str;
    // c(s);
    // make();
    // for(auto x: g_a)cout<<x<<" ";
    // f(i,0,s(s)){
    //     int temp=int(s[i]-'0');
    //     int take=g_a[temp];
    //         str+=to_string(take);
    // }
    // sort(str.rbegin(), str.rend());
    // int i=s(str)-1;
    // while(str[i]=='0'){
    //     str.erase(i);
    // }
    // cout<<str<<"\n";
    // puts(flag?"NO":"YES");
    return 0;
}
// https://codeforces.com/blog/entry/16468
// int prime[100000+10];
//     for(int i=1;i<=100000;i++)
//     prime[i]=1;
//     prime[0]=0;
//     prime[1]=1;
//     int factors[100000+10]={0};
//     vector<int> v[6];
//     for(int i=2;i<=100000;i++)
//     {
//         if(prime[i]==1)
//         {
//             for(int j=i;j<=100000;j+=i)
//             {
//                 factors[j]++;
//                 prime[j]=0;
//             }
//         }
//     }
//     for(int i=1;i<=100000;i++)
//     {
//         if(factors[i]<=5)
//         {
//             v[factors[i]].pb(i);
//         }
//     }
