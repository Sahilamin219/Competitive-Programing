#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// int n, k;
// string s;
// bool solve(int m) {
//     bool fl = false;
//     int as = 0, bs = 0;
//     for (int i = 0; i < m; ++i) {
//         if (s[i] == 'a') as++;
//         else bs++;
//     }
//     if (min(as, bs) <= k)
//         fl = true;
//     for (int i = 1; i < n - m + 1; ++i) {
//         if (s[i - 1] == 'a') as--;
//         else bs--;
//         if (s[i + m - 1] == 'a') as++;
//         else bs++;
//         if (min(as, bs) <= k)
//             fl = true;
//     }
//     return fl;
// }
void solve(){
    int n;cin>>n;
    vector <ll> a(n,0);
    vector <ll> b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    ll ans=0;
    ll m=1e12;
    f(i,0,n){
        ll pi=(i+1)%n;
        ll next_health=min(a[pi],b[i]);
        ans+=(a[pi]-next_health);//least possible value is 0
        m=min(next_health,m);
    }
    cout<<ans+m<<"\n";
}
int main() {    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    string sl;
    cin>>sl;
    int f=1;
    f(i,1,s(sl)){
        if(int(sl[i])>90){
            f=0;
            break;
        }
    }
    if(!f){
        cout<<sl;
    }
    else{
        // transform(sl.begin(), sl.end(), sl.begin(), ::tolower); 
        f(i,0,s(sl)){
            if(int(sl[i]>90)){
                sl[i]=sl[i]-32;
            }
            else{
                sl[i]=sl[i]+32;
            }
        }
        cout<<sl;
    }
    // int t;cin>>t;
    // while(t--){
    //     solve();
    // }

    // cin >> n >> k >> s;
    // int left = 1, right = n + 1;
    // while (left + 1 != right) {
    //     int middle = (left + right) / 2;
    //     if (solve(middle))
    //         left = middle;
    //     else
    //         right = middle;
    // }
    // cout << left;
    return 0;
}
// int main(){
// 	#ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     fast
//     int n,k;cin>>n>>k;
//     string str;cin>>str;
//     int ans=0;
//     for(int i=0;i<s(str);i++){
//         int l=k;
//         int count=1;
//         int j=i+1;
//         while((l or str[j]==str[i]) and j<s(str)){
//             if(str[j]==str[i] and j<s(str)){
//                 count++;
//                 j++;
//             }
//             else{
//                 l--;
//                 count++;
//                 j++;
//             }
//         }
//         ans=max(ans,count);
//     }
//     cout<<ans;
//     return 0;
// }

//rough
// return (m1=a>b?a:b)>(m2=c>d?c:d)?m1:m2;//compare four numbers
// bitset <32> b(n);
    // cout<<b.count();
#include <bits/stdc++.h> 
using namespace std; 

// A sample function whose time taken to 
// be measured 
void fun() 
{ 
    for (int i=0; i<10; i++) 
    { 
    } 
} 

int main() 
{ 
    /* clock_t clock(void) returns the number of clock ticks 
    elapsed since the program was launched.To get the number 
    of seconds used by the CPU, you will need to divide by 
    CLOCKS_PER_SEC.where CLOCKS_PER_SEC is 1000000 on typical 
    32 bit system. */
    clock_t start, end; 

    /* Recording the starting clock tick.*/
    start = clock(); 

    fun(); 

    // Recording the end clock tick. 
    end = clock(); 

    // Calculating total time taken by the program. 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed 
        << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0; 
} 
