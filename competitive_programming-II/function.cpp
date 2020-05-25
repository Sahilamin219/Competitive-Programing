#include <bits/stdc++.h>
using namespace std;
// #define SIZE 10
// class Queue
// {
//     int a[SIZE];
//     int rear; 
//     int front;
//     public:
//     Queue()
//     {
//         rear = front = -1;
//     }
//     void enqueue(int x);     
//     int dequeue();
//     void display();
// };
// void Queue :: enqueue(int x)
// {
//     if(front == -1)front++;
//     if( rear == SIZE-1)cout << "Queue is full";
//     else a[++rear] = x;
// }
// int Queue :: dequeue()
// {
//     return a[++front]; 
// }
// void Queue :: display()
// {
//     for(int i = front; i <= rear; i++)cout << a[i]<<endl;
// }
// int main()
// {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(100);
//     q.enqueue(1000);
//     q.enqueue(1001);
//     q.enqueue(1002);
//     q.dequeue();
//     q.enqueue(1003);
//     q.dequeue();
//     q.dequeue();
//     q.enqueue(1004);
//     q.display();
//     return 0;
// }
// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
// { 
// 	if (n == 1) 
// 	{ 
// 		cout<<"Move disk 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl; 
// 		return; 
// 	} 
// 	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
// 	cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl; 
// 	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
// }
// int main() 
// { 
// 	int n = 4; // Number of disks 
// 	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods 
// 	return 0; 
// } 
// bool isOperator(char c) 
// { 
// 	return (!isalpha(c) && !isdigit(c)); 
// } 
// int getPriority(char C) 
// { 
// 	if (C == '-' || C == '+') return 1; 
// 	else if (C == '*' || C == '/') return 2; 
// 	else if (C == '^') return 3; 
// 	return 0; 
// } 
// string infixToPostfix(string infix) 
// { 
//     infix = '(' + infix + ')'; 
//     int l = infix.size(); 
//     stack<char> char_stack; 
//     string output; 
//     for (int i = 0; i < l; i++) { 
//         if (isalpha(infix[i]) || isdigit(infix[i])) 
//             output += infix[i]; 
//         else if (infix[i] == '(') 
//             char_stack.push('('); 
//         else if (infix[i] == ')') { 
//             while (char_stack.top() != '(') { 
//                 output += char_stack.top(); 
//                 char_stack.pop(); 
//             } 
//             char_stack.pop();  
//         }
//         else { 
//             if (isOperator(char_stack.top())) { 
//                 while(getPriority(infix[i])<=getPriority(char_stack.top())){ 
//                     output += char_stack.top(); 
//                     char_stack.pop(); 
//                 } 
//                 char_stack.push(infix[i]); 
//             } 
//         } 
//     } 
//     return output; 
// } 
// string infixToPrefix(string infix) 
// { 
// 	int l = infix.size(); 
// 	reverse(infix.begin(), infix.end()); 
// 	for (int i = 0; i < l; i++) { 
// 		if (infix[i] == '(') { 
// 			infix[i] = ')'; 
// 			i++; 
// 		} 
// 		else if (infix[i] == ')') { 
// 			infix[i] = '('; 
// 			i++; 
// 		} 
// 	} 
// 	string prefix = infixToPostfix(infix); 
// 	reverse(prefix.begin(), prefix.end()); 
// 	return prefix; 
// }
// int main() 
// { 
// 	string P = "A+(B*C-(D/E*F)*G)*H"; 
// 	cout<<infixToPrefix(P)<<endl; 
// 	return 0; 
// } 

// struct node
// {
// 	int data;
// 	struct node* next;
// };
// struct node *head = nullptr;  
// struct node *tail = nullptr;  
// int list_length = 0;  
// void addnode(int value){
// 	node* p = new node();
// 	p->data=value;
// 	if(head==nullptr){
// 		head=p;
// 		tail=p;
// 		p->next=head;
// 	}
// 	else{
// 		tail->next=p;
// 		tail=p;
// 		tail->next=head; 
// 	}
// 	list_length++;
// }
// void addInMid(int value){
// 	node* p = new node();
// 	p->data=value;
// 	if(head==nullptr){
// 		head=p;
// 		tail=p;
// 		p->next=head;
// 	}
// 	else{
// 		int len = (list_length % 2 == 0) ? (list_length/2) : ((list_length+1)/2); 
// 		struct node* temp=head;
// 		for(int i=0;i<len-1;i++){
// 			temp=temp->next;
// 		}
// 		struct node* k=temp->next;
// 		temp->next=p;
// 		p->next=k->next;
// 	}
// 	list_length++;
// }
// void display(){  
//     struct node *current = head;  
//     if(head == nullptr){  
//         cout<<"Empty List"<<"\n";  
//     }  
//     else{
//     	cout<<current->data<<" ";
//     	current=current->next;
//         while(current!=head){
//             cout<<current->data<<" ";  
//             current = current->next;  
//         }  
//         cout<<"\n";  
//     }  
// }   
// int main()  
// {  
//     addnode(1);  
//     addnode(2);  
//     addnode(4);  
//     addnode(5);  
//     cout<<"Original list:\n"; 
//     display();
//     addInMid(3);  
//     cout<<"Updated List:\n";  
//     display();  
//    return 0;  
// }