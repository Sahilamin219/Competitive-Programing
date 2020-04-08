#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f
#define pow2(n) (1 << (n))
#define mod 1000000007
using namespace std;
typedef long long ll;
// int negative_infinity = - std::numeric_limits<int>::infinity();
// There are 6 books, 2 libraries, and 7 days for scanning.
// 1 2 3 6 5 4 The scores of the books are 1, 2, 3, 6, 5, 4 (in order).
// 5 2 2 Library 0 has 5 books, the signup process takes 2 days, and the library
// can ship 2 books per day.
// 0 1 2 3 4 The books in library 0 are: book 0, book 1, book 2, book 3, and book 4.
// 4 3 1 Library 1 has 4 books, the signup process takes 3 days, and the library can
// ship 1 book per day.
// 3 2 5 0 The books in library 1 are: book 3, book 2, book 5 and book 0.
int main(){
    FAST;
    ll n,l,days;//l is no.of library
    cin>>n>>l>>days;//n is no.of books
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll values;
        cin>>values;
        v.push_back(values);
    }
    vector <vector<ll>> lib;
    ll array_b[l];//storeing no of books
    ll array_p[l];//storeing process time
    ll array_c[l];//storeing capacity
    ll count_array=0;
    // map<ll, bool> mp;
    ll arr[l];
    // ll check[l];
    for(ll i=0;i<l;i++){
        cin>>array_b[count_array];
        cin>>array_p[count_array];
        cin>>array_c[count_array];
        vector<ll> temp;
        for(ll j=0;j<array_b[count_array];j++){
            ll values;
            cin>>values;
            temp.push_back(values);
            arr[values]=1;
            // mp.insert(values,true);
        }
        lib.push_back(temp);
        count_array++;
    }
    // cout<<v[0]<<endl;
    ll points=0;
    ll a=0;
    // vector <ll> abc;
    ll sum=0;ll f=0;
    while(sum<days){
        sum+=array_p[f];
        f++;
    }
    cout<<f-1<<endl;
    while(days>=0){
        cout<<a<<" "<<array_b[a]<<endl;
        days-=array_p[a];
        days-=(array_b[a]/array_c[a]);
        // ll b=0;
        // cout<<"daysis"<<days<<endl;
        while((array_b[a])--){
            // cout<<"array_b"<<array_b[a]<<endl;
            if(arr[lib[a][array_b[a]]]==1){
                points+=v[lib[a][array_b[a]]];
                cout<<lib[a][array_b[a]]<<" ";
                arr[array_b[a]]=0;
            }
            // std::map<ll, ll>::iterator it = mp.find(values);
            // if(it->second){
            //     points+=v[lib[a][array_b[a]]];
            //     it->second = false;
            // }
            // if (it != m.end()){
            //     it->second = 0;
            // }
        }
        cout<<endl;
        a++;
    }
    // cout<<points<<endl;
    return 0;
}
// vector<int>::iterator it1, it2;
// it1 = v.end();
// it2 = v.end();
// it1--;
// v.erase(it1, it2);
// sort(v.rbegin(), v.rend());
// C++ program to illustrate
// map::insert({key, element})
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// 	// initialize container
// 	map<int, int> mp;

// 	// insert elements in random order
// 	mp.insert({ 2, 30 });
// 	mp.insert({ 1, 40 });
// 	mp.insert({ 3, 60 });

// 	// does not inserts key 2 with element 20
// 	mp.insert({ 2, 20 });
// 	mp.insert({ 5, 50 });

// 	// prints the elements
// 	cout << "KEY\tELEMENT\n";
// 	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
// 		cout << itr->first
// 			<< '\t' << itr->second << '\n';
// 	}
// 	return 0;
// }
