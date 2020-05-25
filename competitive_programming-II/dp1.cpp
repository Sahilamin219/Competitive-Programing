#include<iostream>
#include<algorithm>
#include<cstring>
#define ll long long int
using namespace std;
ll dp[50][10000];
int min(int x, int y, int z) 
{ 
   if (x < y) 
      return (x < z)? x : z; 
   else
      return (y < z)? y : z; 
} 
ll fun(ll diff[],ll index,ll sum){
    
    if(dp[index][sum]!=-2){
        return dp[index][sum];
    }
    if(sum==0){
        dp[index][sum]=1;
        return 1;
    }
    if(index==0){
        if(diff[index]>=sum){
            dp[index][sum]=1;
            return 1;
        }
        dp[index][sum]=-1;
        return -1;
    }
    
    ll count=0;
    
    for(int i=0;i<=diff[index];i++){
        if(sum-i>=0){
            if(fun(diff,index-1,sum-i)!=-1)
            count=(count+fun(diff,index-1,sum-i)+1000000007)%1000000007;
        }
    }
    dp[index][sum]=count;
    dp[index][sum]=(dp[index][sum])%1000000007;
return count;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k,n;
        cin>>k>>n;
        ll a[k],b[k];
        ll diff[k];
        for(int i=0;i<k;i++){
            cin>>a[i]>>b[i];
            n-=a[i];
            diff[i]=b[i]-a[i];
        }
       for(int i=0;i<50;i++){
           for(int j=0;j<10000;j++){
               dp[i][j]=-2;
           }
       }
        cout<<fun(diff,k-1,n)<<"\n";
    }
}
