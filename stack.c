#include "main.h"

void push(Stack_t *stk, int data)
{
	++(stk -> top);
	stk -> stack[stk -> top] = data;
}

int  pop(Stack_t *stk)
{
	if (stk -> top != -1)
		//--(stk -> top);
	 return stk -> stack[stk -> top--];
}

int peek(Stack_t *stk)
{
	if (stk -> top != -1)
	{
		return stk -> stack[stk -> top];
	}
	return -1;
}

int priority(char opr)
{

    switch(opr)
    {
        case '+': return 1;
                  break;
        case '-': return 1;
                  break;
        case '*': return 2;
                  break;
        case '/': return 2;
                  break;
        case '(': return 0;
                  break;
        case ')': return 0;
                  break;
    }


}
