import math

def helper(word):
    word_new = ''
    # check is the length of character list is even or odd
    if len(word) % 2 == 1:
        for i in range(len(word)//2 + 1):
            word_new += str(word[i])
        word_new += word_new[:len(word)//2 ][::-1]
    else:
        for i in range(len(word)//2):
            word_new += str(word[i])
        word_new += word_new[::-1]
    return word_new



def solve(word, n):
    string = ''.join([str(x) for x in word])
    z = helper(word)
    if z > string:
        return z
    else:
        # increase the middle character(s) and return the pallindrome
        inc = 1
        for i in range(math.ceil(len(word)/2) - 1,-1,-1):
            word[i] += inc 
            inc = word[i]//10
            word[i] %= 10
        return helper(word)

N = int(input())
for i in range(N):
    s=int(input())
    # lis=[]
    # lis=list(map(int,input().split()))
    # l=len(lis)-1
    # n=0
    # ind=0
    # for i in lis:
    #     n+=((i)*(pow(10,l-ind)))
    #     ind+=1
    word = list(map(int, input()))
    word_len = len(word)

    # for cases like '999','99999'
    if len(set(word))==1 and word[0]==9:
        print('1'+'0'*(word_len-1)+'1')
    else:
        print(solve(word, word_len)) 


#include <bits/stdc++.h>
#include <algorithm>
#define MOD 1000000007
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define endll "\n";
# using namespace std;
# typedef pair<int,int> pp;
# void cinn(int &number) 
# { 
#     bool negative = false; 
#     register int c; 
#     number = 0; 
#     c = getchar(); 
#     if (c=='-') 
#     { 
#         negative = true; 
#         c = getchar(); 
#     } 
#     for (; (c>47 && c<58); c=getchar()) 
#         number = number *10 + c - 48; 
#     if (negative) 
#         number *= -1; 
# } 
# //To check last change in right part from middle is incremental,if so
# //just copy left array from middle
# int last_change(int a[],int n){
#     //even case
#     if(n%2==0){
#         int flag=0;
#         for(int i=0;i<n/2;i++){
#             if(a[i]<a[n-1-i])
#             flag=0;
#             else if(a[i]>a[n-1-i])
#             flag=1;
#         }
#         return flag;
#     }
#     //odd case
#     if(n%2==1){
#         int flag=0;
#         for(int i=0;i<n/2;i++){
#             if(a[i]<a[n-1-i])
#             flag=0;
#             else if(a[i]>a[n-1-i])
#             flag=1;
#         }
#         return flag;
#     }
# }
# int main()
# {
#     ios_base::sync_with_stdio(false);cin.tie(NULL);
#     int t;cin>>t;
#     while(t--){
#         vector<int> q;
#         int n;cin>>n;
#         int a[n];
#         for(int i=0;i<n;i++){
#             cin>>a[i];
#         }
#         //if last change is incremental just copy reversed left part
#         if(n%2==0&&last_change(a,n)==1){
#             for(int i=0;i<(n/2);i++){
#                 cout<<a[i]<<" ";
#             }
#             for(int i=(n/2)-1;i>=0;i--){
#                 cout<<a[i]<<" ";
#             }
#         }
#         //for odd omit printing middle element 2 times
#         else if(n%2==1&&last_change(a,n)==1){
#             for(int i=0;i<=(n/2);i++){
#                 cout<<a[i]<<" ";
#             }
#             for(int i=(n/2)-1;i>=0;i--){
#                 cout<<a[i]<<" ";
#             }
#         }
#         //if last change is decremental
#         //we need to add 1 to middle element and do manupalation in 
#         // left part to adjust carry case
#         //then right part will be just reverse of left
#         else if(n%2==0){
#             int i=(n/2)-1;
#             //carry adjustment
#             while(i>=0&&1+a[i]>9&&a[(n/2)-1]<a[n/2]){
#                 q.push_back(0);
#                 i--;
#             }
#             //No overflow
#             if(i>=0){
#                 q.push_back(a[i]+1);
#                 i--;
#                 while(i>=0){
#                     q.push_back(a[i--]);
#                 }
#             }
#             //overflow->insert extra 1;
#             else{
#                 q.push_back(1);
#             }//}
#             reverse(q.begin(),q.end());
#             for(int i=0;i<q.size();i++){
#                 cout<<q[i]<<" ";
#             }
#             reverse(q.begin(),q.end());
#             for(int i=0;i<q.size();i++){
#                 cout<<q[i]<<" ";
#             }
#         }
#         else{
#             vector<int> q;
#             int i=(n/2);
#             while(i>=0&&1+a[i]>9){
#                 q.push_back(0);
#                 i--;
#             }
#             if(i>=0){
#                 q.push_back(a[i]+1);
#                 i--;
#                 while(i>=0){
#                     q.push_back(a[i--]);
#                 }
#             }
#             else{
#                 q.push_back(1);
#             }
#             if((n/2)+1==q.size()){
#             reverse(q.begin(),q.end());
#             for(int i=0;i<q.size();i++){
#                 cout<<q[i]<<" ";
#             }
#             reverse(q.begin(),q.end());
            
#             for(int i=1;i<q.size();i++){
#                 cout<<q[i]<<" ";
#             }
#             }
#             else{
#               reverse(q.begin(),q.end());
#             for(int i=1;i<q.size();i++){
#                 cout<<q[i]<<" ";
#             }
#             reverse(q.begin(),q.end());
            
#             for(int i=1;i<q.size();i++){
#                 cout<<q[i]<<" ";
#                 }  
#             }
        
#         }
#         cout<<endll;
#      }
#     return 0;
# }