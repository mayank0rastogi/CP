/******************************************************************************


*******************************************************************************/
/*
#include <bits/stdc++.h>
using namespace std;

string postfix_to_infix(string postfix)
{
    stack<string>s;
    for(int i=0;i<postfix.length();i++)
    {
        if(postfix[i]>='a' && postfix[i]<='z' ||postfix[i]>='A' && postfix[i]<='Z')
        {
            string op(1,postfix[i]);
            s.push(op);
        }
        else
        { //(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='^')
            string op1=s.top();
            s.pop();
           string op2=s.top();
            s.pop();
            
            s.push("("+ op2 + postfix[i] + op2 + ")");
        }
    }
    return s.top();
}
int main()
{
 string postfix,infix;
 cout<<"Enter the postfix epression\n";
 cin>>postfix;
 
 
 infix=postfix_to_infix(postfix);
 
 cout<<"The final expression of infix is \n";
 cout<<infix<<endl;
    return 0;
}
*/
#include <bits/stdc++.h>


using namespace std;
/*
bool isOperand(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}
*/
string postfix_to_infix(string postfix)
{
    stack<string> s;
    for (int i = 0; i < postfix.length(); i++) 
    {
        if ((postfix[i] >= 'a' && postfix[i] <= 'z') || (postfix[i] >= 'A' && postfix[i] <= 'Z'))
        {
            string op(1, postfix[i]);//called the constructor of string class and 1 represent the copy of 1 and 
            ///also changes the data type of character given by postfix[i] inyo string 
            //string op=postfix[i];
            s.push(op);
        }
        else {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + postfix[i] + op1 + ")");
        }
    }

    return s.top();
}

int main()
{

    string infix, postfix;
    cout << "Enter a POSTFIX Expression :" << endl;
    cin >> postfix;
    cout << "POSTFIX EXPRESSION: " << postfix << endl;
    infix = postfix_to_infix(postfix);
    cout << endl
         << "INFIX EXPRESSION: " << infix;

    return 0;
}