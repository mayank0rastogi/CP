// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    /*
    The function "((a==b)&& (a<b))" will first compare a and b values and check if they are equal or not; if they are equal, the next expression will check whether "a" is smaller than "b". The output will be one if both expressions are true and 0 if not.
The function "((a==b) || (a<b))", will first compare a and b values and check if they are equal or not, even if they are not equal it will still check the next expression ie whether "a" is smaller than "b" or not. The output will be one if any one of the expressions is true and 0 if both are false.
The function "(!(a==b))", will first compare a and b values and check if they are equal or not. The output will be inversed ie if "a" and "b" are equal; the output will be 0 and 1 otherwise.
    */
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 


    return 0;
}
