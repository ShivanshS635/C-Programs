#include <stdio.h>

char stack[80];
int top = -1;

void push(char ch)
{
    if (top == 79)
    {
        printf("\nOverflow");
        return;
    }
    top = top + 1;
    stack[top] = ch;
}

char pop()
{
    if (top == -1)
    {
        printf("\nUnderflow");
        return ' ';
    }
    char ch = stack[top];
    top = top - 1;
    return ch;
}

int main()
{
    char exp[80] = "[{()}";
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '[' || exp[i] == '{' || exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ']' || exp[i] == '}' || exp[i] == ')')
        {
            char ch = pop();
            if (ch == ' ')
            {
                printf("\nLeft parenthesis missing..");
                return 0;
            }
            else
            {
                if (!((ch == '[' && exp[i] == ']') || (ch == '{' && exp[i] == '}') || (ch == '(' && exp[i] == ')')))
                {
                    printf("\nNot well formed..");
                    return 0;
                }
            }
        }
    }

    if (top != -1)
    {
        printf("\nRight brackets missing");
        return 0;
    }
    printf("\nWell formed..");

    return 0;
}
