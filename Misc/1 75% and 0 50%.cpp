/******************************************************************************

// Program to print 1 with 75% probability and 0
// with 25% probability

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int rand50()
{
      // rand() function will generate odd or even
    // number with equal probability. If rand()
    // generates odd number, the function will
    // return 1 else it will return 0.
    return rand() & 1;
}
// Random Function to that returns 1 with 75%
// probability and 0 with 25% probability using
// Bitwise OR
bool rand75_1()
{
    return rand50() | rand50();
}



int main()
{
   //initialize the random number generator
   
   srand(time(NULL));
   for(int i=0;i<50;i++)
   {
       cout<<rand75_1();
   }
    return 0;
}
