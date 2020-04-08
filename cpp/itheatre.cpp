#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
#define pow2(n) (1 << (n))
#define maxe *max_element
using namespace std;
typedef long long ll;
typedef pair<int, int> iPair; // iPair ==> Integer Pair 
struct avl {
   int d;
   struct avl *l;
   struct avl *r;
};
struct location
    {
       int x;
       int y;
    };
// void interchangeFirstLast(int m[][n], int a, int b) 
// { 
//         // int rows = 4;
//         // swapping of element between first 
//         // and last rows 
//         for (int i = 0; i < 4; i++) 
//         { 
//             int t = m[a][i]; 
//             m[a][i] = m[b][i]; 
//             m[b][i] = t; 
//         } 
// }
int main(){
    FAST;
    int t;
    cin>>t;
    ll final_ans=0;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> ans;
        ll answer=0;
        int m=4;
        vector<vector<int>> a(4,vector<int> (4, 0));
        for(int i=0;i<n;i++){
            string s;cin>>s;
            if(s=="A"){
                int val;cin>>val;
                if(val==12){
                    a[0][0]++;
                }
                if(val==3){
                    a[0][1]++;
                }
                if(val==6){
                    a[0][2]++;
                }
                if(val==9){
                    a[0][3]++;
                }
            }
            if(s=="B"){
                int val;cin>>val;
                if(val==12){
                    a[1][0]++;
                }
                if(val==3){
                    a[1][1]++;
                }
                if(val==6){
                    a[1][2]++;
                }
                if(val==9){
                    a[1][3]++;
                }
            }
            if(s=="C"){
                int val;cin>>val;
                if(val==12){
                    a[2][0]++;
                }
                if(val==3){
                    a[2][1]++;
                }
                if(val==6){
                    a[2][2]++;
                }
                if(val==9){
                    a[2][3]++;
                }
            }
            if(s=="D"){
                int val;cin>>val;
                if(val==12){
                    a[3][0]++;
                }
                if(val==3){
                    a[3][1]++;
                }
                if(val==6){
                    a[3][2]++;
                }
                if(val==9){
                    a[3][3]++;
                }
            }
        }
        // ll max1[4];
        // max1[3]=*max_element(a[3].begin(), a[3].end());
        // max1[2]=*max_element(a[2].begin(), a[2].end());
        // max1[1]=*max_element(a[1].begin(), a[1].end());
        // max1[0]=*max_element(a[0].begin(), a[0].end());
        // sort(a, a+4);
        vector<ll> b;
        for(int x=0;x<4;x++){// x is column
                int temp=0;int store=0;
                int k=0;int count=0;
                ll temp_ans=0;
                b.push_back(a[0][x]);
                for(int i = 0; i < 4; i++){
                    if(i!=x){
                        b.push_back(a[1][i]);
                        for(int j=0;j<4;j++){
                            if(j!=i && j!=x){
                                b.push_back(a[2][j]);
                                for(int y=0;y<4;y++){
                                    if(y!=j && y!=i && y!=x){
                                        b.push_back(a[3][y]);
                                        count++;
                                        for(int i=0;i<b.size();i++){
                                        if(temp==0){
                                            temp_ans-=100;
                                            }
                                        }
                                        sort(b.rbegin(), b.rend());
                                        for(int p=0;p<b.size();p++){
                                            temp_ans+=(100-(25*k))*(b[p]);
                                            k++;
                                        }
                                        // answer=max(answer,temp_ans);
                                        answer=temp_ans;
                                    }
                                    k=0;
                                }
                            }
                        }
                    }
                }
                cout<<"coutis"<<count<<endl;
        }
        cout<<answer<<endl;
        final_ans+=answer;
    }
    cout<<final_ans<<endl;
    return 0;
}
