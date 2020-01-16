#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >>t;
  int count=1;
  while(t--){
      int n;
      int v[1000];
      cin>>n;
      for(int i=0;i<n;i++){
              cin >> v[i];
          }
     // cout<<n<<endl;
      if(n !=1){
          int j=0;
          while(j<n-1){
              j++;
              int k =0;
              if(v[j+1]>v[j]){
                  k = v[j+1] - v[j];
                  if(k==1){
                      count=2;
                  }
                  break;
              }
              else if(v[j]>v[j+1]){
                  k = v[j] - v[j+1];
                  if(k==1){
                      count=2;
                  }
                  break;
              }
              else{
                  k = 1;
                  if(k==1){
                      count=2;
                  }
                  break;
              }
          }
      }
      cout<<count<<endl;
  }
  return 0;
}


#include <iostream>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<n;i++){
          if(i!=n){
              if(a[i+1]>a[i]){
                  cout<<-1<<" ";
                  }
              else if(a[i+1]<a[i]){
                  cout<<a[i+1]<<" ";
                  }
              else{
                  continue;
                  }
          }
          if(i == n){
              cout<<-1<<endl;
          }
      }
      
  }
  return 0;
}

// ----------------------------------- mug it for fast codeing -----------------
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
_stack *a = new _stack();


// J. Just Arrange the Icons


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);    
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector <int> v(n, 0);
      for(auto x: v){
          int y;
          cin>>y;
          v[x]=y;
      }
      int m=0;//number of screens
      //counting number of times each elment is getting repeated
      sort(v.begin(), v.end());
      vector <int> a;
      for(auto i: v){
          if(v[i]!=v[i+1]){
              a.push_back(i);
          }
      }
      //for pushing last icon's repetation
      int sum=accumulate(v.begin(),v.end(),0);
      int temp = n-sum;
      a.push_back(temp);
      sort(a.begin(), a.end());//to optimize for loop
      bool check;
      check=0;
      int store=0;
      int s=sizeof(a)/sizeof(a[0]);
      for (int i = a[s];i>0; i--){
         for (int j=i-1;j>0;j--){
             if(a[i]-a[j] == 1 || a[i]-a[j] == 0){
                 if(j==0){
                     check=1;
                     store=i;//storing size of screen
                 }
                 continue;
             }
             else{
                 break;
             }
        }
     }
     // to count number of screens
     int ans=0;
     for(auto x: a){
         if(a[x]<=0){
             ans++;
         }
         else{
             ans = ans + (x+1)/ans;
         }
     }
     m=ans;
     cout<<m<<""<<endl;
  }
  return 0;
}
// CPP code to find a digit in a number 
// using std::tostring 
#include <bits/stdc++.h> 

// Driver code 
int main() 
{ 

  // Converting number to string 
  std::string str = std::to_string(9954); 

  // Finding 5 in the number 
  std::cout << "5 is at position " << str.find('5') + 1; 
} 
