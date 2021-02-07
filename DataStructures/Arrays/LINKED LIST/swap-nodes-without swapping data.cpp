#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};

///function to swap two nodes x and y in linked list by changing links
void swapnodes(Node** head,int x,int y)
{
///nothing to do if x and y are same
    if(x==y)
    {

        return;
    }

    ///search for x keep track prevx and currx
    Node* prevx=NULL;
    Node* currx=*head;
    while(currx && currx->data!=x)///check whether any node is exist and
    ///if any node exist than its data !=x
    {

        prevx=currx;
        currx=currx->next;
    }

    ///search for y keep track prevx and currx
    Node* prevy=NULL;
    Node* curry=*head;
    while(curry && curry->data!=y)///check whether any node is exist and
    ///if any node exist than its data !=x
    {

        prevy=curry;
        curry=curry->next;
    }

    ///if either x or y is not present ,nothing to do
     if(currx==NULL || curry==NULL)
     {

         return;
     }
     ///if x is not head of linked list
     if(prevx!=NULL)
     {

         prevx->next=curry;
     }
     else{
        *head=curry;

     }

     ///if y is not head of linked list
     if(prevy!=NULL)
     {

         prevy->next=currx;
     }
     else{
        *head=currx;

     }

     ///swap  next pointers
     Node* temp=curry->next;
     curry->next=currx->next;
     currx->next=temp;


}
void push(Node** head,int new_data)
{
  Node* n =new Node();
  n->data=new_data;
  n->next=*head;
  *head=n;

}

void printlist(Node* node)
{

    while(node!=NULL)
    {
      cout<<node->data<<" ";
      node=node->next;

    }
}

int main()
{

    Node* head=NULL;
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout<<"linked list before swapping nodes"<<endl;
    printlist(head);
    swapnodes(&head,3,4);
    cout<<"\nlinked list after swapping nodes"<<endl;
    printlist(head);
    return 0;

}
