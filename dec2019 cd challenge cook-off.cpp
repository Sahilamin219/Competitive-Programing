dec2019 cd challenge cook-off
--------------------------- CHANGE IT -------------------------
https://ide.geeksforgeeks.org/9EnswTSreQ
#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        int store=0;
        vector <int> v;
        vector <int> arr;
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            v.push_back(value);
        }
        if(*max_element(v.begin(), v.end())==*min_element(v.begin(), v.end())){
            count=0;
        }
        else if(v.size()==1){
            count=0;
        }
        else if(v.size()==2){
            if(v[0]==v[1]){
                count=0;
            }
            else{
                count=1;
            }
        }
        else{
            int r[v.size()];
            int l[v.size()];
            for(int i=0;i<n;i++){
                if(i>0 && i<v.size()){
                    r[i] = v[i+1];
                    l[i] = v[i-1];
                }
                else if(i>0){
                    l[i] = v[i-1];
                }
                else if(i<v.size()){
                    r[i] = v[i+1];
                }
            }
            int fake=0;
            for(int j=1;j<n-1;j++){
                if(l[j]==r[j]){
                    arr.push_back(l[j]);
                    // int flag=0;
                    // for(int i=0;i<arr.size();i++){
                    //     if(l[j]==arr[i]){
                    //         int flag=0;
                    //         break;
                    //     }
                    //     else{
                    //         flag=1;
                    //         continue;
                    //     }
                    // }
                    // if(flag==1){
                    //     arr.push_back(l[j]);
                    // }
                }
            }
            if(arr.size()>1){
                sort(v.begin(), v.end());
                vector <int> a;
                a=arr;
                for(int i=0;i<arr.size();i++){
                    a[i]=0;
                }
                for(int i=0;i<arr.size();i++){
                    a.push_back(0);
                }
                for(int i=0;i<v.size();i++){
                    for(int j=i+1;j<v.size();j++){
                        if(v[j]==v[i]){
                            // cout<<"yes";
                            a[i]=1+a[i];
                        }
                    }
                }
                // for(auto x: a){
                //     cout<<a[x];
                // }
                // cout<<endl;
                for(int i=0;i<a.size();i++){
                    for(int j=0;j<a.size();j++){
                        if(a[j]==a[i]){
                            if(a[j]>0){
                                // cout<<"yes";
                                fake+=1;
                            }
                        }
                    }
                }
            }
            for(int i=0;i<arr.size();i++){
                for(int k=0;k<n;k++){
                    if(arr[i]==v[k]){
                        store++;
                    }
                }
            }
            fake=fake/arr.size();
            // cout<<"fakeis"<<fake;
            count=v.size()-store+fake;
        }
        cout<<count<<endl;
    }
    return 0;
}

solution
#include<bits/stdc++.h>
using namespace std;


int freq(int arr[],int n)
{   
    int i,a[n][2],k=0,j;
    vector<bool>visited(n,false);
    for(i=0;i<n;i++)
    {
        if(visited[i]==true)
        continue;
        int cnt=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
                visited[j]=true;
                
            }
        }
        a[k][0]=arr[i];
        a[k][1]=cnt;
        k++;
        
    }
    int val=a[0][0];
    int max=a[0][1];
    for(i=0;i<k;i++)
    {
        if(max<a[i][1])
        {
            max=a[i][1];
            val=a[i][0];
        }
    }
    return max;
    
    
    
}









int main()
{
    int i=0,j,n,t,m;
    //cout<<"ENTER TESTCASES";
    cin>>t;
    int b[t];
    while(i<t)
    {
        //cout<<"ENTER ARRAY SIZE";
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        cin>>a[j];
        m=freq(a,n);
        b[i]=n-m;
        //cout<<n-m;
        i++;
    }
    
    for(i=0;i<t;i++)
    cout<<b[i]<<endl;
    return 0;

}