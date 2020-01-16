#include <bits/stdc++.h>
using namespace std;
int printseuqnce(int a,int b,int c,int d){
    b=b-a;
    while(a>0){
        a--;
        cout<<"0 ";
        cout<<"1 ";
    }
    while(b>0){
        b--;
        cout<<"2 ";
        cout<<"1 ";
        c--;
    }
    while(c>0){
        c--;
        cout<<"2 ";
        if(d>0){
            d--;
            cout<<"3 ";
        }
    }
    while(d>0){
        d--;
        cout<<"3 ";
    }
}
int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);    
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int B=b-a;
  if(B>0){
      if(B==c && d==0){
          cout<<"YES"<<endl;
          printseuqnce(a,b,c,d);
          return 0;
      }
      if(B==(c+1) && d==0){
          cout<<"YES"<<endl;
          printseuqnce(a,b,c,d);
          return 0;
      }
      else if(c-B>=d){
          cout<<"YES"<<endl;
          printseuqnce(a,b,c,d);
          return 0;
      }
      else{
          cout<<"NO";
          return 0;
      }
  }
  else if(B==0){
      if(d-c>0){
          cout<<"NO";
          return 0;
      }
      else{
          cout<<"YES"<<endl;
          printseuqnce(a,b,c,d);
          return 0;
      }
  }
  else{
      cout<<"NO";
      return 0;
  }
  return 0;
}


//SOLUTION---submited copied
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i;
  vector<int>a(4);
  for(int i=0;i<4;i++)
  cin>>a[i];
  for(int rot=0;rot<2;rot++)
  {
  vector<int>backup=a;
  int even=a[0]+a[2];
  int odd=a[1]+a[3];
  if(odd==even || odd==even-1)
  {
      vector<int>b(a[0]+a[1]+a[2]+a[3],-1);
      for(i=0;i<b.size();i+=2)
      {
          if(a[0]>0)
          {
          b[i]=0;
          --a[0];
          }
          else
          {
          b[i]=2;
          --a[2];
          }
      }
      for(i=1;i<b.size();i+=2)
      {
          if(a[1]>0)
          {
          b[i]=1;
          --a[1];
          }
          else
          {
          b[i]=3;
          --a[3];
          }
      }
    bool ok = true;
    for (int i = 0; i < (int) b.size() - 1; i++) 
    {
      ok &= (abs(b[i] - b[i + 1]) == 1);
    }
    if (ok) 
    {
      cout << "YES" << '\n';
      for (int i = 0; i < (int) b.size(); i++) 
      {
        if (i > 0) 
        {
          cout << " ";
        }
        cout << (rot == 0 ? b[i] : 3 - b[i]);
      }
      cout << '\n';
      return 0;
    }
  }
  a = backup;
  reverse(a.begin(), a.end());
}
cout << "NO" << '\n';
return 0;
}