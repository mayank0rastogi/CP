/*
PREFIX TO POSTFIX
Pseudocode
function prefix_to_postfix(string prefix)
{
   1.stack s
   2.for i=0 to prefix lenght()
      2.1 If prefix[i] is isOperand 
        2.1.1 s.push(prefix[i])
      2.2 else if prefix[i] is operator
         2.2.1 op1=s.top()
         2.2.2 s.pop()
         2.2.3 op1=s.top()
         2.2.4 s.pop()
         2.3.5 s.push(op1+op2+prefix[i])
   end for loop
   3.return s.top()
*/

#include<bits/stdc++.h>
 
using namespace std;
 
bool isOperand(char c) 
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  {
    return true;
  } 
  else 
  {
    return false;
  }
}
 
string prefix_to_postfix(string prefix)
{
  stack <string> s;
  for (int i = prefix.length()-1; i >= 0; i--) 
  {
    if (isOperand(prefix[i])) 
    {
      string op(1, prefix[i]);
      s.push(op);
    } 
    
    else 
    {
      string op1 = s.top();
      s.pop();
      string op2 = s.top();
      s.pop();
      s.push(op1 + op2 + prefix[i]);
    }
  }
 
  return s.top();
}
 
int main() {
 
  string prefix, postfix;
  cout << "Enter a PREFIX Expression :" << endl;
  cin >> prefix;
  cout << "PREFIX EXPRESSION: " << prefix << endl;
  postfix = prefix_to_postfix(prefix);
  cout << endl << "POSTFIX EXPRESSION: " << postfix;
 
  return 0;
}
