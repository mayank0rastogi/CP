#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[101];
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            a[c++]=s[i]-'0';
        }
    }
    
    sort(a,a+c);
    for(int i=0;i<c;i++)
    {
        cout<<a[i];
        
        if(i==c-1)
        {
            break;
        }
        
        cout<<"+";
    }
    
    return 0;
}

// python solution :
// s = input()
// arr = [x for x in s if x.isdigit()]
// ans = '+'.join(sorted(arr))
// print(ans)
