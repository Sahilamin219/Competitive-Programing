//Paths in grid ...using greedy or dp ..even i don't know
#include <bits/stdc++.h>
using namespace std;
int recursive(vector <vector<int>> a, int n, int i, int j, int sum_val){
    if(i==n-1 && j==n-1){
        return 0;
        // cout<<sum_val<<endl;
        // sum_val=recursive(a,i,j,sum_val);
    }
    else if(i==n-1){
        // j=j+1;
        sum_val+=recursive(a,n,i,j+1,sum_val) + a[i][j];
    }
    else if(j==n-1){
        // i=i+1;
        sum_val+=recursive(a,n,i+1,j,sum_val) + a[i][j];
    }
    else{
        sum_val+=max(recursive(a,n,i+1,j,sum_val), recursive(a,n,i,j+1,sum_val)) + a[i][j];
    }
    return sum_val;
}

int main() {
    int n;
    cin>>n;
    // int sum[n][n];
    // vector<vector<int> > values( n , vector<int> (n, 0));
    vector<vector<int> > values( n );
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            values[i].push_back(val);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<values[i][j]<<" ";
        }cout<<endl;
    }
    int sum=values[0][0];
    cout<<sum<<endl;
    sum=recursive(values, n, 1, 1, sum);
    cout<<sum<<endl;
	return 0;
}/********************************
#include <iostream>
#include <vector>
int main() {
	// Vector of vectors
	std::vector<std::vector<int>> matrix;
	for(int i=0;i<3;++i) {
		//Create a vector 
		std::vector<int> row;
		for(int j=0;j<3;++j){
			int value;
			std::cin >> value;
			row.push_back(value);
		}
		//Push the row in matrix
		matrix.push_back(row);
	}
	std::cout << "Vector contents are: \n";
	for(int i=0;i<3;++i) {
		for(int j=0;j<3;++j){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
vector< vector<int> > vvi;
Then you need to use two iterators to traverse it, the first the iterator of the "rows", the second the iterators of the "columns" in that "row":
//assuming you have a "2D" vector vvi (vector of vector of int's)
vector< vector<int> >::iterator row;
vector<int>::iterator col;
for (row = vvi.begin(); row != vvi.end(); row++) {
    for (col = row->begin(); col != row->end(); col++) {
        // do stuff ...
    }
}********************************/
