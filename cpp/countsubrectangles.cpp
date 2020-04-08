//galat hai ... only line trevarse kr raha hai ..square nahi ban pa raha hai
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector <int> a;
    vector <int> b;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.push_back(val);
    }
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        b.push_back(val);
    }
    vector <vector<int>> c(n,vector<int> (m, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int val;
            val=a[i]*b[j];
            c[i][j]=(val);
        }
    }
    for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cout<<c[i][j]<<" ";
	    }
	    cout<<endl;
    }
    int count=0;
    for(int i=0;i<n-k;i++){
        for(int j=0;j<m;j++){
            int flag_a=1;//,flag_b=1;
            for(int z=0;z<k;z++){
                // if(c[i][j+z]==0){
                //     flag_a=0;
                // }
                if(c[i+z][j]==1){
                    flag_a=0;
                }
            }
            if(flag_a==1){
                count++;
                cout<<i<<" "<<j<<endl;
            }
            // if(flag_b==1){
            //     count++;
            //      cout<<i<<" "<<j<<endl;
            // }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m-k;j++){
            int flag_a=1;//,flag_b=1;
            for(int z=0;z<k;z++){
                if(c[i][j+z]==0){
                    flag_a=0;
                }
                // if(c[i+z][j]==1){
                //     flag_b=0;
                // }
            }
            if(flag_a==1){
                count++;
                cout<<i<<" "<<j<<endl;
            }
            // if(flag_b==1){
            //     count++;
            //      cout<<i<<" "<<j<<endl;
            // }
        }
    }
    cout<<"1"<<endl;
    for(int i=n-k;i<n;i++){
        for(int j=0;j<m-k;j++){
            int flag_a=1;
            for(int z=0;z<k;z++){
                if(c[i][j+z]==1){
                    flag_a=0;
                    break;
                }
            }
            if(flag_a==1){
                count++;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<"2"<<endl;
    for(int i=0;i<n-k;i++){
        for(int j=m-k;j<m;j++){
            int flag_b=1;
            for(int z=0;z<k;z++){
                if(c[i+z][j]==0){
                    flag_b=0;
                    break;
                }
            }
            if(flag_b==1){
                count++;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    int flag_a=1,flag_b=1;
    for(int z=k;z>0;z--){
        if(c[n-1-z][m-1]==0){
            flag_a=0;
        }
        if(c[n-1][m-1-z]==0){
            flag_b=0;
        }
    }
    if(flag_a==1){
        count++;
    }
    if(flag_b==1){
        count++;
    }
    cout<<count<<endl;
	return 0;
}
