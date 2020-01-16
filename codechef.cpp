// C++ program to illustrate the 
// Modifiers in vector 
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Assign vector 
    vector<int> v; 
  
    // fill the array with 10 five times 
    v.assign(5, 10); 
  
    cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 15 to the last position 
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // removes last element 
    v.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 5 at the beginning 
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // removes the first element 
    v.erase(v.begin()); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // inserts at the beginning 
    v.emplace(v.begin(), 5); 
    cout << "\nThe first element is: " << v[0]; 
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // erases the vector 
    v.clear(); 
    cout << "\nVector size after erase(): " << v.size(); 
  
    // two vector to perform swap 
    vector<int> v1, v2; 
    v1.push_back(1); 
    v1.push_back(2); 
    v2.push_back(3); 
    v2.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
} 


//sortinngstarts
for(int i=0;i<k-1;i++){
    int min = b[i];
    for(int j=i+1;j<n;j++){
        if (b[j]<min){
            min=b[j];
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;}}}
//sortingends


****OCTOBER LUNCH TIME INVERSION **
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int values;
        int k;cin>>k;
        int a=0;
        vector <int> vect1;
        for(int i=0;i<n;i++){
            cin>>values;
            vect1.push_back(values);
        }
        vector <int> vect2;
        while(k--){
            copy(vect1.begin(), vect1.end(), back_inserter(vect2));
        }
        for(int i=0;i<vect2.size()-1;i++){
           for(int j=i+1;j<vect2.size();j++){
               if(vect2[j]<vect2[i]){
                   a=a+j-i-1;
                   int temp = vect2[i];
                   vect2[i]=vect2[j];
                   vect2[j]=temp;
               }
           }
        }
       cout<< a << ""<<endl;
    }
    return 0;
}

*********JULY CHALLENGE Cake pop QUESTION****
#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    float m =n;
    int sum = 0;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    double mean = sum/m;
    int count1 = 2000000000;
    int count;
    for(int j =0;j<n;j++)
    {   if(mean == a[j])
       if(a[j]< count1){
        count = j+1;
        count1 = a[j];}
    }
    if(count1 != 2000000000)
    printf("%d\n",count);
    else
    printf("Impossible\n"); 
    
    }
    return 0;
    
    
}

---------------compress the string---
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,dif;
        cin>>n;
        long long a[n];
        string ans="";
        
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long counter=1;
        for(long long i=1;i<n;i++)
        {
           dif=a[i]-a[i-1];
           if(dif==1)
           counter++;
           else
           {
               if(counter>2)
               {
                   ans+=to_string(a[i-counter]);
               
                   ans+="...";
                   
                   ans+=to_string(a[i-1])+",";
               
                   
               }
               else if(counter==2)
               {
                   ans+=to_string(a[i-2])+",";
                   ans+=to_string(a[i-1])+",";
               }
               else if(counter==1)
               {
                   //ans+=a[i-2];
               
                   ans+=to_string(a[i-1])+",";
                   
               
               
               }
               counter=1;
           }
           
        }
        if(counter==1)
        {
          ans+=to_string(a[n-1]);
          
               
         
        }
        if(counter>2)
               {
                   ans+=to_string(a[n-counter]);
               
                   ans+="...";
                   
                   ans+=to_string(a[n-1]);
               
                   
               }
      if(counter==2)
               {
                   ans+=to_string(a[n-2])+",";
                   ans+=to_string(a[n-1]);
               }
        
        cout<<ans;
        cout<<"\n";
        
    }
    return 0;
}
