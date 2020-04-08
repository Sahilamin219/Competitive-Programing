#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
int flag_g=0;
string g="abcdefghijklmnopqrstuvwxyz";
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        // vector <ll> v;
        fori(i,0,26){
            int val;
            cin>>val;
        }
        string str;
        cin>>str;
        // cout<<str<<endl;
        ll s=0;
        ll n=str.size();
        // fori(i,0,n){
        //     if(v[i]==0){
        //         int c= int (str[i]-'a');
        //         char c=str[i];
        //         int temp=int(c);
        //         cout<<temp<<" ";
        //         v.push_back(c);//=1;
        //     }
        // }
        vector <ll> a;
        fori(i,0,26){
            int fff=0;
            fori(j,0,str.size()){
                if(str[j]==g[i]){
                    fff=1;
                    break;
                }
            }
            if(fff==0){
                a.push_back(i);
            }
        }
        fori(i,0,a.size()){
            s+=(a[i]+1);
            // cout<<i+1<<" ";
        }
        cout<<s<<"\n";
    }
    return 0;
}
