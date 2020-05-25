#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	vector<int> v;
    	map<int,int> m;
    	int val;
    	f(i,0,n){
    		cin>>val;
    		v.push_back(val);
    	}
    	int prev=v[0];
    	int flag=0;
    	f(i,0,n){
    		f(j,i+1,n){
    			if(v[j]==v[i] and v[j]!=v[j-1]){
    				flag=1;
    				break;
    			}
    		}
    	}
    	// f(i,1,n){
    	// 	val=v[i];
    	// 	m[v[i]]++;
   //  		if(prev==val){
   //  			continue;
   //  		}
   //  		else{
   //  			int k=m[v[i]];
   //  			cout<<"Kis: "<<k<<"\n";
   //  			auto itr = m.find(k);
   //  			if( itr != m.end()){
   //  				flag=1;cout<< itr->first<<'\t'<< itr->second << '\n'; 
   //  			}
			// }
   //  		prev=val;
    	// }
    	// map<int,greater<int>> mp;
    	// for (auto itr = m.begin(); itr != m.end(); itr++) 
     //    cout << itr->first<< '\t' << itr->second << '\n'; 
    	if(flag){
    		cout<<"NO"<<endl;
    	}
    	else{
    		// cout<<"HERE"<<"\n";
    		f(i,0,n)m[v[i]]++;
    		int myflag=1;
    		map<int,int>:: iterator it=m.begin();
    		map<int,int>:: iterator next=m.begin();
    		for(it=m.begin();it!=m.end();it++){
    			for(next=m.begin();next!=m.end();next++){
    				if(it->second!=next->second)continue;
	    			else if(it!=next){
	    				// cout << it->first<< '\t' << it->second << '\n'; 
	    				// cout << next->first<< '\t' << next->second << '\n'; 
	    				cout<<"NO"<<endl;myflag=0;
	    				break;
	    			}
	    		}
	    		if(myflag==0)break;
    		}
    		if(myflag)cout<<"YES"<<endl;
    	}
    }
    return 0;
}