// INFIX TO POSTFIX
#include <iostream>
#include "./stack.hpp"
#include <string>

using namespace std;

int isOperator(char c)
{
    switch (c)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 1;
        break;
    case '/':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}

void PostFixConverterRecursive(string expression, int inc, dsa::Stack<char> &OperatorStack)
{
    // BASE CASE
    if (inc == expression.length())
    {
        cout << OperatorStack.pop() << endl;
        return;
    }

    // LOGIC

    // INDEXING THE EXPRESSION FROM START TO FINISH
    char oper = expression[inc];

    // IF IS NOT OPERATOR PRINT TO CONSOLE
    if (isOperator(oper) == 0)
    {
        cout << oper;
    }

    // IF THIS IS AN OPERAND
    else
    {
        // IF STACK HAS MORE THAN ONE OPERATOR OR LAST ITERATION
        if (OperatorStack.size >= 1 || inc == expression.length() - 1)
        {
            cout << OperatorStack.pop();
            OperatorStack.push(oper);
        }
        else
        {
            OperatorStack.push(oper);
        }
    }

    // RECURSIVE CALL
    PostFixConverterRecursive(expression, inc + 1, OperatorStack);
}

void PostFixConverter(string expression)
{
    // MAKE STACK
    dsa::Stack<char> OperatorStack;

    // LOOPING THROUGH EXPRESSION
    for (int i = 0; i < expression.length(); i++)
    {
        // INDEXING THE EXPRESSION FROM START TO FINISH
        char oper = expression[i]; // 8

        // IF IS NOT OPERATOR PRINT TO CONSOLE
        if (isOperator(oper) == 0)
        {
            cout << oper;
        }

        // IF THIS IS AN OPERAND
        else
        {
            // IF STACK HAS MORE THAN ONE OPERATOR OR LAST ITERATION
            if (OperatorStack.size >= 1 || i == expression.length() - 1)
            {
                cout << OperatorStack.pop(); // REMOVING THE *
                OperatorStack.push(oper);    // ADDING THE +
            }
            else
            {
                OperatorStack.push(oper);
            }
        }
    }
    cout << OperatorStack.pop() << endl;
}

int main()
{
    dsa::Stack<char> OperatorStack;
    string infixExpression = "2+9*10";
    PostFixConverterRecursive(infixExpression, 0, OperatorStack);
}
