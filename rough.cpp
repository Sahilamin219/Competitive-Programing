/*#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())

#define random_shuffle(...) shuffle(__VA_ARGS__, rng)
#define rand() rng()

using namespace std;

inline int nxt() {
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    long double xa, ya, xf, yf;
    cin >> xa >> ya >> xf >> yf;
    cout << setprecision(10) << fixed;
    cout << hypotl(xa - xf, ya + yf) << "\n";

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main( void ) {
    int N;
    int b = 0;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++)
        cin >> A[i];

    int seen[N];
    for(int i = 0; i < N; i++)
        seen[i] = 0;

    for(int i = 0; i < N; i++) {
        if(seen[i] == 0) {
            int count = 0;
            int a = 0;
            for(int j = i; j < N; j++)
                if(A[j] == A[i]) {
                    count += 1;
                    a = count-1;
                    b = b + a;
                    seen[j] = 1;
                }
        }
    }
    cout << b << endl;
    return 0;
}

//------------------- ** STRING THEORY **
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int t;cin>>t;
    t=t+1;
    while(t--){
        string a;
        char temp;
        string str;
        getline(cin,str);
        std::string::iterator it;
        for (it=str.begin(); it!=str.end(); ++it){
            char b = *it;
            ++it;
            char c = *it;
            if(b != c){
                a.push_back(b);
                a.push_back(c);
            }
            else{
                it--;
           }
        }
        sort(a.begin(), a.end());
        cout << a << endl;
    }
    return 0;
}
{
//Initial Template for C++
#include <iostream>
using namespace std;
class Person
{
    string name;
    int number;
    int height;
    public:
    Person(){}
    Person(string iname,int inumber, int iheight)
    {
        name=iname;
        number=inumber;
        height=iheight;
    }
    
    void display()
    {
        cout<<name<<" "<<number<<" "<<height<<endl;
    }
    
    void friend swapper(Person **obj1, Person **obj2);
    
};
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string name1;
        int number1, height1;
        cin>>name1;
        cin>>number1;
        cin>>height1;
        
        string name2;
        int number2, height2;
        cin>>name2;
        cin>>number2;
        cin>>height2;
        
        
        
        Person *p1=new Person(name1,number1,height1);
        Person *p2=new Person(name2,number2,height2);
        p1->display();
        p2->display();
        swapper(&p1,&p2);
        p1->display();
        p2->display();
    }
    return 0;
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to swap two objects **obj1 and **obj2
void swapper(Person **obj1, Person **obj2)
{
    //Your code here
    //Person *p = *obj1;
    //*obj1 = *obj2;
    //*obj2 = p;
    Person obj;
    obj=**obj1;
    **obj1=**obj2;
    **obj2=obj;
}