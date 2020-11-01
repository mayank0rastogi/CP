#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int a=pow((x1-x2),2)+pow((y1-y2),2);
        int b=pow((x2-x3),2)+pow((y2-y3),2);
        int c=pow((x3-x1),2)+pow((y3-y1),2);
        bool check;
        check=(2*max({a,b,c})==a+b+c);
        if(check)
        {
            count++;
        }


        
        
    }
    cout<<count<<endl;
	// your code goes here
	return 0;
}
