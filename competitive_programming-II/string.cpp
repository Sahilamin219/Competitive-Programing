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

int main() {

    string s,t;
    cin>>s>>t;ll n=0,m=0;
    loop(i,s.size()){
        if( s[i]>64 &&s[i]<=90)n=s[i]-64;
        else n=s[i]-96;
        if( t[i]>64 &&t[i]<=90)m=t[i]-64;
        else m=t[i]-96;
        if(n!=m)break;
    }
    if(n>m)cout<<'1';
    else if(n==m)cout<<'0';
    else cout<<"-1";

   // cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
string twoStrings(string s1, string s2) {
    int pos = 0;
    int index;
    while(1){
        if((s1.find(s2, pos)) != string::npos) {
            return "YES ";
            break;
        }
        else{
            pos+=1; //new position is from next element of index
            if(pos==s1.size()){
                return "NO";
            }
        }
    }
}
#include
using namespace std;
main() {
   string str1 = "aabbabababbbaabb";
   string str2 = "abb";
   int pos = 0;
   int index;
   while((index = str1.find(str2, pos)) != string::npos) {
      cout << "Match found at position: " << index << endl;
      pos = index + 1; //new position is from next element of index
   }
}

Output

Match found at position: 1
Match found at position: 8
Match found at position: 13