/*
???infix_to_postfix
*/
#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
    {
        return true;
        
    }
    else
    {
        return false;
    }
}


int precedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infix_to_postfix(stack<char>s,string infix)
{
    string postfix;
    for(int i=0;i<infix.length();i++)
    {
        ///first condtion deals with operands means alphabets
        if((infix[i]>='a' && infix[i]<='z')||(infix[i]>='A' && infix[i]<='Z'))
        {
            //then append that character in the postfix
            postfix+=infix[i];
        }
        else if(infix[i]=='('){
            s.push(infix[i]);
            
        }
        
        else if(infix[i]==')')
        {
            while((s.top()!='(') && (!s.empty()))
            {
                char temp=s.top();
                postfix+=temp;
                s.pop();
            }
            if(s.top()=='(')
            {
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
                
                else if((precedence(infix[i]) == precedence(s.top())) && (infix[i]=='^'))
                {
                    s.push(infix[i]);
                }
                else
                {
                    while((!s.empty())&&( precedence(infix[i])<=precedence(s.top())))
                    {
                        //it will stop only when stack gets empty or infix precedence is greater than top of stack
                        char temp=s.top();
                        postfix+=temp;
                        s.pop();
                    }
                    
                    s.push(infix[i]);
                }
            }
        }
    }    
  
    while(!s.empty())
    {
        postfix+=s.top();
        s.pop();
    }
    
    return postfix;
}


int main()
{
    string postfix,infix;
    cin>>infix;
    stack<char>s;
    cout<<"infix expression is "<<infix<<endl;
    
    postfix=infix_to_postfix(s,infix);
    
    cout<<"postfix expression is "<<postfix<<endl;
    
    return 0;
}
