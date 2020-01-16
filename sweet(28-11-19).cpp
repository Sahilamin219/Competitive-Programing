// sweeet problem codeforces
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    long long int r,g,b;
    cin>>r>>g>>b;
    vector<int> arr;
    arr.push_back(r);
    arr.push_back(g);
    arr.push_back(b);
    long long int ans=0;
    sort(arr.begin(), arr.end()); 
    int x = arr[0];//min
    int y = arr[2];//max
    int z = arr[1];//medium
    if(x==y && y==z){
        if(x==1){
            ans=1;
        }
        else{
            ans=x+1;
        }
    }
    else if(y==z && z%2==0){
        while(x--){
            int k=0;
            if(k==0){
                y--;
                k=1;
                ans++;
            }
            else{
                z--;
                k=0;
                ans++;
            }
        }
        if(z==1){
            ans++;
        }
        else{
            ans=z+1;
        }
    }
    else if(y==z && z%2==1){
        while(x>0){
            x--;
            int k=0;
            if(k==0){
                y--;
                k=1;
                ans++;
            }
            else{
                z--;
                k=0;
                ans++;
            }
        }
        while( y>0 && z>0){
            y--;
            z--;
            ans++;
        }
    }
    else if( x==z && x!=1){
        while(y>z && x>0){
            y--;
            x--;
        }
        if(x>0){
            z=z-x;
        }
        ans=x;
        while( y>0 && z>0){
            y--;
            z--;
            ans++;
        }
    }
    else if(y>z){
        while(x--){
            int k=0;
            if(k==0){
                y--;
                k=1;
                ans++;
            }
            else{
                z--;
                k=0;
                ans++;
            }
        }
        while( y>0 && z>0){
            y--;
            z--;
            ans++;
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}
