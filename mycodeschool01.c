//linked list : Inserting a node at beginning
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Node;
    struct Node *link;
};
struct Node *head;//global variable, can be accessed anywhere

void Insert(int x)
{
    Node(*temp) = (Node)malloc(sizeof(struct Node));
    // (*temp).data = x;
    temp->data = x;
    temp->link = NULL;
    return temp;
}
void print();
int main(){
    head = NULL;// empty list;
    printf("enter numbers you want in your list?\n");
    int i,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("number of your list\n");
        scanf("%d",&x);
        Insert(x);
        print();
    }
}
