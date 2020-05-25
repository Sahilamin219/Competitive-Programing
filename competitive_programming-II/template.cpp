#include <bits/stdc++.h>
using namespace std;
// void mergesort(){};
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
Node* createnode(int value){
	// Node *node = (Node*)malloc(sizeof(Node));
	Node* tmp = new Node();
	tmp->data=value;
	tmp->left=nullptr;
	tmp->right=nullptr;
	// Node tmp;
	// tmp.data=value;
	// tmp.left=nullptr;
	// tmp.right=nullptr;
	return tmp;
}
Node Reverse(Node head) {
    Node temp = head;
    Node newHead = head;
    while (temp != null) {
        Node prev = temp.prev;
        temp.prev = temp.next;
        temp.next = prev;
        newHead = temp;
        temp = temp.prev;
    }
    return newHead;
}
DoublyLinkedListNode{
     int data;
     DoublyLinkedListNode* next;
     DoublyLinkedListNode* prev;
 };
 static DoublyLinkedListNode reverse(DoublyLinkedListNode curr) {
    DoublyLinkedListNode temp = curr.next;
    curr.next = curr.prev;
    curr.prev = temp;
    return temp == null ? curr : reverse(temp);
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cout<<string(5, '.') + "lolcat"<<"\n";
	// int arr[7]={2,3,4,1,5,7,6};
	// // mergesort(arr);	
	// map<char,int> m;
	// m['o']=2;
	// cout<<m['o'];
	// m['o']=3;
	// cout<<m['o'];

	return 0;
}