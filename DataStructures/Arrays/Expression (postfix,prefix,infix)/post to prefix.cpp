/******************************************************************************

postfix_to_prefix

Pseudocode
function postfix_to_prefix(string postfix)
{
   1.stack s
   2.for i=0 to postfix lenght()
      2.1 If postfix[i] is isOperand 
        2.1.1 s.push(postfix[i])
      2.2 else if postfix[i] is operator
         2.2.1 op1=s.top()
         2.2.2 s.pop()
         2.2.3 op1=s.top()
         2.2.4 s.pop()
         2.3.5 s.push(postfix[i]+ op2+op1)
   end for loop
   3.return s.top()
         
    
}
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
bool isOperator(char c)
{
    if((c>='a'&& c>='z')||(c>='A'&& c>='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string postfix_to_prefix(string postfix)
{
    stack<string>s ;
    for(int i=0;i<postfix.length();i++)
    {
        if(isOperator(postfix[i]))
        {
            string op(1,postfix[i]);
            s.push(op);
        }
        
        else
        {
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push(postfix[i]+op2+op1);
        }
    }
    return s.top();
}

int main()
{
    string postfix,prefix;
    cout<<"enter the postfix expression\n";
    cin>>postfix;
    prefix=postfix_to_prefix(postfix);
    cout<<"The prefix expression is \n";
    cout<<prefix;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool isOperand(char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return true;
  } else {
    return false;
  }
}
string postfix_to_prefix(string postfix) 
{
  stack <string> s;
  
  for (int i = 0; i < postfix.length(); i++)
  {
    if (isOperand(postfix[i])) 
    {
      string op(1, postfix[i]);
      s.push(op);
    } 
    
    else
    {
      string op1 = s.top();
      s.pop();
      string op2 = s.top();
      s.pop();
      s.push(postfix[i] + op2 + op1);
    }
  }
  return s.top();
}

