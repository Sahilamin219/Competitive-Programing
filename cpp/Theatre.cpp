#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f
#define pow2(n) (1 << (n))
#define maxe *max_element

using namespace std;
typedef long long ll;
// iPair ==> Integer Pair
typedef pair<int, int> iPair;
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
        vector<vector<int>> ans(4,vector<int> (4, 0));
        int answer=0;int loss=0;
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
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // int max_ans=0;
        for(int x=0;x<4;x++){// x is column
            // for(int j=0;j<m;j++){//J is row
                int temp=0;int store=0;
                // location l;
                for(int i = 0; i < 4; i++){
                    // for(int j = 0; j< 4; j++)
                    if(temp < a[i][x])
                    {
                        temp = a[i][x];
                        ans[x].push_back(temp);
                        store=i;
                        // l.x = i;
                        // l.y = j;
                    }
                }
                if(temp==0){
                    ans[x].push_back(temp);
                    loss-=100;
                }
                // int maxi=*max_element(a[i].begin(), a[i].end());
                // if(temp>0){
                    // for(int z=0;z<m;z++){
                    //     a[store][z]=0;
                    // }
                    // cout<<"positive"<<endl;
                    // ans[x].push_back(temp);
                    // ans+=(100-(25*k))*(temp);
                    // k++;
                    // break;
                // }
                // else if(temp==0){
                    // ans[x].push_back(temp);
                    // cout<<"gotzero"<<endl;
                    // answer-=100;
                // }
            // }
        }
        // for(int x=0;x<4;x++){
        //     for(int y=0;y<4;y++){
        //         cout<<ans[x][y]<<" ";
        //     }
        //     cout<<endl;
        // }
        // sort(ans[x].rbegin(), ans[x].rend());
        for(int x=0;x<ans[0].size();x++){
            int k=0;vector<int> vv;
            vv.push_back(ans[0][x]);
            for(int p=0;p<ans[1].size();p++){
                vv.push_back(ans[1][p]);
                    for(int y=0;y<ans[2].size();y++){
                        vv.push_back(ans[2][y]);
                        for(int f=0;f<ans[3].size();f++){
                            vv.push_back(ans[3][f]);
                            sort(vv.rbegin(), vv.rend());
                            int temp_ans=0;
                            for(int h=0;h<vv.size();h++){
                                if(vv[h]!=0){
                                    temp_ans+=(100-(25*k))*(vv[h]);
                                    k++;
                                }
                                else if(vv[h]==0){
                                    temp_ans-=100;
                                }
                            }
                            k=0;
                            answer=max(temp_ans, answer);
                        }
                    }
                    // cout<<ans[p]<<endl;
                    // answer+=(100-(25*k))*(ans[x][p]);
                    // k++;
            }
        }
        cout<<answer<<endl;
        final_ans+=answer;
    }
    cout<<final_ans<<endl;
    return 0;
}
