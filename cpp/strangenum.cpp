#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
bool isPrime(ll n) {
    ll m=(pow(n,0.5));
    if( n==2 || n==3 ){
        return true;
    }
    if( n%2==0 || n%3==0 ){
        return false;
    }
    for(ll i=5 ; i<m+1 ; i+=6 ){
        if( n%i==0 || n%(i+2)==0 ){
            return false;
        }
    }
    return true;
}
int primes(ll n){
    ll count;
    ll g_count=0;
    for(ll i=2;i*i<=n;i++){
        count = 0;
        if(isPrime(i) && (n%i==0)){
            while(n%i==0){
                n/=i;
                count++;
            }
            cout<<i<<" "<<count<<" ";
            g_count+=count;
        }
    }
    if(n>1){
        g_count++;
        cout<<n<<" "<<1; 
        cout<<"ya ";
    }
    return g_count;
}
int main() {
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ll t;
	cin>>t;
    while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll a=primes(n);
        if(k<=a){
            cout<<1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
	}
	return 0;
}