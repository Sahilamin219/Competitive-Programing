#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
#define pow2(n) (1 << (n))
using namespace std;
typedef long long ll;
bool check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-i]){
            return false;
        }
    }
    return true;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector <string> str;
    string a;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        str.push_back(s);
        a+=s;
    }
    // cout<<a<<endl;
    int ans=0;
    for(int i=0;i<n;i++){
        if(check(a)){
            ans=max(ans, a.size());
        }
        else{
            for(int i=0;(i<(1<<n));i++){
                vector<int> subset;
                for(int b=0;b<n;b++){
                    if(i&(1<<b)){
                        subset.push_back(b);
                    }
                    
                }
            }
        }
    }
	return 0;
}


Let's define rev(S) as the reversed string of a string S. There are two cases when we choose K strings to make a palindrome string S1+S2+⋯+SK

:

    If K

is even, for every integer X (1≤X≤K2), SX=rev(SK−X+1)
.
if K
is odd, SK+12 must be palindrome. Also for every integer X (1≤X≤K−12), SX=rev(SK−X+1)

    . 

In either case we want to find as many pairs of strings as possible such that one is the reverse of the other. It is also clear that if T
is a palindrome string then rev(T)=T

. We cannot make a pair of T and rev(T) because all strings in the input are distinct.

Therefore, for each string we need to find if there is another string that is its reverse. If there exists one, put them on the left / right end respectively. If there are one or more strings that are palindrome themselves, pick any one of them and put it in the middle.

Time complexity: O(n2m)
if we implement it naively. O(nmlogn) is possible if we use a data structure that provides O(logn)

search such as std::set in C++.
Solution

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;
string s[MAX_N];

int main()
{
	set<string> dict;
	int n, m, i;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
		dict.insert(s[i]);
	}
	vector<string> left, right;
	string mid;
	for (i = 0; i < n; i++)
	{
		string t = s[i];
		reverse(t.begin(), t.end());
		if (t == s[i])
			mid = t;
		else if (dict.find(t) != dict.end())
		{
			left.push_back(s[i]);
			right.push_back(t);
			dict.erase(s[i]);
			dict.erase(t);
		}
	}
	cout << left.size() * m * 2 + mid.size() << endl;
	for (string x : left)
		cout << x;
	cout << mid;
	reverse(right.begin(), right.end());
	for (string x : right)
		cout << x;
	cout << endl;
}
