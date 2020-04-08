#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <utility> 
#define fori(i,m,n) for(int i=m;i<n;i++)
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
// 	vector< pair <int,int> > v;
// 	unordered_map <int,int> m;
    int s=n;
    vector <int> a(2001,0);
    vector <int> b(2001,0);
    vector <int> v(2001,0);
    int c=0;
	while(n--){
	    int v1,v2;
	    cin>>v1>>v2;
	    int x=v1+v2;
	    int y=v1-v2;
	   // v.push_back(make_pair(v1,v2));
	   // m.insert(pair<int,int>(v1+v2,v1-v2));
	   // v.push_back(make_pair(x,y));
	   // cout<<x<<" "<<y<<" ";
	   if(v1==v2){
	       c++;
	   }
	   else if(v1-v2>0){
	       a[v1-v2]++;
	   }
	   else{// if(v1-v2<0){
	       b[v2-v1]++;
	   }
	   v[v1+v2]++;
	}
	int count=0;
// 	unordered_map<int, int>::iterator itr; 
// 	for (itr = m.begin(); itr != m.end(); ++itr) { 
//         cout << '\t' << itr->first 
//              << '\t' << itr->second << '\n'; 
//     } 
//     cout << endl; 
// 	unordered_map<int,int>::iterator it1;
// 	for(it1=m.begin();it1!=m.end();it1++){
// 	    unordered_map<int,int>::iterator it2;
// 	    for(it2=m.begin();it2!=m.end();it2++){
// 	        if(it1->first==it2->first or it1->second==it2->second){
// 	            if(it1!=it2){
// 	                count++;
// 	            }
// 	        }
// 	    }
// 	}
    n=s;
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<" ";
    // }
    if(c>=2){
        count+=(c)*(c-1)/2;
    }
    fori(i,0,2001){
        if(a[i]>=2){
            count+=(a[i])*(a[i]-1)/2;
        }
        if(b[i]>=2){
            count+=(b[i])*(b[i-1])/2;
        }
        if(v[i]>=2){
            count+=(v[i])*(v[i]-1)/2;
        }
    }
    // count/=2;
	cout<<count<<"\n";
	return 0;
}