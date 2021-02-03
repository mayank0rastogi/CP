

#include<bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node* next;
};
void insert_new_node_at_the_beginning(Node** head,int new_data)
{

    Node* n=new Node();///creating dynamically the new node

    n->data=new_data;///initialize the data to new_node

    n->next=*head;///new node is pointing to which head is currently pointing

    *head=n;///now  head contains the address of new node
    ///so head is pointing to newly inserted node at the beginning
}

void insert_after(Node* prev_node,int new_data)
{
    if(prev_node==NULL)
    {

        cout<<"The Given Node Cannot be NULL." ;
        return;
    }

    Node* n=new Node();

    n->data=new_data;
    n->next=prev_node->next;
    prev_node->next=n;

}

void append_last(Node** head,int new_data)
{

    Node* n=new Node();
    Node* temp=*head;
    n->data=new_data;

    n->next=NULL;///to make a last node as NULL
    if(*head==NULL)
    {

        *head=n;
        return;
    }
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    temp->next=n;
}


void printlist(Node* node)
{

    while(node !=NULL)
    {

        cout<<"{"<<" "<<node->data<<"}->";

        node=node->next;

    }
    cout<<"NULL";

}
int main()
{

    Node* head=NULL;
    cout<<"<<<___---SINGLY LINKED LIST OPERATIONS---___>>>"<<endl;
    cout<<"\n";
    append_last(&head,6);

    insert_new_node_at_the_beginning(&head,7);
   insert_new_node_at_the_beginning(&head,1);

   append_last(&head,4);
   insert_after(head->next,8);
   ///insert_after(head->next->next->next,8);
   printlist(head);

   return 0;

}
