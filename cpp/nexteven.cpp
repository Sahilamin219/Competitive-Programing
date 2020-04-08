//Given a positive integer N. The task is to find the smallest even number E such that E > N //and digits in N and E are same.

//Input:
//The first line of input contains an integer T denoting the number of test cases. Then T //test cases follow. Each test case contains an integer N.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    string org = s;
	    int to=100000;
	    while(1){
	    int d1=0,d2=0;
	    int i;
	    for(i=s.length()-1;i>0;i--){
	        if(s[i]>s[i-1]){
	            d1=i-1;
	            break;
	        }
	    }
	    if(i==0){
	        cout << -1 << endl;
	        break;
	    }
	    int j;
	    char ans;
	    ans='9';
	    for(j = i;j<s.length();j++){
	        if(s[j]<=s[d1]){
	            d2 = j-1;
	            break;
	                
	        }
	    }
	    if(j==s.length() && j!=0)
	        d2=j-1;
	    swap(s[d1],s[d2]);
	    
	    string t = s.substr(d1+1);
	    sort(t.begin(),t.end());
	    for(int k=d1+1;k<s.length();k++)
	        s[k]=t[k-d1-1];
	    if(s[s.length()-1]%2==0){
	        cout << s << endl;
	        break;}
	    }
	    
	}
	return 0;
}
