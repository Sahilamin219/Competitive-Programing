#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   if (x < y) return (x < z)? x : z; 
	else return (y < z)? y : z; }
vector <pair<long long int,long long int>> v;
//natya and aunty
// void solve(){
// 	long long int n;cin>>n;
// 	f(i,0,n){
// 		long long int a,b;
// 		cin>>a>>b;
// 		v.push_back(make_pair(a,b));
// 	}
// 	long long int ans=1000000007;
// 	f(i,0,n){
// 		long long int mini=v[i].first;
// 		f(j,0,n){
// 			if(i!=j){
// 				long long int k=0;
// 				if(j!=0){
// 					if(v[j].first-v[j-1].second>0){
// 						k=v[j].first-v[j-1].second;
// 					}
// 				}
// 				if(v[j].first-v[n-1].second>0 and j==0){
// 					k=v[j].first-v[n-1].second;
// 				}
// 				mini+=min(v[j].first,k);
// 			}
// 		}
// 		if(mini<ans){
// 			ans=mini;
// 		}
// 	}
// 	cout<<ans<<"\n";
// }
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b){
	if(a.second==b.second){
		return (a.first > b.first);
	}
	return a.second>b.second;
}
// void solve(){
// 	ll n;cin>>n;
// 	f(i,0,n){
// 		ll a,b;
// 		cin>>a>>b;
// 		v.pb(mkp(a,b));
// 	}
// 	sort(v.begin(), v.end(), sortbysec);
// 	int count=1;
// 	int i=0;
// 	int score=0;
// 	f(i,0,n)cout<<v[i].first<<" "<<v[i].second<<endl;	
// 	while(count-- and i<n){
// 		score+=v[i].first;
// 		count+=v[i].second;
// 		i++;
// 	}
// 	cout<<score<<endl;
// }
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    fast
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 and y1==y2){
        cout<<-1;
    }
    else if(x1==x2){
        int d=abs(y2-y1);
        cout<<x1+d<<" "<<y1<<" "<<x1+d<<" "<<y2; 
    }
    else if(y1==y2){
        int d=abs(x2-x1);
        cout<<y1+d<<" "<<x2<<" "<<y1+d<<" "<<x1; 
    }
    else{
        if(abs(y2-y1)==abs(x2-x1)){
            int d=abs(y2-y1);
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }
        else{
            cout<<-1;
        }
    }
    // int n,k;
    // cin>>n>>k;
    // string s;
    // cin>>s;
    // int flag=1;
    // for(int i=0;i<=n-k-1;i++){
    // 	if(s[i]!=s[i+k]){
    // 		flag=0;
    // 		break;
    // 	}
    // }
    // if(flag){
    // 	cout<<n<<"\n";
    // 	cout<<s<<"\n";
    // }
    // else{
    // 	int x=n-k-1;
    // 	while(flag==0){
    // 		string str=s;
	   //  	for(int i=0;i<=n-k-1;i++){
	   //  		if(s[i]!=s[i+k]){
	   //  			s[i+k]=s[i];
	   //  		}
	   //  	}
	   //  	for(int i=0;i<=n-k-1;i++){
	   //  		if(s[i]!=s[i+k]){
	   //  			break;
	   //  		}
	   //  		else if(i==n-k-1){
	   //  			// cout<<s<<"\n";
	   //  			flag=1;
	   //  			break;
	   //  		}
    // 		}
    // 		if(flag){
    // 			// cout<<s<<"\n";
    // 			for(int i=0;i<n;i++){
    // 				if(s[i]-'0'>str[i]-'0'){
    // 					break;
    // 				}
    // 				else if(s[i]-'0'==str[i]-'0'){
    // 					continue;
    // 				}
    // 				else{
    // 					string let="";
    // 					let+=str[x];
    // 					int temp=stoi(let);
    // 					temp++;
    // 					// cout<<"its "<<temp<<" ";
    // 					let=to_string(temp);
    // 					s[x]=let[0];
    // 					x--;
    // 					flag=0;
    // 					break;
    // 				}
    // 			}
    // 		}
	   //  }
	   //  cout<<n<<"\n";
	   //  cout<<s<<"\n";
    // }
    return 0;
}
// #include<bits/stdc++.h>
// #define M 1000000007
// #define ll long long
// #define F(i, a, b) for(i=a; i<=b; i++)
// using namespace std;
// void solve()
// {
//     ll n, k, i,j, sum, tot;
//     cin >> k >> n;
//     ll p[k+1], q[k+1];
//     for(i=1; i<=k; i++){
//         cin >> p[i] >> q[i]; 
//     }
//     ll x[1001][k+1];
//     F(i, 0, 1000){
//         x[i][1]=0;
//     }
//     F(i, p[1], q[1]){
//         x[i][1]=1;
//     }
//     F(i, 2, k){
//         for(sum=1000; sum>=0; sum--){
//             tot=0;
//             F(j, p[i], mini(q[i], sum)){
//                 if(sum<j){
//                     continue;
//                 }
//                 tot = (tot+x[sum-j][i-1])%M;
//             }
//             x[sum][i]=(tot%M);
//         }
//     }
//     cout << (x[n][k])%M << "\n";
// }
// signed main()
// {
//     int _t;cin >> _t; while(_t--)
//     solve();
//     return 0;
// }