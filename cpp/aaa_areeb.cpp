#include<iostream>
using namespace std;
int CountA(string s, int n, int index, int count1){
    if(index == n-2 ){
        //cout<<"onA"<<endl;
        cout<<count1<<endl;
        return count1;
    }
    int flag=1;
    for(int i = index; i<index+3; i++){
        if(s[i]=='a'){
            //count1++;
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        count1++;
        //cout<<count1<<endl;
        if(index == n-2 ){
            return count1;
        }
    }
    CountA(s,n,index+1, count1++);
    return 0;
}
int CountB(string s, int n, int index1, int count2){
    if(index1 >=n-2){
        cout<<count2<<endl;
        return count2;
    }
    int f=1;
    for(int i = index1; i<index1+3; i++){
        if(s[i]=='a'){
            //count2++;
            continue;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==1){
        count2++;
    }
    CountB(s,n,index1+3, count2);
    return 0;
}
int main(){
    string in;
    cin>>in;
    int n;
    n=in.size();
    //cout<<"nis"<<n<<endl;
    int count1 = 0;
    int count2 = 0;
    count1 = CountA(in,n,0, 0);
    //cout<<"count1is"<<count1<<endl;
    count2 = CountB(in,n,0, 0);
    //cout<<"ocunt2is"<<count2<<endl;
    return 0;
}
