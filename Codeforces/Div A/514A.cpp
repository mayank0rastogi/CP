// s=input()
// l=len(s)
// f=int(s[0])
// # print(f)
// s1=""
 
// for i in range(0,l):
//     t=int(s[i])#storing no one by one
//     # print(t)
//     x=9-t
//     # print(x)
//     if i==0 and (x==0):
//         # print("true")
//         s1=s
//         continue
//         # print("true")
//     else:
//         # print("false")
//         s1+=str(min(t,x))
    
// print(s1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();i++)
    {
        int t=s[i]-'0';//it converts the character into integer dtype
        int invert=9-t;
        
        if(i==0 && invert==0)
        {
            continue;
        }
        else
        {
            s[i]=min(t,invert)+'0';//converts back to the integer dtype into char dtype 
        }
    }
    cout<<s<<endl;
}
