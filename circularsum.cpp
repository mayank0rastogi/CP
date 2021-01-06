#include<bits/stdc++.h>
#include<climits>.h>
using namespace std;


int kadane(int a[], int n)//here kadane's algorithm gives as a negative role by taking out non contributing element by
//assigning all reversing all elements sign.
{
int currsum=0;
int max_sum=INT_MIN;
for(int i=0;i<n;i++)
{
currsum+=a[i];
if(currsum<0)
{
currsum=0;
}

cout<<"value of curr sum"<<currsum<<endl;
max_sum=max(max_sum,currsum);
}
return max_sum;

}
int main()
{
    //wrapping means goes last element from first element

    int wrapsum;//contributing element
    int nowwrapsum,n;//non contributing element
    //user input
    cin>>n;//size
    int a[n];//array
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    nowwrapsum=kadane(a,n);
    cout<<"value of now wrapsum"<<nowwrapsum<<endl;
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
    totalsum+=a[i];
    cout<<"value of the total sum "<<totalsum<<endl;
    a[i]=-a[i];
    }
    wrapsum=totalsum+kadane(a,n);//here array elements goes are reversed sign array
     cout<<"value of wrapsum when reversing : "<<wrapsum<<endl;
    cout<<max(wrapsum,nowwrapsum)<<endl;

return 0;
}
