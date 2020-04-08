#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define endl "\n"
#define F first
#define S second

#define mp map<ll,ll>
#define vc vector<ll>

#define MAX  *max_element
#define MIN  *min_element
//max xor btw range of two numbers..
#define max_XOR(a,b) (1 << int(log2(a ^ b) + 1)) - 1
#define c_ones(number) __builtin_popcountll(number)
#define flip_bits(number) static_cast<unsigned>(~number)

#define all(X) X.begin(),X.end()
#define rep(i,n) for(ll i=0;i<n;i++)
#define loop(itr,n) for(itr=n.begin();itr!=n.end();itr++)

#define FLUSH fflush(stdout)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

typedef pair<int, int> pairs; 
 
int main(){
    FAST;
	int n;
	cin>>n;
	vc vec;
	int a[n]={0};
	rep(i,n){
	    ll val;
	    cin>>val;
	    std::vector<ll>::iterator it;  
	    it = std::find (vec.begin(), vec.end(), val); 
        if (it != vec.end()) 
        { 
            a[i]=1;
        }
	}
	rep(i,n){
	    cout<<vec[i]<<" ";
	}cout<<endl;
    set<pairs> s;
	for(ll i=0;i<n;i++){
	    int flag=1;
	    for(ll j=i+1;j<n;j++){
	        if(a[i]==0){
	           if(vec[i]==vec[j]){
	               if(flag==1){
	                   flag=0;
	                   //cout<<vec[i]<<vec[j]<<" ";
	                   pairs x = make_pair(vec[i], vec[j]); 
	                   s.insert(x);
	               }
	           }
	           else{
	               //cout<<vec[i]<<vec[j]<<" ";
	               pairs x = make_pair(vec[i], vec[j]); 
	               s.insert(x);
	           }
	           //cout<<vec[i]<<vec[j]<<" ";
	           //pairs x = make_pair(vec[i], vec[j]); 
	           //s.insert(x);
	        }
	    }
	}
    cout<<s.size()<<endl;
	return 0;
}
