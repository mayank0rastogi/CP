#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("out.txt","w",stdout);
#else
#define freopen //comment
#endif

int count_specific_no(int m,int n)
{
	// int for_1=1;
	// int for_2=4;
	// int for_9=9;
	int count=0;
    int flag;
	// int num=m;
	if(m>n)
	{
		return -1;
	}

	for(int i=m;i<=n;i++)
	{
		int store=i;
		// cout<<" value of store --> "<<store<<endl;
		flag=0;
		while(store!=0)
		{
           int digit=store%10;
            // cout<<"inside while loop single digit -->"<<digit<<endl;

           if(digit==0 || digit==2 || digit==3 || digit==5 || digit==6 || digit==7 ||digit==8)
           {
           	flag=1; //set flag to 1 as we found the number equal to  writen in if confition 
            break; //and come out of the lop
           }
           store=store/10; //not necessary for other no to cheeck if single elment found
           // cout<<"value goes for store/10 -->"<<store<<endl;

		}
	    if(flag==0)
	      {
	      	count++;
	      }

	}
	return count;
}

int main()
{
	freopen
	int m,n;
	cin>>m>>n;

	// int m=100;
	// int n=200;
	cout<<count_specific_no(m,n);
	return 0;
}
