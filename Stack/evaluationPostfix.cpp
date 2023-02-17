/*
Algorihtm for evaluation of postfix:
1. create an empty stack st.
2. traverse through every symbol x of gievn postfix.
    a. if x is an operand, push to st.
    b. else(x is an operator)
        i. op1=st.pop()
        ii. op2=st.pop()
        iii. compute op2 x op1 and push the result to st.
    c. return st.top()
*/

#include <bits/stdc++.h>
using namespace std;
class Evaluate
{
    int top;
    int capacity;
    string *array;

public:
    Evaluate(int capacity)
    {
        top = -1;
        this->capacity = capacity;
        array = new string[capacity];
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    string peek()
    {
        return array[top];
    }
    string pop()
    {
        if (!isEmpty())
        {
            top--;
            return array[top + 1];
        }
        else
        {
            return "$";
        }
    }
    void push(string op)
    {
        top++;
        array[top] = op;
    }
    int evaluatePostfix(string exp)
    {
        for (int i = 0; i < exp.length(); i++)
        {
            if (isdigit(exp[i]))
            {
                push(string(1, exp[i]));
            }
            else
            {
                string val1 = pop();
                string val2 = pop();
                int result;
                int int_val1 = stoi(val1);
                int int_val2 = stoi(val2);
                switch (exp[i])
                {
                case '+':
                    result = int_val2 + int_val1;
                    break;
                case '-':
                    result = int_val2 - int_val1;
                    break;
                case '*':
                    result = int_val2 * int_val1;
                    break;
                case '/':
                    result = int_val2 / int_val1;
                    break;
                }
                push(to_string(result));
            }
        }
        return stoi(pop());
    }
};

int main()
{
    string exp = "231*+9-";
    Evaluate obj(exp.length());
    cout << obj.evaluatePostfix(exp) << endl;
    return 0;
}
