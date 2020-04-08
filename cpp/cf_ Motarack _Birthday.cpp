#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
#define pow2(n) (1 << (n))
using namespace std;
typedef long long ll;
int main(){
    FAST;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> v;
        for(ll i=0;i<n;i++){
            ll val;
            cin>>val;
            v.push_back(val);
        }
        ll d=0;ll elem=0;
        for(ll i=0;i<n-1;i++){
            ll temp_dif=0;
            if(v[i]==v[i+1]){
                if(v[i]!=-1){
                    continue;
                }
            }
            else{
                if(v[i]!=-1){
                    if(v[i+1]!=-1){
                        temp_dif=abs(v[i+1]-v[i]);
                    }
                }
                else if(v[i+1]==-1){
                    ll kk=i+1;
                    while(v[kk]==-1){
                        kk++;
                    }
                    temp_dif=abs(v[kk]-v[i+1]);
                    if(temp_dif%2==0){
                        temp_dif=temp_dif/2;
                    }
                    else{
                        temp_dif=(temp_dif+1)/2;
                    }
                    for(ll j=0;j<n;j++){
                        if(v[j]==-1){
                            v[j]=elem;
                        }
                    }
                }
                else if(v[i]==-1){
                    elem=v[i+1];
                    // ll k=i+1;
                    // while(v[k]==-1){
                    //     k++;
                    // }
                    // temp_dif=abs(v[k]-v[i+1]);
                    // if(temp_dif%2==0){
                    //     temp_dif=temp_dif/2;
                    // }
                    // else{
                    //     temp_dif=(temp_dif+1)/2;
                    // }
                    // elem=min(v[i],v[k])+temp_dif;
                    // for(ll j=0;j<n;j++){
                    //     if(v[j]==-1){
                    //         v[j]=elem;
                    //     }
                    // }
                }
            }
            d=max(d,temp_dif);
        }
        cout<<d<<" "<<elem<<endl;
    }
    return 0;
}


Let's take all non missing elements that are adjacent to at least one missing element, we need to find a value k that minimises the maximum absolute difference between k and these values. The best k

is equal to (minimum value + maximum value) / 2.

Then we find the maximum absolute difference between all adjacent pairs.

Complexity is O(n)
.

#include <bits/stdc++.h>
using namespace std;
#define oo 1000000010
#define mod 1000000007
const int N = 300010;
int n , arr[N] ; 

void solve(){
    int mn = oo , mx = -oo;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++){
		if(i > 0 && arr[i] == -1 && arr[i - 1] != -1)
			mn = min(mn , arr[i - 1]) , mx = max(mx , arr[i - 1]);
		if(i < n - 1 && arr[i] == - 1 && arr[i + 1] != -1)
			mn = min(mn , arr[i + 1]) , mx = max(mx , arr[i + 1]);
	}
	int res = (mx + mn) / 2;
	int ans = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == -1)
			arr[i] = res;
		if(i)
			ans = max(ans,abs(arr[i] - arr[i - 1]));
	}
	printf("%d %d\n",ans,res);
}


int main(){
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
