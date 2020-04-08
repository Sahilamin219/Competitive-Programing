#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    fast;
    int n;
    cin>>n;
    vector <int> a,b,c,d;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        if(val%4==1){
            a.push_back(val);
        }
        else if(val%4==2){
            b.push_back(val);
        }
        else if(val%4==3){
            c.push_back(val);
        }
        else{
            d.push_back(val);
        }
    }
    sort(a.begin(), a.end());
    queue <int> v;
    for(int i=0;i<n;i++){
        v.push(a[i]);
    }
    int count=0;
    int capacity=0;
    while(!v.empty()){
        if(v.front()>4){
            v.front()-=4;
            count++;
        }
        else if(v.front()==4){
            v.pop();
            count++;
        }
        else{
            while(capacity<=4){
                int k=v.front();
                capacity+=v.front();
                if(capacity>4){
                    capacity-=k;
                    break;
                }
                else{
                    v.pop();
                }
            }
            count++;
            capacity=0;
        }
    }
    cout<<count;
    return 0;
}
