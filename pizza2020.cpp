#include<bits/stdc++.h>
using namespace std;
int give(vector <int> v, int x, int best, int k,int* a,int* check){
    //initally x = max_slice
    if(x<0){
        best-=v[k];
        k++;
        x+=v[k];
        if(k==v.size()-1){
            return best;
        }
        give(v,x,best,k,a,check);
    }
    if(check[x]==0){
        if(x==0){
            return best;
        }
        else{
            k++;
            best+=v[k];
            if(k==v.size()-1){
                return best;
            }
            x=x-v[k];
            give(v,x,best,k,a,check);
            return best;
        }
        a[x]=best;
        check[x]=1;
    }
    else{
        return a[x];
    }
    return best;
}
int main(){
    int max_slice;
    int types;
    cin>>max_slice>>types;
    vector <int> v;
    for(int i=0;i<types;i++){
        int values;
        cin>>values;
        v.push_back(values);
    }
    sort(v.rbegin(), v.rend());
    int points=0;
    int index=-1;
    int a[max_slice]={0};
    int check[max_slice]={0};
    points=give(v,max_slice,points,index,a,check);
    cout<<points<<endl;
	return 0;
}