#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int, int> pis; 
typedef long long ll;
int main() {
// 	cout<<"GfG!";
    int n;
    cin>>n;
	set <int> s;
	s.insert(3);
	s.insert(2);
	vector <pair<ll,ll>> v;
	for(int i=0;i<n;i++){
	    int va;
	    cin>>va;
	    v.push_back(va);
	}
// 	int i=0;
    int m=pow(n, 0.5);
    while(){
    	for(auto x: s){
    	    cout<< 10/x << "\n";
    	   // i++;
            s.erase(x);
    	}
    	for(auto x: s){
    	    cout<< x;
    	}
    }
	return 0;
}
