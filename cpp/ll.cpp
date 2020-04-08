#include <bits/stdc++.h>
#define S(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mx=100000;
// const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */
bool flag_g=0;
// string gg="abcdefghijklmnopqrstuvwxyz";
struct Node
{
    int data;
    Node* next;
};
typedef Node* node;
node makenode(int value){
    node make= new Node;
    make->data=value;
    make->next=NULL;
    return make;
}
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    node head;
    int k;cin>>k;
    head->data=k;
    head->next=NULL;
    node p;
    cout<<head->data<<"\n";
    // while(1){
        int n;
        cin>>n;
        p->data=makenode(n)->data;
        p->next=makenode(n)->next;
        cout<<makenode(n)->data<<"\n";
        // while(head->next!=NULL){
        //     head->data=(head->next)->data;
        //     head->next=(head->next)->next;
        //     cout<<head->data<<"\n";
        // }
    //     break;
    // }
    return 0;
}