#include <iostream>
#include <stack>
#include <queue>
#include<string>

using namespace std;

int newArr[500];

int* func(int arr[], int size){
	queue<int> q;
	q.push(arr[0]);

	int p = 0;
	while(queue.empty()){
		int i=p+1;
		while(i<size){
			if (arr[i] > arr[p]){
				q.pop();
				newArr[p] = arr[p];
				p++;
			}
		}
		q.push(arr[i]);
	}
	newArr[p] = -1;
	return &newArr[0];
}

int main(){
	int size = 10;
	int arr[] {4,2,3,8,9,0};
	int *p;
	p = func(arr, 10);
	for (int j=0; j<size; j++)
		cout<<*(p+j);
	return 0;
}



//decemer cookoff challenge-beginner level - change it

#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define debug(x) cout<<"x :"<<x<<endl;
#define case(t,ans) cout<<"Case #"<<t<<": "<<ans<<endl;
using namespace std;

void solve();

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    
    return 0;
}

void solve()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        int store[100];
       memset(store,0,sizeof(store));
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            store[arr[i]-1]++;
        }
        
        int max=0;
        for(int i=0;i<100;i++)
        {
            if(store[i]>max)
            {
                max=store[i];
            }
        }
        
        cout<<n-max<<endl;
     
    }
}
