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
        vector <string> s;
        fori(i,0,n){
            string temp;
            cin>>temp;
            s.push_back(temp);
        }
        int flag_r=0;
        int flag_l=0;
        float tim=0;
        int b[4];
        fori(i,0,n){
            if(s[i][0]=='d' || s[i][0]=='f'){
                tim+=0.1;
                flag_l=1;
                b[d-'48']++;
            }
            else{
                flag_r=1;
                tim+=0.2;
            }
            fori(j,1,s[i].size()){
                if(flag_l==1 && (s[i][j]=='d' || s[i][j]=='f')){
                    tim+=0.2;
                    flag_l=1;
                    flag_r=0;
                }
                else if(flag_l==0 && (s[i][j]=='d' || s[i][j]=='f')){
                    tim+=0.1;
                    flag_r=0;
                    flag_l=1;
                }
                else if(flag_l==0 && (s[i][j]=='j' || s[i][j]=='k')){
                    tim+=0.2;
                    flag_l=0;
                    flag_r=1;
                }
                else if(flag_l==1 && (s[i][j]=='j' || s[i][j]=='k')){
                    flag_l=0;
                    flag_r=1;
                    tim+=0.1;
                }
            }
            flag_l=0;flag_r=0;
        }
        cout<<tim*10<<"\n";
    }
    return 0;
}
