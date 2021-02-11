#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
//call by refrence using pointer
void swap_pointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


void refrence_variable(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int & refrence_variable_as_function(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    
    return b;
}

int main()
{
    int x=4,y=5;
    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
    swap(x,y);
    
    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;

    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
    swap_pointer(&x,&y); 
    
    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;

    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
    refrence_variable(x,y); 
    
    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
     refrence_variable_as_function(x,y)=234;
     cout<<"the value of x is "<<x<<"The value of b is :"<<y<<endl; 
    
    return 0;
}