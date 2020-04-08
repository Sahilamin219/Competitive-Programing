#include<bits/stdc++.h>
// #define ll long long int
// #define pb push_back
// #define endl "\n"
// #define F first
// #define S second
// #define mp map<ll,ll>
// #define vc vector<ll>
// #define MAX  *max_element
// #define MIN  *min_element
// #define FLUSH fflush(stdout)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main(){
    FAST;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> v;
		int flag=1;
		int count=0;
		for(int i=0;i<n;i++){
		    int value;
		    cin>>value;
		    v.push_back(value);
		    if(value%2==0){
		        count++;
		        flag=0;
		    }
		}
		int k=0;
		if(count==n){
		    k=1;
		}
		if(k==1){
		    cout<<"NO"<<endl;
		}
		else if((v.size())%2==0){
		    if(flag==1){
		        cout<<"NO"<<endl;  
		    }
		    else{
		        cout<<"YES"<<endl;
		    }
		}
		else if((v.size())%2==1){
		    if(flag==1){
		        cout<<"YES"<<endl;  
		    }
		    else{
		        cout<<"YES"<<endl;
		    }
		}
// 		cout<<(n*m)+c<<endl;
	}
	return 0;
}


// -----------FOOD BUYING----------


#include<bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int give(int n, int sum){
    if(n==10){
        sum+=1;
        return sum;
    }
    ll rem=n/2;
    if(n%2==0){
        ll k=(n/10);
        n=n/2;
        n+=n/10;
        sum+=(n/10);
        if(k>0){
            sum=give(n,sum);
        }
	}
	else{
	   if(((n+1)/2)%10!=0){
	       ll k=(n/10);
	       n=n/2;
	       sum+=(n/10);
	       if(k>0){
	           sum=give(n,sum);
	       }
	   }
	   ll k=(n/10);
        n=n/2;
        n+=((n+1)/10);
        sum+=((n+1)/10);
        if(k>0){
            sum=give(n,sum);
        }
	}
    return sum;
} 
int main(){
    FAST;
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=n;
		sum=give(n,sum);
		cout<<sum<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int give(int n, int sum){
    if(n==10){
        sum+=1;
        return sum;
    }
    ll rem=n/2;
    if(n%2==0){
	    while(rem>0){
	        sum+=(rem/10);
	        rem=rem/2;
	        if(n==10){
                sum+=1;
                return sum;
            }
	    }
	}
	else{
	    rem+=1;
	    while(rem>0){
	        if(((rem+1)/2)%10==0){
	            rem=(rem)/2;
	            sum+=((rem+1)/10);      
	        }
	        else{
    	        sum+=(rem/10);
    	        rem=rem/2;
    	        if(n==10){
                    sum+=1;
                    return sum;
                }
	        }
	    }
	}
    return sum;
} 
int main(){
    FAST;
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=n;
		sum=give(n,sum);
		cout<<sum<<endl;
	}
	return 0;
}



// -----codefucker------sahilamin219---------
#include<bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int give(ll n, ll sum){
    if(n<=10){
        sum+=1;
        return sum;
    }
    ll rem;
    rem=n/10;
    if((rem+1)%10==0){
        sum=give(rem+1,sum);
    }
    sum+=rem;
    if(rem>0){
        if((rem+1)%10==0){
            sum=give(rem+1,sum);
        }
        sum=give(rem,sum);
    }
    return sum;
} 
int main(){
    FAST;
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=n;
		if(n<10){
		    cout<<sum<<endl;
		}
		else {
		    sum=give(n,sum);
		    cout<<sum<<endl;
		}
	}
	return 0;
}
// -----------FUCK THIS QUESTION-----