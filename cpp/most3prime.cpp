#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--)
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mx=100000;
// const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */
bool flag_g=0;
bool check(ll n) {
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
int main(){
    fast;
    ll n;
    cin>>n;
    int f=1;
    ll m=(pow(n,0.5));
    fori(i,2,m+1){
        if(n%i==0){
            f=0;
        }
    }
    if(f==0){
        if(check(n-2)){
            cout<<2<<"\n";
            cout<<2<<" "<<n-2;
            return 0;
        }
        vector <ll> v;
        fori(i,2,n-2){
            if(check(i)){
                v.push_back(i);
            }
        }
         fori(i,0,n(v)){
             cout<<v[i]<<" ";
         }
        foir(i,n(v)-1,0){
            foir(j,n(v)-1,0){
                vector <ll>::iterator it;
                it=find(v.begin(), v.end(), n-v[i]-v[j]);
                if(it!=v.end()){
                    //cout<<v[it-v.begin()]<<"\n";
                    cout<<3<<"\n";
                    cout<<v[i]<<" "<<v[j]<<" "<<n-v[i]-v[j];
                    return 0;
                }
            }
        }
    }
    else{
        cout<<1<<"\n";
        cout<<n;
    }
    return 0;
}
