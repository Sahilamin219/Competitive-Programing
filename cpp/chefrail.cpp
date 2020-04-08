#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
#define pow2(n) (1 << (n))
using namespace std;
typedef long long ll;
int Triplets(long long a, long long b, long long c) 
{ 
	if (a <= 0 || b <= 0 || c <= 0) {
	    
	}
// 		return 0; 

	vector<long long> vec{ a, b, c }; 
	sort(vec.begin(), vec.end()); 

	// Re-initialize a, b, c in ascending order 
	a = vec[0], b = vec[1], c = vec[2]; 

	// Check validation of sides of triangle 
	if (a + b <= c) 
		return 0; 

	long long p1 = a, p2 = c - b; 

	// Reduce fraction to simplified form 
	long long div = __gcd(p1, p2); 
	p1 /= div, p2 /= div;

	long long q1 = c + b, q2 = a; 

	// Reduce fraction to simplified form 
	div = __gcd(q1, q2); 
	q1 /= div, q2 /= div; 

	// If fraction are equal return 
	// 'true' else 'false' 
	cout<<"fuck"<<endl;
	return (p1 == q1 && p2 == q2); 
} 

// Function that will return 'Yes' or 'No' 
// according to the correction of triplets 
int checkTriplet(long long a, long long b, long long c) 
{ 
	if (Triplets(a, b, c)) 
		return 1; 
	else
		return 0; 
} 

int main(){
    FAST;
    ll t;
    cin>>t;
    while(t--){
        ll count=0;
        ll n,m;
        cin>>n>>m;
        vector <ll> all;
        vector <ll> xc;
        vector <ll> yc;
        for(int i=0;i<n;i++){
            int values;
            cin>>values;
            xc.push_back(values);
            all.push_back(values);
        }
        for(int i=0;i<m;i++){
            int values;
            cin>>values;
            yc.push_back(values);
            all.push_back(values);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<(m+n);k++){
                    long long a,b,c;
                    a=xc[i];
                    b=yc[j];
                    c=all[k];
	                count+=checkTriplet(a, b, c);
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
