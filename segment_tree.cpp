// //teja349
// #include <bits/stdc++.h>
// #include <vector>
// #include <set>
// #include <map>
// #include <string>
// #include <cstdio>
// #include <cstdlib>
// #include <climits>
// #include <utility>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <iomanip>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp> 
// //setbase - cout << setbase (16); cout << 100 << endl; Prints 64
// //setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
// //setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
// //cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val

// using namespace std;
// using namespace __gnu_pbds;

// #define f(i,a,b) for(int i=a;i<b;i++)
// #define rep(i,n) f(i,0,n)
// #define fd(i,a,b) for(i=a;i>=b;i--)
// #define pb push_back
// #define mp make_pair
// #define vi vector< int >
// #define vl vector< ll >
// #define ss second
// #define ff first
// #define ll long long
// #define pii pair< int,int >
// #define pll pair< ll,ll >
// #define sz(a) a.size()
// #define inf (1000*1000*1000+5)
// #define all(a) a.begin(),a.end()
// #define tri pair<int,pii>
// #define vii vector<pii>
// #define vll vector<pll>
// #define viii vector<tri>
// #define mod (1000*1000*1000+7)
// #define pqueue priority_queue< int >
// #define pdqueue priority_queue< int,vi ,greater< int > >
// #define flush fflush(stdout) 
// #define primeDEN 727999983
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// // find_by_order()  // order_of_key
// typedef tree<
// int,
// null_type,
// less<int>,
// rb_tree_tag,
// tree_order_statistics_node_update>
// ordered_set;

// // int seg[2123456],bestsuf[2123456];
// vector<int> seg(40),bestsuf;
// vector<int> v;
// int build(int node,int s,int e){
// 	if(s==e){
// 		// bestsuf[node]=0;
// 		seg[node]=1;	
// 		return 0;
// 	}
// 	int mid=(s+e)/2;
// 	build(2*node,s,mid);
// 	build(2*node+1,mid+1,e);
// 	seg[node]=seg[2*node]+seg[2*node+1];
// 	// bestsuf[node]=max(bestsuf[2*node+1],bestsuf[2*node]+seg[2*node+1]);
// 	return 0;
// }
// int update(int node,int s,int e,int pos,int val){
// 	//cout<<node<<" "<<s<<" "<<e<<" "<<bestsuf[node]<<" "<<val<<endl;
// 	if(s==e){
		
// 		seg[node]+=val;

// 		//cout<<seg[node]<<endl;
// 		bestsuf[node]=max(0,seg[node]);	
// 		//cout<<seg[node]<<" "<<bestsuf[node]<<" fds"<<endl;
// 		return 0;
// 	}
// 	int mid=(s+e)/2;
// 	if(pos<=mid){
// 		update(2*node,s,mid,pos,val);
// 	}
// 	else{
// 		update(2*node+1,mid+1,e,pos,val);
// 	}
// 	seg[node]=seg[2*node]+seg[2*node+1];
// 	bestsuf[node]=max(bestsuf[2*node+1],bestsuf[2*node]+seg[2*node+1]);
// }
// pii query(int node,int s,int e,int l,int r){
// 	if(r<l || r<s){
// 		return mp(0,0);
// 	}
// 	if(l<=s && e<=r){
// 		//cout<<s<<" "<<e<<" "<<seg[node]<<endl;
// 		return mp(seg[node],bestsuf[node]);
// 	}
// 	int mid=(s+e)/2;
// 	pii a=query(2*node,s,mid,l,r);
// 	pii b = query(2*node+1,mid+1,e,l,r);
// 	return mp(a.ff+b.ff,max(b.ss,b.ff+a.ss));
// }

// int main(){
//     std::ios::sync_with_stdio(false); cin.tie(NULL);
//     int e=5e5;
//     v=seg;
//     f(i,9,16)v.push_back(0);
//     // bestsuf=v;
//     build(1,1,32);
//     for(auto x: seg)cout<<x<<" ";
//     // 	cout<<endl;
//     // for(auto x: bestsuf)cout<<x<<" ";
//     return 0;   
// }
#include <bits/stdc++.h>
using namespace std;
vector<int> v={7, 4, 0, 3, 0, 5, 1};
int build_tree(vector<int> &tree_sum, vector<int> &tree_max, int node, int s, int e)
{
    //parent nikalna : 1base indexing m node/2 aur 0base m node-1/2
    if(s==e){
        tree_max[node-1] = v[s];
        tree_sum[node-1] = v[s];
        return 0;
    }
    int mid=(s+e)/2;
    build_tree(tree_sum,tree_max,2*node,s,mid);
    build_tree(tree_sum,tree_max,2*node+1,mid+1,e);
    tree_max[node-1] = max(tree_max[2*node -1], tree_max[2*node]);
    tree_sum[node-1] = tree_sum[2*node-1]+tree_sum[2*node];
    return 0;
}
int sum(vector<int> tree_sum, int a, int b, int n)
{	//for sum(a,b)
	a+=n;b+=n;
	int s=0;
	while(a<=b)
	{
		if(a%2)s+=tree_sum[a++ -1];
		if(not (b%2))s+=tree_sum[b-- - 1];
		a/=2;b/=2;
	}
	return s;
}
void add(vector<int> &tree_sum,int k, int x, int n)
{
	//function increases the array value at position k by x
	k+=n;
	tree_sum[k-1]+=x;
	for(k/=2;k>=1;k/=2){
		tree_sum[k-1]=tree_sum[2*k-1]+tree_sum[2*k];
	}
}
int main() {
	int k=ceil(log2(v.size()));
	while(v.size()<pow(2,k))v.push_back(0);
	int n=v.size();    //length of segment tree = 2*n
	vector<int> tree_sum(2*n), tree_max(2*n); 
	//tree[n] to tree[2*n-1] are the elements of the array
	build_tree(tree_sum, tree_max, 1, 0, n-1);
	for(auto x: tree_max)cout<<x<<" ";
	cout<<endl;// cout<<tree_sum.size()<<endl;
	for(auto x: tree_sum)cout<<x<<" ";
		cout<<endl;
	cout<<sum(tree_sum,1,3,8)<<endl;//yaha pr a,b indexies k position h
	add(tree_sum,2,50,n);
	for(auto x: tree_sum)cout<<x<<" ";
		cout<<endl;
	cout<<sum(tree_sum,1,3,8)<<endl;
	return 0;
}


// const int N = 1e5;  // limit for array size
// int n;  // array size
// int t[2 * N];

// void build() {  // build the tree
//   for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
// }

// void modify(int p, int value) {  // set value at position p
//   for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
// }

// int query(int l, int r) {  // sum on interval [l, r)
//   int res = 0;
//   for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
//     if (l&1) res += t[l++];
//     if (r&1) res += t[--r];
//   }
//   return res;
// }

// int main() {
//   scanf("%d", &n);
//   for (int i = 0; i < n; ++i) scanf("%d", t + n + i);
//   build();
//   modify(0, 1);
//   printf("%d\n", query(3, 11));
//   return 0;
// }
// -------------------BIT-----------------------
void update(int x, int delta)
{
      for(; x <= n; x += x&-x)
        BIT[x] += delta;
}
int query(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += BIT[x];
     return sum;
}
//in this whole array is divided into buckets of power of 2
//i.e we have sum of 0, 0-2, 0-4, 0-8, 4-6, 6-7 and so on
//to get to parent of a node x we do x-=(x&-x) and to reach its child vice-versa
//doing so just sub or adds value of the number obtained with first set bit of x because for
//each set bit we have a sub-group formed.