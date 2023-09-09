#include <stdio.h>

#define MAX 10

typedef struct
{
    /* data */
    int mystack[MAX];
    int top;
} stk;

void push(stk *s, int data)
{
    if (s->top == MAX)
    {
        printf("Stack overflow");
        return;
    }
    s->mystack[++s->top] = data;
    printf("\n%d pushed", s->mystack[s->top]);
    return;
}

int pop(stk *s)
{
    if (s->top == -1)
    {
        printf("Stack underflow");
        return -1;
    }
    printf("\n%d popped element", s->mystack[s->top]);
    return s->mystack[s->top--];
}

void peek(stk *s)
{
    printf("\n%d top element", s->mystack[s->top]);
}

void display(stk s)
{
    printf("\n");
    for (int i = 0; i <= s.top; i++)
    {
        printf("%d  ", s.mystack[i]);
    }
}

int main()
{
    stk s;
    s.top = -1; // initializing the stack
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    display(s);
    pop(&s);
    display(s);
    peek(&s);
}