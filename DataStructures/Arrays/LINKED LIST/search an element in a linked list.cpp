
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

void insert_at_the_begin(Node** head,int n_data)
{
    Node* n= new Node();
    n->data=n_data;
    n->next=*head;
    *head=n;

}
void insert_after(Node** head,int n_data)
{
    Node* n=new Node();
    n->data=n_data;
    n->next=NULL;
    if(*head=NULL)
    {

        *head=n;
    }
    Node* temp=*head;
    while(temp!=NULL)
    {

        temp=temp->next;
    }
    temp->next=n;

}

void append_after(Node* prev,int n_data)
{
    if(prev==NULL)
     {

         cout<<"Given No can not Null";
         return;
     }

    Node* n=new Node();
    n->data=n_data;
    n->next= prev->next;
    prev->next=n;



}
 bool search(Node* head,int x)
 {
     Node* temp=head;
     while(temp!=NULL)
     {

         if(temp->data==x)
         {
            return true;


         }
         temp=temp->next;

     }
     return false;

 }




int main()
{
    int x;
cin>>x;

    Node* head= NULL;
    cout<<"<<<___--SEARCH AN ELEMENT IN THE SINGLY LINKED LIST--___>>>"<<endl;
    insert_at_the_begin(&head,2);
    insert_at_the_begin(&head,4);
    insert_at_the_begin(&head,3);
    insert_after(&head,10);
    insert_at_the_begin(&head,1);
    append_after(head,9);
    ///printlist(head);
    cout<<"\nNo of nodes in the linked list: ";
    ///cout<<get_count(head);
    search(head,x)?cout<<"yes":cout<<"NO";
    return 0;

}
