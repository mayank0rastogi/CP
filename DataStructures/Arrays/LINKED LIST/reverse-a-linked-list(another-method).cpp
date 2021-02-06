#include<bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node* next;
    Node(int data)
    {

        this->data=data;
        Node* next= NULL;
    }
};

class reverselinked
{
    public:
    Node* head;
    reverselinked()
    {
        head=NULL;
    }


    void reverse()
    {

        ///initialize current ,prev,and next pointer
        Node*curr=head;
        Node* prev=NULL;
        Node* next=NULL;

        while(curr!=NULL)
        {

            ///means till current is not pointing to last node
            next=curr->next;///stores addr of current next node address
            ///reverse curr node pointer
            curr->next=prev;
            ///increase pointer ahead
            prev=curr;
            curr=next;
        }
        head=prev;
    }

    void print()
    {

        Node* temp =head;
        while(temp!=NULL)
        {

            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }


    void insert(int data)
    {

        Node* n=new Node(data);
        n->next=head;
        head=n;
    }
};

int main()
{
    reverselinked rl;
    rl.insert(12);
    rl.insert(13);
    rl.insert(14);
    rl.insert(15);
    rl.insert(16);
    cout<<"linked list before reversing: \n";

    rl.print();

    rl.reverse();
    cout<<"\nafter reversing linked list: ";
    rl.print();
    return 0;

}
