# include<iostream>
using namespace std;
int x = 6;
void sum(){
    int a; 
    cout<<"The value is printed inside the sum function: "<<x;
    }

int main(){
    int x=9;
    x=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;///passsing true gives the value 1 instead of 0
    sum();
    cout<<"\n"<<x<<"\n"<<"the value of boolean is "<<is_true;
    cout<<"\nThis is tutorial for variables Scope & data\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
     cout<<"\nThe value of pi is: "<<pi;
    cout<<"\nThe value of c is: "<<c;
    return 0;
}
