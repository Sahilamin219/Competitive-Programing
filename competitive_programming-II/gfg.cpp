#include <bits/stdc++.h>
using namespace std;
set<vector<int>> sol;
void make(vector<int> v, int s, int sum, int index, vector<int> t){
    if(index>v.size())return ;
    else if(sum>s)return ;
    else if(sum==s){
        sol.insert(t);
        return ;
    }
    else{
        sum+=v[index];
        t.push_back(v[index]);
        make(v,s,sum,index+1,t);
        sum-=v[index];
        t.pop_back();
        make(v,s,sum,index+1,t);
    }
}
// https://practice.geeksforgeeks.org/problems/jumping-numbers/0/?track=sp-stack&batchId=152
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //1 1 2 5 6 7 10
    // print all sub arrays with sum=8
    int t;cin>>t;
    while(t--){
        sol={{0}};
        int n;cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int s;cin>>s;
        sort(v.begin(), v.end());
        vector<int>temp;
        make(v,s,0,0,temp);
        int count=sol.size()-1;
        if(count==0)cout<<"Empty";
        else{
            int flag=1;
            for(auto x: sol){
                if(flag)flag=0;
                else{
                    cout<<"(";
                    for(int j=0;j<x.size();j++){
                        if(j!=x.size()-1)cout<<x[j]<<" ";
                        else{
                            cout<<x[j];
                        }
                    }
                    cout<<")";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)cin>>s[i];
		string tt;cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
		cout<<endl;
	}
}
//The function returns a vector of strings present in the dictionary which matches
//the string pattern.
bool eq(int a[],int b[],int nn,int n){
    if(n==nn){
        for(int i=0;i<n;i++)
            if(a[i]!=b[i])return false;
        return true;
    }
    else{
        return false;
    }
}
vector<string> findMatchedWords(vector<string> dict,string pattern){
    int n = pattern.length();
    vector<string>v;
    int pat[n]={0};
    map<char,int> m;
    for(int i=1;i<n+1;i++){
        if(m[pattern[i-1]]==0){
            pat[i-1] = i;
            m[pattern[i-1]] = i; 
        }
        else{
            pat[i-1] = m[pattern[i-1]];
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<pat[i]<<" ";
    // }cout<<endl;
    for(int i=0;i<dict.size();i++){
        int nn=dict[i].size();
        map<char,int> map_temp;
        int temparr[nn]={0};//cout<<dict[i]<<"-ops"<<endl;
        for(int j=1;j<dict[i].size()+1;j++){
            if(map_temp[dict[i][j-1]]==0){
                temparr[j-1] = j;
                map_temp[dict[i][j-1]] = j;
            }
            else{
                temparr[j-1] = map_temp[dict[i][j-1]];
            }
        }
        // for(int i=0;i<nn;i++){
        // cout<<temparr[i]<<" ";
        // }cout<<endl;
        if(eq(temparr,pat,nn,n)){
            v.push_back(dict[i]);
        }
    }
    return v;
}
#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE        1000000
#define pb              push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std ;
typedef long long int ll;
vector<ll> p;
long long int prime[MAX_SIZE];
void Sieve(){
    p.pb(2);
    memset(prime,0,sizeof(prime)/sizeof(prime[0]));
    for(ll i=2;i<MAX_SIZE;i++){
        prime[i] = 1 ;
    }
    for(ll i=4;i<MAX_SIZE;i+=2){
        prime[i] = 0;
    }
    for(ll i=3;i<MAX_SIZE;i++){
        if(prime[i]==1){
            p.pb(i);
        for(ll j=i*i;j<MAX_SIZE;j+=i){
            prime[j] = 0;
        }
    }
  }
  return ;
}
ll factorize( ll n ){
    ll ans = 0;
    ll i =0;
    ll p1 = p[i];
    while(p1*p1 <= n){
        if(n % p1 == 0){
            ans++;
            while( n % p1 == 0 ){
                n = n / p1 ;
            }
        }
        i++;
        p1=p[i];
    }
    if(n>1) ans++;
    return ans;
}
int main(){
    fast;
    Sieve();
    vector<int> V ;
    for(int i=0 ; i<=100000 ; i++){
        V.pb(factorize(i));
    }
    int t;
    cin>>t;
    while(t--){
        ll a , b , k , count =0;
        cin>>a>>b>>k;
        for(int i=a ; i<=b ; i++){
            if(V[i]==k){
                count++;
            }
        }
        cout<<count<<endl;

    }
    
}

*/