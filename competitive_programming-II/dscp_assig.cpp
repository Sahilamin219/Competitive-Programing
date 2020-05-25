// solution 4
#include <bits/stdc++.h>
using namespace std;
int len(int a[], int n){
	int ans=0;
	int sum=0;
	map<int,int> m;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum==0){
			ans=i;
		}
		if(m.find(sum)!=m.end()){
			ans=max(ans,i);
		}
		else{
			m[sum]=i;
		}
	}
	return ans;
}
int main(){
	// find subarray with max length and sum 0
	int a[5]={1,23,-23,3,-3};
	int n=5;
	int l=len(a,n);
	cout<<l<<"\n";
}
/*
class matrics
	{
		int l,m,n;
		int A[100][100];
		int B[100][100];
		int C[100][100];
		int D[100][100];
		int M[100][100];

	public:
		void get_data();
		void calculate_C();
		void calculate_D();
		void calculate_M();
		
	};
void matrics::get_data(){
	cout<<"Enter l"<<"\n";
	cin>>l;
	cout<<"Enter m"<<"\n";
	cin>>m;
	cout<<"Enter n"<<"\n";
	cin>>n;
	cout<<"matrics A"<<"\n";
	for(int i=0;i<l;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	cout<<"matrics A"<<"\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>B[i][j];
		}
	}
}
void matrics::calculate_C(){
	if(l==m==n){
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				C[i][j]=A[i][j]+B[i][j];
			}
		}
	}
	else{
		cout<<"invalid operation"<<"\n";
	}
}
void matrics::calculate_D(){
	if(l==m==n){
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				D[i][j]=A[i][j]-B[i][j];
			}
		}
	}
	else{
		cout<<"invalid operation"<<"\n";
	}
}
void matrics::calculate_M(){
	for (int i=0; i<l; i++)
    {
        for (int j=0; j<n; j++)
        {
            M[i][j]=0;
            for (int k=0; k<l; k++)
            {
                M[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
 int main()
{
    matrics x;
    x.get_data();
    x.calculate_C();
    x.calculate_D();
    x.calculate_M();
    return 0;
}

#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j,k;
public:
    void Mult();
    void InputMatrix();
    void OutputMatrix();
};
void Matrix::InputMatrix()
{
    cout << "Enter the values for the first matrix";
    cout << "\n Matrix 1, Row 1:";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the values for the second matrix";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cin >> b[i][j];
        }
    }
}
void Matrix::Mult()
{
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            c[i][j]=0;
            for (k=0; k<3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void Matrix::OutputMatrix()
{
    cout << "The Resultant Matrix is: \n";
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
}
int main()
{
    Matrix x;
    x.InputMatrix();
    x.Mult();
    x.OutputMatrix();
    system ("pause");
    return 0;
}
*/