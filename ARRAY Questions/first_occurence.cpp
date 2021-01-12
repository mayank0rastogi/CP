
#include<bits/stdc++.h>
using namespace std;

int occur_array(int a[],int n,int i,int key)
{
    //base case
    if(i==n)
    {
        return -1;
    }
   if(a[i]==key)
   {
       return i;
   }
   occur_array(a,n,i+1,key);

}
int last_occur(int a[],int n,int i,int key)
{

    int rest_arr=last_occur(a,n,i+1,key);
    if(rest_arr!=-1)//says rest array does'nt have our key if false ///goes to last than comes back for searching
    {
        return rest_arr;
    }
    if(a[i]==key)//rest array value = -1 than rest array does'nt contating key //checking for current i
    {

        return i;
    }
    return -1;
}

int main()
{
    cout<<"enter the no of elements in an array"<<endl;
    int n;
    cin>>n;
    cout<<"enter the iterator pointer from very first index"<<endl;
    int i;
    cin>>i;
    cout<<"enter the elements for find the occur"<<endl;
    int key;
    cin>>key;
    cout<<"Enter the Array elements :"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"first occur:::"<<"\n";
    cout<<occur_array(a,n,i,key);
    cout<<"last occur:::"<<endl;
    cout<<last_occur(a,n,i,key);

    return 0;
}
