/******************************************************************************

//Circular Queue using linked list//

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int key;
    int data;
    Node* next;
    
    Node()
    {
        data=0;
        key=0;
        next=NULL;
        
    }
    
    Node(int k,int d)
    {
        key=k;
        data=d;
        next=NULL;
    }
};
class circularQueue
{   
    public:
    Node* front;
    Node* rear;
    circularQueue()
    {
       front=NULL;
       rear=NULL;
    }
    
    bool isEmpty()
    {
        if(front==NULL && rear==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool isFull()
    {
        if(rear=front)
        {
            return true;
            
        }
        else
        {
            return false;
        }
    }
    
    bool checkifnodeexits(Node* n)
    {
        Node* temp=front;
        bool exist=false;;
        do{//use do while loop here because we neeed to run complete raversal at once after occurence of 
        //2nd times of front it will stop
            if(temp->key==n->key);
            {
                exist=true;
                break;
            }
            temp=temp->next;
        }while(temp!=front);
       return exist;
    }
     void enqueue(Node* n)
     {
         Node* temp=NULL;
         if(isEmpty())
         {
             front=n;
             rear=n;
             cout<<"Queue enqueued successflly"<<endl;
         }
         else 
         {
             if(checkifnodeexits(n))
             {
                 cout<<"node exist with key value"<<endl;
                 cout<<"try with another key and its value"<<endl;
             }
             
             else{
                 rear->next=n;
                 rear=n;
                 n->next=front;
                 cout<<"Queue enqueued successflly"<<endl;
             }
         }
     }
     
     Node* dequeue()
     {
         Node* temp=NULL;
         if(isEmpty())
         {
             cout<<"QUEUE underflow"<<endl;
         }
         
        else if(front==rear)
         {
             temp=front;
             front=NULL;
             rear=NULL;
            return temp;
             
         }
         
         else
         {
             temp=front;
             front=front->next;
             //we make a link of rear pointer to pointing to newly front node bcoz
             //at present it points to NULLsoo for this rear poiting to  front
             rear->next=front;
             return temp;
         }
     }
     
     int count()
     {
         Node* temp=front;
         int count=0;
         
         while(temp!=NULL)
         {
             count++;
             temp=temp->next;
         }
         return count;
     }
     
     void display()
     {
         Node* temp=front;
         while(temp->next!=NULL)
         {
             cout<<"("<<temp->key<<","<<temp->data<<")";
             temp=temp->next;
         }
         cout<<endl;
     }
   
};

int main()
{
    circularQueue q1;
    int option,key,data;
    
    do
    {
    cout<<"\n<<__--ENTER THE PROGRAM OF Circular QUEUE using Linked List!!!--__>>\n";
     cout<<"\nEnter the option which operation you want to perform"<<endl;
     cout<<"0: enter 0 to exit from the program"<<endl;
     cout<<"1.enqueue():"<<endl;
     cout<<"2.dequeue():"<<endl;
     cout<<"3.isEmpty():"<<endl;
     cout<<"4.isFull():"<<endl;
     cout<<"5.count():"<<endl;
     cout<<"6.Display():"<<endl;
     
     Node* n= new Node();
     cin>>option;
     switch(option)
     {
         case 0:
         break;
         case 1:
             cout<<"Enter the element to enqueue in the queue"<<endl;
             cin>>key;
             cin>>data;
             n->key=key;
             n->data=data;
             q1.enqueue(n);
             break;
         case 2:
             cout<<"Dequeue operation is perform:\n dequeued value is ->"<<endl;
             n=q1.dequeue();
             cout<<"dequeued value is-> ("<<n->key<<","<<n->data<<")";
             delete n;
             cout<<endl;
             break;
          case 3:
             if(q1.isEmpty())
             {
                 cout<<"Queue is Empty"<<endl;
             }
             else
             {
                 cout<<"Queue is not Empty"<<endl;
             }
             break;
             
             case 4:
             if(q1.isFull())
             {
                 cout<<"Queue is Full"<<endl;
             }
             else
             {
                 cout<<"Queue is not Full"<<endl;
             }
             break;

             case 5:
             cout<<"count the no of items in queue:"<<q1.count()<<endl;
             break;
             case 6:
             cout<<"Displaying the Items inside the circularQueue"<<endl;
             q1.display();
             break;
             default:
             cout<<"Enter the Proper Option No to get Result"<<endl;
             
             
         
     }
    }
    while(option!=0);
    
    return 0;
}