#include <bits/stdc++.h>
using namespace std;

/* check precedence of operators */
int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

void infixToPostfix(string expression)
{
    stack<char> stc;
    string result;
    char c;

    for (int i = 0; i < expression.length(); i++)
    {
        c = expression[i];

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') // if character is alphabet
            result += c;                                  // append into result

        else if (c == '(') // if open bracket
            stc.push(c);   // push into stack

        else if (c == ')') // if close bracket
        {
            while (!stc.empty() && stc.top() != '(') // pop and append all the operators between brackets into result
            {
                result += stc.top();
                stc.pop();
            }
            stc.pop(); // avoid brackets into the result
        }

        else
        {
            while (!stc.empty() && precedence(c) < precedence(stc.top())) // check the operator precedence according to rules. We are not checking associativity here.
            {
                result += stc.top();
                stc.pop();
            }
            stc.push(c); // if precedence of operator is higher than top of stack, then directly push operator into stack.
        }
    }

    while (!stc.empty()) // append all the remaining operators of stack into result.
    {
        result += stc.top();
        stc.pop();
    }

    cout << result << endl;
}

int main()
{
    string exp = "A*B-(C+D)+E";
    infixToPostfix(exp);
    return 0;
}
