#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

};

void middle_of_the_element(Node* head)
{
    struct Node* first=head;
    struct Node* last=head;

    if(head!=NULL)
    {
       while(last!=NULL && last->next!=NULL)
       {

           last=last->next->next;
           first=first->next;
       }
        cout<<"The middle element is \n"<<first->data;
    }

}

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
int main()
{
    Node* head= NULL;
    cout<<"<<<___--GET THE MIDDLE Element FROM THE LIST--___>>>"<<endl;
    insert_at_the_begin(&head,2);
    insert_at_the_begin(&head,4);
    insert_at_the_begin(&head,3);
    insert_after(&head,10);
    insert_at_the_begin(&head,1);
    append_after(head->next,9);

    middle_of_the_element(head);


}
