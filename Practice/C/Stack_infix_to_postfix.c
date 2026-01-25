#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

int precedence(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/' || x == '%')
        return 2;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;
    char ch;

    scanf("%s", infix);

    push('(');

    while (infix[i] != '\0')
        i++;
    infix[i++] = ')';
    infix[i] = '\0';

    i = 0;

    while (top != -1) {
        ch = infix[i++];

        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            while (precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        } else if (ch == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();
        }
    }

    postfix[j] = '\0';

    printf("%s", postfix);

    return 0;
}
