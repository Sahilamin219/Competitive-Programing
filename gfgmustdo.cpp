/*AW: error: ‘begin’ was not declared in this scope in vertexarray
« Reply #1 on: April 14, 2015, 11:02:04 am »
It's not an error. VertexArray has not been designed as a standard container.
At best you use std::vector<sf::Vertex> directly, since VertexArray is nothing else but a thin wrapper around it.
Otherwise you can still declare begin() and end() for the VertexArray as free functions.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  int t;
  cin>>t;
  while(t--){
      int ans=0;
      stack <int> p;
      stack <int> d;
      ll n;
      cin>>n;
      for(int i=0;i<n;i++){
          int x;
          cin>>x;
          p.push(x);
          int y;
          cin>>y;
          d.push(y);
    }
    int c=0;
    int w=-1;
    int k=-1;
   for(int i=0;i<n;i++){
       if(k>0){
           w=1;
           break;
       }
        while(c>=0){
            ans++;
            int z=ans-1;
            while(z--){
                p.pop();
                d.pop();
            }
            int a=p.top();
            p.pop();
            c=+a;
            int b=d.top();
            d.pop();
            c=-b;
        }
        if(c>0){
            k=1;
        }
        else{
            k=-1;
        }
    }
    if(w=1){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
  }
  return 0;
}
/*Function to count subset with even sum
* arr : array input
* N : size of array*/
int countSumSubsets(int arr[], int N){////method:1
    int count=0,limit=pow(2,N);
    for(int i=1;i<limit;i++){
        int t=i,sum=0;
        for(int j=0;j<N;j++){
            sum+=arr[j]*(t&1);
            t>>=1;
        }
        if((sum&1)==0)
            count++;
    }
    return count;
    
}
////method:2
int countt=0;
void func(int arr[],int cur,int n,int taken,int sum)
{
    if(cur>n)
        return ;
    func(arr,cur+1,n,0,sum);
    if((sum+arr[cur])%2==0)
        countt++;
        func(arr,cur+1,n,1,sum+arr[cur]);
}
int countSumSubsets(int arr[], int N){
    countt=0;
    func(arr,0,N-1,0,0);
    return countt;
}
////method:3
void myfun(int arr[], int i, int n, int sum, int &ans){
    if (i==n){
        if (sum && (sum%2 == 0))
            ans++;
            return;
    }
    myfun(arr,i+1,n,sum+arr[i],ans);//include current element in subset
    myfun(arr,i+1,n, sum, ans);//don`t include current element in subset
}
int countSumSubsets(int arr[], int N){
    int ans =0;
    myfun(arr,0,N,0,ans);
    return ans;
}
{
////////another one
void checkString(string s);
//Position this line where user code will be pasted.
int main() {
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
  {
      
      string s;
      getline(cin,s);
      checkString(s);
     
  }
  return 0;
}
}
bool isvowel(char it)
{
    switch(it)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
            break;
        default:
            return false;
    }
}
void checkString(string s)
{
    int v=0;
    int c=0;
    
    std::string::iterator i;
    
    for(i=s.begin(); i!=s.end(); i++)
    {
        if(isvowel(*i))
            v++;
        else
            c++;
    }
/////another one
int countChars(string s1, string s2){
    
    // Your code here
    int chr[26]={0};
    
    for(int i=0;i<s1.length();i++){
        chr[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        chr[s2[i]-'a']--;
        
    }
    
    long long int ans=0;
    for(int i=0;i<26;i++){
        ans+=abs(chr[i]);
    }
    
    return ans;
    
}
