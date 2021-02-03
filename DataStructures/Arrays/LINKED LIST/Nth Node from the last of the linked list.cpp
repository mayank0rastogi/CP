
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

void append_after(Node* prev,int n_data)
{
    if(prev==NULL)
     {

         cout<<"Must insert Some Node it  can't not Null";
         return;
     }

    Node* n=new Node();
    n->data=n_data;
    n->next= prev->next;
    prev->next=n;



}

void getNthFromLast(Node* head,int x)
 {
     int length=0;
     Node* temp=head;
     while(temp->next!=NULL)
           {
              length++;
     temp=temp->next;

           }

           ///check whether length is not less than n so
           if(length<x)
           {

               return;
           }

           for(int i=1;i<length-x+1;i++)
           {
               temp=temp->next;


           }
           cout<<"Processed element in the linked list is "<<"\n"<<temp->data;
           return;
 }


void printlist(Node* head)
{

    Node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    int x;
   cin>>x;

    Node* head= NULL;
    cout<<"<<<___--NTH NODE FROM THE LAST--___>>>"<<endl;
     insert_at_the_begin(&head,2);
    insert_at_the_begin(&head,4);
    insert_at_the_begin(&head,3);
    insert_after(&head,10);
    insert_at_the_begin(&head,1);
    append_after(head->next,9);
    cout<<"printing the linked list "<<"\n";
    printlist(head);
///cout<<"error happens after that"<<endl;

  getNthFromLast(head,x);
    return 0;

}
