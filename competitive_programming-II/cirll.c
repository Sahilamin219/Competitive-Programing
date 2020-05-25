#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
   
//Represents the node of list.  
struct node{  
    int data;  
    struct node *next;  
};  
   
//Declaring head and tail pointer as null.  
struct node *head = NULL;  
struct node *tail = NULL;  
int size = 0;  
   
//This function will add the new node to the list.  
void add(int data){  
    //Create new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    //Checks if the list is empty.  
    if(head == NULL){  
        //If list is empty, both head and tail would point to new node.  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }else {  
        //tail will point to new node.  
        tail->next = newNode;  
        //New node will become new tail.  
        tail = newNode;  
        //Since, it is circular linked list tail will point to head.  
        tail->next = head;  
    }  
  size++;  
}  
   
//This function will add the new node at the middle of the list.  
void addInMid(int data){  
    int i;  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    //Checks if the list is empty.  
    if(head == NULL){  
        //If list is empty, both head and tail would point to new node.  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }  
    else{  
           struct node *temp, *current = NULL;  
        //Store the mid-point of the list  
        int count = (size % 2 == 0) ? (size/2) : ((size+1)/2);      
        //temp will point to head  
        temp = head;  
        for(i = 0; i < count; i++){  
            //Current will point to node previous to temp.  
            current = temp;  
            //Traverse through the list till the middle of the list is reached  
            temp = temp->next;  
        }  
        //current will point to new node  
        current->next = newNode;  
        //new node will point to temp  
        newNode->next = temp;  
   }  
    size++;  
}  
   
//This function will display the nodes of circular linked list  
void display(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
         do{  
          //Prints each node by incrementing pointer.  
            printf("%d ", current->data);  
            current = current->next;  
        }while(current != head);  
        printf("\n");  
    }  
}  
      
int main()  
{  
  //Adds data to the list  
    add(1);  
    add(2);  
    add(3);  
    add(4);  
      
    printf("Original list:\n ");  
    display();  
      
    //Inserting node '5' in the middle  
    addInMid(5);  
    printf("Updated List:\n ");  
    display();  
      
    //Inserting node '6' in the middle  
    addInMid(6);  
    printf("Updated List:\n ");  
    display();  
     
   return 0;  
}  

// Output:
// Original list: 
// 1 2 3 4
// Updated List: 
// 1 2 5 3 4
// Updated List: 
// 1 2 5 6 3 4
