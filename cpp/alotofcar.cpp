#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i,j,temp;
		cin>>m>>n;
		char s;
		int arr[300][300];
		int arr1[300][2];
		//int arr2[m];
		int count=0;
		int flag=0;
		//int flag1=0;
		int currentL=0;
		int lastL=0;
		int current;
		
		for(i=0;i<m;i++)
		 {
		 	arr1[i][0]=n;
		 	arr1[i][1]=-1;
		 //	arr2[i]=0;
		 }
		 
		for(i=0;i<m;i++)
		{
	     //flag1=0;
		 for(j=0;j<n;j++)
		  {
		  	cin>>s;
		  	if(s=='P')
		  	arr[i][j]=1;
		  	else 
		  	arr[i][j]=0;
		  	
		  	if(arr1[i][0]==n&&s=='P')
		  	 {
		  	   arr1[i][0]=j;
		  	   arr1[i][1]=j;
		  	   //flag1=1;
		     }
		     
		  	if(arr1[i][1]!=-1&&s=='P')
		  	   arr1[i][1]=j;
		  	
		  	if(flag==0&&s=='P')
		  	{
		  	 currentL=i;
		  	 flag=1;
		  	}
		  	
		    if(s=='P')
		     {
		     	lastL=i;
		     }
		  }
		  //if(flag1==0)
		  // arr2[i]=1;
		}
		  
		  if(currentL%2==0)
		   current=arr1[currentL][0];
		  else
		   current=arr1[currentL][1];
		   
		   
		  //for(i=0;i<m;i++)
		  // cout<<arr1[i][0]<<" "<<arr1[i][1]<<endl;
		   
		  //cout<<"currentL="<<currentL<<" current="<<current<<" lastL="<<lastL<<endl;
		   
		  for(i=currentL;i<m-1;i++)
		   {
		   	 if(i%2==0)
		   	  {
		   	  	if(arr1[i][0]!=n||arr1[i+1][0]!=n)
		   	  	{
		   	  		
			   	  	temp=max(arr1[i][1],arr1[i+1][1]);
			   	  	if(temp<current)
			   	  	 temp=current;
			   	  	count=count+temp-current;
			   	  	current=temp;
		   	  	}
		   	    	
		   	  }
		   	 else
		   	 {
		   	 	if(arr1[i][0]!=n||arr1[i+1][0]!=n)
		   	 	{
		   	 	temp=min(arr1[i][0],arr1[i+1][0]);
		   	 	if(temp>current)
			   	  temp=current;
		   	 	count=count+current-temp;
		   	 	current=temp;
		   	 	}
		   	 }
		   	 //cout<<count<<" ";
		   }
		   
		   if(i%2==0&&arr1[i][0]!=n)
		    count=count+arr1[i][1]-current;
		   else if(i%2==1&&arr1[i][0]!=n)
		    count=count+current-arr1[i][0];
		    
		   //cout<<count<<" ";
		   count=count+lastL-currentL;
		   cout<<count<<endl;
	}
	return 0;
}
