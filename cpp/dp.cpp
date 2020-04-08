#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod =1e9+7;
#define ios ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0)
ll n , k , d;
ll dp[123][2];
ll solve(ll sum , ll chk)
{
      if(sum == n and chk ==1) return 1;
      if(sum == n and chk ==0) return 0;
      if(sum > n) return 0;
      ll ans = 0LL ;
      if(dp[sum][chk]!=-1){
            return dp[sum][chk];
      }
      for(ll i=1;i<=k;++i){
            if(i<d and chk==1){
                  ans = (ans + solve(sum+i,1LL))%mod;
            }
            else if(i<d and chk==0){
                  ans = (ans + solve(sum+i,0LL))%mod;
            }
            else if(i>=d){
                  ans = (ans + solve(sum+i,1LL))%mod;
            }
      }
      dp[sum][chk] = ans%mod;
      return ans%mod ;
}

int main()
{
      #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      ios;
      memset(dp , -1 ,sizeof dp);
      cin >> n >> k >> d;
      ll res = solve(0,0);
      cout<<res<<endl;
      cout.flush();
      return 0;
}