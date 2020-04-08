#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
        long long int n,s,k;
        cin>>n>>s>>k;
        vector <int> f(n,1);
        for(int i=0;i<k;i++){
            int value;
            cin>>value;
            f.push_back(value);
        }
        for (int i=0; i<=k; i++) {
            if (s-i >= 1 && find(f.begin(), f.end(), s-i) == f.end()) {
                cout << i << endl; 
                break;
            }
            if (s+i <= n && find(f.begin(), f.end(), s+i) == f.end()) {
                cout << i << endl;
                break;
            }
        }
    }
	return 0;
}