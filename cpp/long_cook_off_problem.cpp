long cook & cook off problem
mycode
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 0x3f3f3f3f 
using namespace std;
typedef long long ll;
//return day of week in 0=sunday,1=monday etc...
int dayofweek(int d, int m, ll y)
{ 
	static int t[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	y -= m < 3; 
	return ( y + y / 4 - y / 100 + 
			y / 400 + t[m - 1] + d) % 7; 
}
int main(){
    FAST;
    int arr[400];// to store count of intersection for left out years to be added in the end
    ll t;
    cin>>t;
    while(t--){
        ll count=0;//to print the answer 
        ll store_y1;
        ll m1,y1;
        cin>>m1>>y1;
        store_y1=y1;
        ll m2,y2;
        cin>>m2>>y2;
        ll store_y2=y2;
        int day;
        int k=0;
        if(y1==y2){
            if(m1>2){
                k=1;
            }
            else if(m1==1 && m2==1){
                k=1;
            }
        }
        else if(y2-y1==1){
            if(m1>2){
                if(m2<2){
                    k=1;
                }
            }
        }
        int global=0;//jsut to count 400 years have completed or not
        int q=0;int r=0;
        if(m2<2){//because only feb month can have intersection
            y2--;//skip the last year
        }
        if(m1>2){//because only feb month can have intersection
            y1++;//skip the first year
        }
        r=((y2-y1)%400);// for left out years i.e y1=1,y2=2021, then left out year is 20years
        bool flag=0;// to check if differnce is greater than 400
        if(abs(y2-y1)>400){
            q=(abs(y2-y1))/400;
            flag=1;
        }
        if(flag==1 && k==0){
            while(global<400){
                bool skip=0;
                day=dayofweek(1,2,y1);
                if(y1%400==0 || (y1%4==0 && y1%100!=0)){
                    if(day==6){
                        count++;
                    }
                }
                else{
                    if(day==6 || day==0){
                        count++;
                    }
                }
                arr[global]=count;
                y1++;global++;
            }
        }
        // count = (abs(y2-y1)/400)*101;
        else if(flag==0 && k==0){
            bool check=1;
            while(check){
                day=dayofweek(1,2,y1);
                if(y1==y2){
                    check=0;
                }
                bool skip=0;
                if(y1%400==0 || (y1%4==0 && y1%100!=0)){
                    if(day==6){
                        count++;
                    }
                }
                else{
                    if(day==6 || day==0){
                        count++;
                    }
                }
                y1++;
            }
        }
        if(k==1){
            cout<<0<<endl;
        }
        else if(flag==1){
            count=(count)*q+arr[r];
            cout<<count<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}
---------------------telegramboycode--------------------------
#include<bits/stdc++.h>
using namespace std;
bool checkYear(long long int year)  
{  
    // If a year is multiple of 400,  
    // then it is a leap year  
    if (year % 400 == 0)  
        return true;  
  
    // Else If a year is muliplt of 100,  
    // then it is not a leap year  
    
  
    // Else If a year is muliplt of 4,  
    // then it is a leap year  
    else if (year % 4 == 0&&(year%100)!=0)  
        return true;  
    return false;  
}  
  
int main() {
 // your code goes here
 long long int t;
 cin>>t;
 while((t--)>0)
 {
     long long int m1,m2,y1,y2;
     cin>>m1>>y1;
     cin>>m2>>y2;
     long long int count = ((y2-y1)/400)*101;
     long long int k = (y2-y1)/400;
     y1 = y1+(400*k);
     //cout<<count;
     long long int answer=count;
     long long int noofleap = 0;
     long long int abc=4;
     long long int y1_mod = y1%400;
     noofleap = ((y1_mod-1)/4)-((y1_mod-1)/100)+((y1_mod-1)/400);
     long long int days = 0;
     days = (y1_mod-1-noofleap)*365 + noofleap*366;
     abc += days%7;
     abc = abc%7;
     if(y1==y2)
     {
     if(m1<=2&&m2>=2)
     {
         //cout<<abc;
         bool chk = checkYear(y1);
         if(abc==6&&chk==true)
         {
             answer+=1;
         }
         if((abc==6||abc==0)&&chk==false)
         {
             answer+=1;
         }
         
     }
     }
     else
     {
         if(m1<=2)
     {
         //cout<<abc;
         bool chk = checkYear(y1);
         if(abc==6&&chk==true)
         {
             answer+=1;
         }
         if((abc==6||abc==0)&&chk==false)
         {
             answer+=1;
         }
         
     }
         
     
     if(m2<2)
     y2-=1;
     for(long long int i=y1+1;i<=y2;i++)
     {
         //cout<<"Am I here";
             //cout<<"i="<<i<<"\t";
             bool res = checkYear(i-1);
             bool res2 = checkYear(i);
             if(res==true)
             {
                 abc+=2;
                 abc=abc%7;
             }
             else
             {
                 abc+=1;
                 abc=abc%7;
             }
             //cout<<"abc="<<abc<<"\t";
             if(abc==6&&res2==true)
             {
                 answer+=1;
             
             }
             else if((abc==6||abc==0)&&res2==false)
         
             {
                 answer+=1;
             }
             //cout<<"answer till now="<<answer<<"\t";
         }
     }
         cout<<answer<<endl;
         
         
         
     }
 
 
 return 0;
}
