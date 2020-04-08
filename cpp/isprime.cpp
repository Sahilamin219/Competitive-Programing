#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lb lower_bound
#define ub upper_bound
#define pf push_front
#define pb push_back
#define ll long long
#define pi pair<int,int>
#define pl pair<long long,long long>
#define pld pair<long double,long double>
#define endl '\n'
#define loop(i,n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define mod ((ll)(1e9+7))
#define in(x) scanf("%lld",&x)
#define in2(x,y) scanf("%lld %lld",&x,&y)
#define in3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define inv(v) for(auto&i:v) in(i)
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define ml unordered_map<ll,ll> 
#define vpl vector<pair<ll,ll>>
#define INF 0x3f3f3f3f

template<typename T, typename TT>
ostream& operator<<(ostream &os, const pair<T, TT> &t) { return os<<t.first<<" "<<t.second; }
template<typename T>
ostream& operator<<(ostream& os, const vector<T> &t) { for(auto& i: t) os<<i<<" "; return os; }

bool isPrime(ll n) {
    if( n==2 || n==3 ){
        return true;
    }
    if( n%2==0 || n%3==0 ){
        return false;
    }
    for(ll i=5 ; i*i<=n ; i+=6 ){
        if( n%i==0 || n%(i+2)==0 ){
            return false;
        }
    }
    return true;
}

int main() {

    ll n,t;in(n);t= n;vl v;v.pb(2);v.pb(3);
    if(isPrime(n)){
        cout<<'1'<<endl<<n;return 0;
    }
    else if(isPrime(n-2)){
        cout<<"2\n2 "<<n-2;return 0;
    }
    else{
        rep(i,5,300){
            if(isPrime(i)){
                v.pb(i);
            }
        }
    }
    for(ll i=n;i>2;i--){
        if(isPrime(i)){n-=i;break;}
    }
    
    loop(i,v.size()-1){
        loop(j,v.size()-1){
            if(v[i]+v[j]==n)
            {cout<<"3\n"<<v[i]<<" "<<v[j]<<" "<<t-n;return 0;}
        }
    }
    cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
