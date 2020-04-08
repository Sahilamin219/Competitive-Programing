#include<iostream>
#include <string>
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define M 1000000007
#define inarr(arr,n); for(ll i=0;i<n;i++) cin >> arr[i];
#define outarr(arr,n); for(ll i=0;i<n;i++) cout<<arr[i]<<"";
using namespace std;

int main(){
  ll t,a,b;
  cin>>t;
  while(t--){
    cin>>a>>b;
    // cout<<(a^b)<<endl;
    ll x = log2(a);
    ll y= log2(b);
    // cout<<"%%"<<y<<endl;
    ll m = max(x,y);
    // cout<<"$"<<m<<endl;
    ll n=0;
    ll f=b;
    // cout<<(f>>1)<<endl;
    // f = f>>1;
    // cout<<(f>>1)<<endl;
    // f = f>>1;
    // cout<<(f>>1)<<endl;
    ll s;
    ll h = a^b;
    ll st = 0;
    // cout<<"g: "<<h<<endl;
    for(int i=1;i<m+1;i++){
      s = f%2;
      f = (f>>1);
      // cout<<"f: "<<f<<endl;
      if(s==1){
      f= f+pow(2,m);
      }
      // else{
      //   n=f;
      // }
      // cout<<"f: "<<f<<endl;
      ll g = a^f;
      if(g>h){
        h=g;
        st=i;
      }
      // cout<<"g: "<<g<<endl;
      // else{
      //
      // }
      // cout<<(a^n)<<endl;
    }
    cout<<st<<" "<<h<<endl;
  }
}

