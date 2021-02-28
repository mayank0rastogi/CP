#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///pointer is type of var which holds the adress of other variables
     int a=3;
     int * b=&a;
     ///adress of operator
     cout<<"The adress of a is "<<&a<<endl;;
     cout<<"The adress of b a  is "<<b<<endl;
     ///value at  derefrence operator
     cout<<" The value at adress of b is "<<*b<<endl;
     

    ///ponter to pointer
     int **c=&b;
     cout<<"The value of b is "<<&b<<endl;
     cout<<"The adress of c is "<<c<<endl;
     cout<<"The adress of c is "<<*c<<endl;
     cout<<"The value at addess value_at(value_at(c)) is "<<**c<<endl;

     
      

return 0;
}