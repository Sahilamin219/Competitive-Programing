#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    return(a > b)  ? (a > c ? a : c) : (b > c ? b : c);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr[n][n];
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) 
	            cin >> arr[i][j];
	    }
	    int dp[n][n+2];
	    dp[0][0] = -1; 
	    dp[0][n+1] = -1;
	    
	    for(int i = 1; i <= n; i++) 
	        dp[0][i] = arr[0][i-1];
	   
	    for(int i = 1; i < n; i++) {
	        for(int j = 0; j <= n + 1; j++) {
	            if(j == 0 || j == n+1)
	                dp[i][j] = -1;
	            else 
	                dp[i][j] = arr[i][j-1] + max( dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]);
	        }
	    }
	    int res = 0;
	    for(int i = 1; i < n+1; i++) {
	        if(dp[n-1][i] > res)
	            res = dp[n-1][i];
	    }
	    
	    cout << res << endl;
	}
	return 0;
}
