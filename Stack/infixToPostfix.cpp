/*
1. Create an empty stack st
2. Do following for every character x from left to right
3. If x is:
    a. Operand: Output it
    b. Left Parentheses: Push to st
    c. Right Parentheses: Pop from st until left Paratheses is found, Output the popped operators.
    d. Operator: If st is empty, push x to st.
                 Else compare with st top.
            i. higher precedence(than st top), push to st.
            ii. lower precedence, pop st top and output until a higher precedence operator is found. Then push s to st.
            iii. Equal precedence, use associativity.
4. Pop and output everything.
*/
// 0(n)
#include <bits/stdc++.h>
using namespace std;

class Conversion
{
private:
    int top;
    int capacity;
    char *array;
    string output;
    map<char, int> precedence;

public:
    Conversion(int capacity)
    {
        top = -1;
        this->capacity = capacity;
        array = new char[capacity];
        output = "";
        precedence['+'] = 1;
        precedence['-'] = 1;
        precedence['*'] = 2;
        precedence['/'] = 2;
        precedence['^'] = 3;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    char peek()
    {
        return array[top];
    }
    char pop()
    {
        if (!isEmpty())
        {
            top--;
            return array[top + 1];
        }
        else
        {
            return '$';
        }
    }
    void push(char op)
    {
        top++;
        array[top] = op;
    }
    bool isOperand(char ch)
    {
        return isalpha(ch);
    }
    bool notGreater(char i)
    {
        map<char, int>::iterator a, b;
        a = precedence.find(i);
        b = precedence.find(peek());
        if (a != precedence.end() && b != precedence.end())
            return (a->second <= b->second);
        else
            return false;
    }
    void infixToPostfix(string exp)
    {
        for (int i = 0; i < exp.length(); i++)
        {
            if (isOperand(exp[i]))
            {
                output += exp[i];
            }
            else if (exp[i] == '(')
            {
                push(exp[i]);
            }
            else if (exp[i] == ')')
            {
                while (!isEmpty() && peek() != '(')
                {
                    char a = pop();
                    output += a;
                }
                if (!isEmpty() && peek() != '(')
                {
                    cout << "Invalid expression" << endl;
                    return;
                }
                else
                {
                    pop();
                }
            }
            else
            {
                while (!isEmpty() && notGreater(exp[i]))
                {
                    char a = pop();
                    output += a;
                }
                push(exp[i]);
            }
        }
        while (!isEmpty())
        {
            char a = pop();
            output += a;
        }
        cout << output << endl;
    }
};

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    Conversion obj(exp.length());
    obj.infixToPostfix(exp);
    return 0;
}
