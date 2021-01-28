#include<bits/stdc++.h>

using namespace std;


int min_dist_between_two_numbers(int a[],int n,int x,int y)
{

///initialize the previous pointer
int p=-1;
int min_dist=INT_MAX;
///check that size if array is not less than 2
for(int i=0;i<n;i++)
{
if(a[i]==x || a[i]==y)
{

   if(p!=-1 && a[i]!=a[p])
        min_dist=min(min_dist,i-p);
        ///update the previous index
   p=i;
}
}

if(min_dist==INT_MAX)
{

    return -1;

}
return min_dist;

}


int main()
{ // Change n at the top to change number of elements
    // in an array

    int a[]={3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Enter the value of x:";

int x;
cin>>x;
cout<<"Enter the value of y:";
int y;
cin>>y;

    cout<<" Minimum Distance between "<< x <<"and"<<y <<" "<<min_dist_between_two_numbers(a,n,x,y);

    return 0;
}
