/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int precedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    if(c=='*' || c=='/')
    {
        return 2;
    }
    if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}


bool isOperator(char c)
{
  if(c=='+'||c=='-'||c=='^'||c=='*'||c=='/')
  {
      return true;
  }
  else
  {
      return false;
  }
}


string infix_to_prefix(stack<char>s , string infix)
{
    string prefix;
    reverse(infix.begin(),infix.end());
    for(int i=0;i<infix.length();i++)
    {
        if(infix[i]=='(')
        {
            infix[i]=')';
        }
        else if(infix[i]==')')
        {
            infix[i]='(';
        }
    }
    
    for(int i=0;i<infix.length();i++)
    {
        if((infix[i]>='a' && infix[i]<='z') || (infix[i]>='A' && infix[i]<='Z'))
        {
            prefix+=infix[i];
        }
        
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
        }
        
        else if(infix[i]==')')
        {
            while((!s.empty()) && (s.top()!='('))
            {
                ///this below statement happens till the stack is empty and when top not equal to opening bracket
                char temp=s.top();
                prefix+=temp;
                s.pop();
            }
            if(s.top()=='(')
            {
                //after getting an opening bracket i discard it
                s.pop();
            }
        }
        
        else if(isOperator(infix[i]))
        {
            if(s.empty())
            {
                s.push(infix[i]);
            }
              
              else
              {
                  if(precedence(infix[i]) > precedence(s.top()))
                  {
                      s.push(infix[i]);
                  }
                  
                  else if((precedence(infix[i])==precedence(s.top())) && (infix[i]=='^'))
                  {
                      while((precedence(infix[i])==precedence(s.top())) && (infix[i]=='^'))
                      {
                          prefix+=s.top();
                          s.pop();
                      }
                      s.push(infix[i]);
                  }
                  else if (precedence(infix[i]) == precedence(s.top()))
                  {
                      //having same precedence
                      s.push(infix[i]);
                  }
                   else
                    {
                      
                      while((precedence(infix[i]) < precedence(s.top())) && (!s.empty()))
                      {
                      char temp=s.top();
                      prefix+=temp;
                      s.pop();
                      }
                      s.push(infix[i]);
                    }
                      
                  }
              }
    
        }
    
    while(!s.empty())
    {
        prefix+=s.top();
        s.pop();
    }
    reverse(prefix.begin(),prefix.end());
    return prefix;
}
int main()
{
    string prefix,infix;
    cout<<"Emter the prefix expression \n";
    cin>>infix;
    
    stack<char>s;
    
    prefix=infix_to_prefix(s,infix);
    
    cout<<"after the evaluation the expression of prefix is\n";
    cout<<prefix<<endl;
    return 0;
    

    
}

/*
((a+b-c)*d^e^f)/g
*/
