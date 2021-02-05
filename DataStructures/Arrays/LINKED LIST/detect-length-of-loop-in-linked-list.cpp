#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
void push(Node** head,int new_data)
{

    Node* n=new Node();
    n->data=new_data;
    n->next=*head;
    *head=n;

}

int get_count(Node* head)
{

    int count=1;
    Node* temp=head;
    while(temp->next!=head)
    {

        count++;
        temp=temp->next;


    }
    return count;
}

int dtect_loop_and_find_lenght(Node* head)
{

    Node* first=head;
    Node* last=head;
    while(first && last && last->next)
    {

        first=first->next;
        last=last->next->next;
    }
    if(first==last)
    {

        return get_count(first);
    }
    ///0 indicates that there is no loop
    return 0;
}

int main()
{

    Node* head=NULL;
    push(&head,12);
    push(&head,2);
    push(&head,32);
    push(&head,13);
    push(&head,72);
    push(&head,19);

///creating the loop
head->next->next=head;



    cout<<"Length of the detected loop is"<<"\n";
    cout<<dtect_loop_and_find_lenght(head);
}
