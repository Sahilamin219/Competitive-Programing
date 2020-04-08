#include <iostream>
using namespace std;
void swap(char *a, char *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void recurssion(string s, int n, int i){
    if(i==n-1){
        cout<<s<<endl;
        return;
        // exit(0);
    }
    else if(s[i]=='x' && s[i+1]!='x'){
        swap(s[i], s[i+1]);
    }
    else if(s[i]=='x' && s[i+1]=='x'){
        int store=i;
        while(s[i+1]=='x' && i+1<n-1){
            i++;
        }
        swap(s[store], s[i+1]);
    }
    recurssion(s,n,i+1);
}
int main() {
	string str="axbxxcxx";
	int n=str.size();
	recurssion(str, n ,0);
	cout<<str<<endl;
	return 0;
}
