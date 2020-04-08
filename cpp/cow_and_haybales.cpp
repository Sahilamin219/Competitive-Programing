At any point, it is optimal to move a haybale in the closest pile from pile 1 to the left. So, for every day, we can loop through the piles from left to right and move the first haybale we see closer. If all the haybales are in pile 1

at some point, we can stop early.

Time Complexity: O(n⋅d)

Solution

#include <iostream>
using namespace std;

int N,D,a[105];

int main(){
  int T; cin>>T;
  while (T--){
    cin>>N>>D;
    for (int i=1;i<=N;i++)
      cin>>a[i];
    while (D--){ //loop over D days
      for (int i=2;i<=N;i++)
	if (a[i]>0){ //move closest haybale over
	  a[i]--;
	  a[i-1]++;
	  break;
	}
    }
    cout<<a[1]<<endl;
  }
}

Alternative O(n) Solution:

#include <iostream>
using namespace std;

int N,D,a[105],ans;

int main(){
  int T; cin>>T;
  while (T--){
    cin>>N>>D;
    for (int i=1;i<=N;i++)
      cin>>a[i];
    for (int i=2;i<=N;i++){
      int move=min(a[i],D/(i-1)); //number of haybales we can move from pile i to pile 1
      a[1]+=move; //update pile 1
      D-=move*(i-1); //update remaining days
    }
    cout<<a[1]<<endl;
  }
}
