/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class Stack
{
    private:
     int top;
     int ar[5];
    public:
    Stack()//initialized the constructor
    {
        top=-1;//suppose nothing inside the stack
        for(int i=0;i<4;i++)
        {
            ar[i]=0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
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
        if(top==4)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            ar[top]=val;
        }
    }
    int pop()//as we returning the value which is popped out to the stack i.e; popval
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        else
        {
            int popval=ar[top];
            ar[top]=0;
            top--;
            return popval;
        }
        
    }
    int count()
    {
        return (top+1);
    }
    int peek(int pos)
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        else
        {
            return ar[pos];
        }
        
    }
    void change(int pos,int val)
    {
        ar[pos]=val;
        cout<<"Position changed at the location"<<pos<<endl;
    }
    void display()
    {
        cout<<"All Values in the array"<<endl;
        for(int i=4;i>=0;i--)
        {
            cout<<ar[i]<<endl;
        }
    }
};
int main()
{
    Stack s1;
    int option,value,position;
    do
    {
     cout<<"Enter the option which operation you want to perform"<<endl;
     cout<<"1.push():"<<endl;
     cout<<"2.pop():"<<endl;
     cout<<"3.isEmpty():"<<endl;
     cout<<"4.isFull():"<<endl;
     cout<<"5.Change():"<<endl;
     cout<<"6.peek():"<<endl;
     cout<<"7.count():"<<endl;
     cout<<"8.Display():"<<endl;
     
     
     cin>>option;
     switch(option)
     {
         case 1:
             cout<<"Enter the element to push in the stack"<<endl;
             cin>>value;
             s1.push(value);
             break;
         case 2:
             cout<<"Popped Element in the stack is:"<<s1.pop()<<endl;
             break;
          case 3:
             if(s1.isEmpty())
             {
                 cout<<"Stack is Empty"<<endl;
             }
             else
             {
                 cout<<"Stack is not Empty"<<endl;
             }
             break;
             case 4:
             if(s1.isFull())
             {
                 cout<<"Stack is Full"<<endl;
             }
             else
             {
                 cout<<"Stack is not Full"<<endl;
             }
             break;
             case 5:
             cout<<"Change Function is called"<<endl;
             cout<<"Enter the element position want to be changed in this place"<<endl;
             cin>>position;
             cout<<"Enter the value to be changed in this position"<<endl;
             cin>>value;
             s1.change(position,value);
             break;
             case 6:
             cout<<"See the  element position which you want to peek in  the stack"<<position<<"is"<<s1.peek(position)<<endl;
             cin>>position;
             
             break;
             case 7:
             cout<<" Total elements in the  stack"<<s1.count()<<endl;
             break;
             case 8:
             cout<<"Display the  stack"<<endl;
             s1.display();
             break;
             default:
             cout<<"Enter the Proper Option No to get Result"<<endl;
             
             
         
     }
    }
    while(option!=0);
    
    return 0;
}



