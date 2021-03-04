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
string prefix_to_infix(string prefix)
{
    stack<string> s;
    for (int i = prefix.length()-1; i >=0 ; i--) 
    {
        if ((prefix[i] >= 'a' && prefix[i] <= 'z') || (prefix[i] >= 'A' && prefix[i] <= 'Z'))
        {
            string op(1, prefix[i]);//called the constructor of string class and 1 represent the copy of 1 and 
            ///also changes the data type of character given by prefix[i] inyo string 
            //string op=prefix[i];
            s.push(op);
        }
        else {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op1 + prefix[i] + op2 + ")");
        }
    }

    return s.top();
}

int main()
{

    string infix, prefix;
    cout << "Enter a POSTFIX Expression :" << endl;
    cin >> prefix;
    cout << "PREFIX EXPRESSION: " << prefix << endl;
    infix = prefix_to_infix(prefix);
    cout << endl
         << "INFIX EXPRESSION: " << infix;

    return 0;
}