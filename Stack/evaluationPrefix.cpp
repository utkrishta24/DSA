#include <bits/stdc++.h>
using namespace std;
bool is_operand(char c)
{
    return isdigit(c);
}
int evaluate(string expression)
{
    stack<int> stack;
    for (int i = expression.size() - 1; i >= 0; i--)
    {
        char c = expression[i];
        if (is_operand(c))
        {
            stack.push(c - '0');
        }
        else
        {
            int o1 = stack.top();
            stack.pop();
            int o2 = stack.top();
            stack.pop();
            switch (c)
            {
            case '+':
                stack.push(o1 + o2);
                break;
            case '-':
                stack.push(o1 - o2);
                break;
            case '*':
                stack.push(o1 * o2);
                break;
            case '/':
                stack.push(o1 / o2);
                break;
            }
        }
    }
    return stack.top();
}

int main()
{
    string exp = "+9*26";
    cout << evaluate(exp) << endl;
    return 0;
}
