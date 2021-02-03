#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

void insert_at_the_begin(Node **head,int n_data)
{
    ///initialise the new node
    Node* n=new Node();
    n->data=n_data;
    n->next=*head;
    *head=n;

}

void insert_after(Node* prev,int n_data)
{

    if(prev==NULL)
    {

        cout<<"Push node before to inserted it into a position";
        return;
    }
    ///1-2-3-4-NULL
    Node* n=new Node();
    n->data=n_data;
    n->next=prev->next;
    prev->next=n;


}

int get_count(Node* head)
{

    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {

        count++;
        temp=temp->next;
    }
    return count;
}
 void append_last(Node** head,int n_data)
 {
     Node* n =new Node();

     n->data=n_data;n->next=NULL;
     if(*head==NULL)
     {

         *head=n;
         return;

     }
     Node* temp=*head;
     while(temp->next!=NULL)
     {
         temp=temp->next;

     }
     temp->next=n;

 }

 void printlist(Node* head)
 {

     Node* temp=head;
     while(temp!=NULL)
     {

         cout<<temp->data<<" ";
         temp=temp->next;
     }
 }






int main()
{

    Node* head= NULL;
    cout<<"<<<___--COUNT THE NO OF NODE IN THE SINGLY LINKED LIST--___>>>"<<endl;
    insert_at_the_begin(&head,2);
    insert_at_the_begin(&head,4);
    insert_at_the_begin(&head,3);
    append_last(&head,10);
    insert_at_the_begin(&head,1);
    insert_after(head,9);
    printlist(head);
    cout<<"\nNo of nodes in the linked list: ";
    cout<<get_count(head);


return 0;
}
