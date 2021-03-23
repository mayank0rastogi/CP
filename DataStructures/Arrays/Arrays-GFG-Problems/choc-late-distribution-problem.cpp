/******************************************************************************
Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. The first line of each test case contains an integer N denoting the number of packets. Then next line contains N space separated values of the array A denoting the values of each packet. The third line of each test case contains an integer m denoting the no of students.

Output:
For each test case in a new line print the minimum difference.

Constraints:
1 <= T <= 100
1 <=N<= 107
1 <= Ai <= 1018
1 <= M <= N

Example:
Input:
2
8
3 4 1 9 56 7 9 12
5
7
7 3 2 4 9 12 56
3

Output:
6
2


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int mindifference(int a[],int n,int m)
{
    int min_diff=INT_MAX;
    if(m==0||n==0)
    {
        return 0;
    }
    
    if(n<m)
    {
        //no of students i.e; m is not greater the no of packets n
        return -1;
    }
    sort(a,a+n);

        for(int i=0;i+m-1<n;i++)
        {
            int diff=a[i+m-1]-a[i];
            if(diff<min_diff)
            {
               min_diff=diff;
            }
            
        
          }
    return min_diff;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;//denoting the no of packets
	    cin>>n;
	    int a[n];//denoting  the value of each packets
	    for(int i=0;i<n;i++)
	    {
	        
	        cin>>a[i];
	    }
	    int m;//denoting the no of students
	    cin>>m;
	    
	    cout<<mindifference(a,n,m);
	    
	}
	return 0;
}
