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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector <string> v(n,"a");
        if(n%2==0){
            fori(i,0,n-1){
                v[i+1]=s[i];
                v[i]=s[i+1];
                i++;
            }
        }
        else{
            fori(i,0,n-2){
                v[i+1]=s[i];
                v[i]=s[i+1];
                i++;
            }
            v[n-1]=s[n-1];
        }
        string str="";
        fori(i,0,n){
            str+=v[i];
        }
        fori(i,0,n){
            int a=0;
            fori(j,0,26){
                if(g[j]==str[i]){
                    a=j;
                    break;
                }
            }
            str[i]=g[26-a-1];
        }
        cout<<str<<"\n";
    }
    return 0;
}
