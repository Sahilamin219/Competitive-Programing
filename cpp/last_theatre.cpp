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
int main(){
    FAST;
    int t;
    cin>>t;
    ll final_ans=0;
    while(t--){
        ll n;
        cin>>n;
        vector <ll> ans;
        ll answer=-400;
        int m=4;
        if(n==0){
            answer=-400;
            cout<<answer<<endl;
            final_ans+=answer;
            // goto skip;
        }
        else if(n==1){
            string st;cin>>st;int va;cin>>va;
            answer+=(100)*2;
            cout<<answer<<endl;
            final_ans+=answer;
            // goto skip;
        }
        else{
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
            vector<ll> b;
            int c[7]={0,1,2,3,0,1,2};
            for(int z=0;z<4;z++){   
                // cout<<"zis"<<c[z+3]<<endl;
                int count=0;
                for(int x=0;x<4;x++){// x is column
                        int temp=0;int store=0;
                        b.push_back(a[c[z]][x]);
                        for(int i = 0; i < 4; i++){
                            if(i!=x){
                                b.push_back(a[c[z+1]][i]);
                                for(int j=0;j<4;j++){
                                    if(j!=i && j!=x){
                                        b.push_back(a[c[z+2]][j]);
                                        for(int y=0;y<4;y++){
                                            if(y!=j && y!=i && y!=x){
                                                b.push_back(a[c[z+3]][y]);
                                                count++;
                                                ll temp_ans=0;
                                                // if(b.size()>0 && b.size()<5){
                                                    // if(b.size()==3){
                                                    //     temp_ans-=100;
                                                    // }
                                                    // int d=0;
                                                    // d=(-100)*(4-b.size());
                                                    // if(b.size()==4){
                                                for(int ii=0;ii<b.size();ii++){
                                                    if(b[ii]==0){
                                                        temp_ans-=100;
                                                    }
                                                }
                                                    // }
                                                    // else{
                                                    //     temp_ans+=d;
                                                    // }
                                                    // cout<<"temp_ans->"<<temp_ans<<endl;
                                                sort(b.rbegin(), b.rend());
                                                int k=0;
                                                for(int p=0;p<b.size();p++){
                                                    // cout<<"take"<<b[p]<<" ";
                                                    temp_ans+=(100-(25*k))*(b[p]);
                                                    k++;
                                                }
                                                if(k==1){
                                                    temp_ans-=300;
                                                }
                                                else if(k==2){
                                                    temp_ans-=200;
                                                }
                                                else if(k==3){
                                                    temp_ans-100;
                                                }
                                                // cout<<endl;
                                                // cout<<"k is"<<k<<endl;
                                                answer=max(answer,temp_ans);        
                                                k=0;
                                                b.clear();
                                                // b.erase(b.begin(), b.end());
                                                // }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        // cout<<"count is"<<count<<endl;
                        // if(temp>0){
                        //     for(int z=0;z<m;z++){
                        //         a[store][z]=0;
                        //     }
                        //     ans.push_back(temp);
                        // }
                        // else if(temp==0){
                        //     answer-=100;
                        // }
                }
            }
            // sort(ans.rbegin(), ans.rend());
            // for(int p=0;p<ans.size();p++){
            //     answer+=(100-(25*k))*(ans[p]);
            //     k++;
            // }
            // skip;
            cout<<answer<<endl;
            final_ans+=answer;
        }
    }
    cout<<final_ans<<endl;
    return 0;
}
// 575
// 525
// -25 
// -200 
// -400
// 475
