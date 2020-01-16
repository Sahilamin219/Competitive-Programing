//**Given an array arr of N integers. Find the contiguous sub-array with maximum sum.**
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fun(int* n,int* a[]);
int main() {
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a[n]=0;
        fun(int*n,int*a[n]);
    }
  	return 0;
}

int fun(int n,int a[]){
    int b[n];
    int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                for(int j=i+1;j<n;j++){
                    if(a[j]> abs(a[i])){
                        a[j]=a[j]-abs(a[i]);
                        break;
                    }
                    else{
                        if(i==0){
                            // cout<<a[i]<<endl;
                            return a[i];
                        }
                        else{
                            // cout<<sum<<endl;
                            return sum;
                        }
                    }
                }
            }
            else{
                b[i]=a[i];sum += b[i];
            }
        }
        // cout<<sum<<endl;
        return sum;
}

Live Demo

#include <stdio.h>

/* function to generate and return random numbers */
int * getRandom( ) {

   static int  r[10];
   int i;

   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;

   p = getRandom();
	
   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
